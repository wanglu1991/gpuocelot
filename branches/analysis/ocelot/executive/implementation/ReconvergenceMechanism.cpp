/*!
	\file ReconvergenceMechanism.cpp
	\author Andrew Kerr <arkerr@gatech.edu>
	\date Nov 15, 2010
	\brief extracts the reconvergence mechanism from CooperativeThreadArray
*/

// Ocelot includes
#include <ocelot/executive/interface/ReconvergenceMechanism.h>
#include <ocelot/executive/interface/RuntimeException.h>
#include <ocelot/executive/interface/EmulatedKernel.h>

// Hydrazine includes
#include <hydrazine/implementation/debug.h>

////////////////////////////////////////////////////////////////////////////////

#ifdef REPORT_BASE
#undef REPORT_BASE
#endif

// global control for enabling reporting within the emulator
#define REPORT_BASE 0

#define REPORT_BAR 1

////////////////////////////////////////////////////////////////////////////////
executive::ReconvergenceMechanism::ReconvergenceMechanism(
	 CooperativeThreadArray *_cta)
: 
	type(Reconverge_unknown),
	cta(_cta)
{

}

//! \brief gets a string-representation of the type
std::string executive::ReconvergenceMechanism::toString(Type type) {
	switch (type) {
	case Reconverge_IPDOM: return "ipdom";
	case Reconverge_Barrier: return "barrier";
	case Reconverge_TFGen6: return "tf-gen6";
	case Reconverge_TFSortedStack: return "tf-sorted-stack";
	case Reconverge_unknown:
	default:
		break;
	}
	return "unknown-reconverge";
}

////////////////////////////////////////////////////////////////////////////////

executive::ReconvergenceIPDOM::ReconvergenceIPDOM(CooperativeThreadArray *cta)
: ReconvergenceMechanism(cta)
{
	type = Reconverge_IPDOM;
}

void executive::ReconvergenceIPDOM::initialize() {
	CTAContext context(cta->kernel, cta);
	runtimeStack.clear();
	pcStack.clear();
	runtimeStack.push_back(context);
	pcStack.push_back(0);
}

void executive::ReconvergenceIPDOM::evalPredicate(
	executive::CTAContext &context) {
	
}

bool executive::ReconvergenceIPDOM::eval_Bra(executive::CTAContext &context, 
	const ir::PTXInstruction &instr, 
	const boost::dynamic_bitset<> & branch, 
	const boost::dynamic_bitset<> & fallthrough) {

	bool isDivergent = false;
	if (instr.uni) {

		// unfiorm
		if (branch.count()) {
			// all threads branch
			context.PC = instr.branchTargetInstruction;
		}
		else {
			// all threads fall through
			context.PC ++;
		}
	}
	else {
		// divergence - complicated
		CTAContext branchContext(context), fallthroughContext(context),
			reconvergeContext(context);

		branchContext.active = branch;
		branchContext.PC = instr.branchTargetInstruction;

		fallthroughContext.active = fallthrough;
		fallthroughContext.PC++;
		
		reconvergeContext.PC = instr.reconvergeInstruction + 1;
		int reconverge = pcStack.back();
		
		runtimeStack.pop_back();
		pcStack.pop_back();

		bool reconvergeContextAlreadyExists = false;
		for(RuntimeStack::reverse_iterator si = runtimeStack.rbegin(); 
			si != runtimeStack.rend(); ++si) {
			if(si->PC == reconvergeContext.PC) {
				reconvergeContextAlreadyExists = true;
				break;
			}
		}

		if(!reconvergeContextAlreadyExists) {
			runtimeStack.push_back(reconvergeContext);
			pcStack.push_back(reconverge);
		}
		
		if (branchContext.active.any()) {
			runtimeStack.push_back(branchContext);
			pcStack.push_back(instr.reconvergeInstruction);
		}
		
		if (fallthroughContext.active.any()) {
			runtimeStack.push_back(fallthroughContext);		
			pcStack.push_back(instr.reconvergeInstruction);
		}
	}

	return isDivergent;
}

void executive::ReconvergenceIPDOM::eval_Bar(executive::CTAContext &context, 
	const ir::PTXInstruction &instr) {
	
	if (context.active.count() < context.active.size()) {
		// deadlock - not all threads reach synchronization barrier
#if REPORT_BAR
		report(" Bar called - " << context.active.count() << " of " 
			<< context.active.size() << " threads active");
#endif
		throw RuntimeException("barrier deadlock at: ", context.PC, instr);
	}
}

void executive::ReconvergenceIPDOM::eval_Reconverge(
	executive::CTAContext &context, const ir::PTXInstruction &instr) {
	if(runtimeStack.size() > 1)	{
		if(pcStack.back() == context.PC) {
			pcStack.pop_back();
			runtimeStack.pop_back();
		}
		else {
			context.PC++;
		}
	}
	else {
		context.PC++;
	}
}

void executive::ReconvergenceIPDOM::eval_Exit(executive::CTAContext &context, 
	const ir::PTXInstruction &instr) {
	eval_Bar(context, instr);
	context.running = false;
}

bool executive::ReconvergenceIPDOM::nextInstruction(
	executive::CTAContext &context, 
	const ir::PTXInstruction::Opcode &opcode) {

	// advance to next instruction if the current instruction wasn't a branch
	if (opcode != ir::PTXInstruction::Bra
		&& opcode != ir::PTXInstruction::Reconverge
		&& opcode != ir::PTXInstruction::Call
		&& opcode != ir::PTXInstruction::Ret ) {
		context.PC++;
	}
	return context.running;
}

executive::CTAContext& executive::ReconvergenceIPDOM::getContext() {
	return runtimeStack.back();
}

size_t executive::ReconvergenceIPDOM::stackSize() const {
	return runtimeStack.size();
}

void executive::ReconvergenceIPDOM::push(executive::CTAContext& c) {
	runtimeStack.push_back(c);
}

void executive::ReconvergenceIPDOM::pop() {
	runtimeStack.pop_back();
}

////////////////////////////////////////////////////////////////////////////////

executive::ReconvergenceBarrier::ReconvergenceBarrier(
	CooperativeThreadArray *cta)
: ReconvergenceMechanism(cta)
{
	type = Reconverge_Barrier;
}

void executive::ReconvergenceBarrier::initialize() {
	CTAContext context(cta->kernel, cta);
	runtimeStack.clear();
	runtimeStack.push_back(context);
}

void executive::ReconvergenceBarrier::evalPredicate(
	executive::CTAContext &context) {

}

bool executive::ReconvergenceBarrier::eval_Bra(executive::CTAContext &context, 
	const ir::PTXInstruction &instr, 
	const boost::dynamic_bitset<> & branch, 
	const boost::dynamic_bitset<> & fallthrough) {
	
	bool isDivergent = false;
	
	if (instr.uni) {
		// unfiorm
		if (branch.count()) {
			// all threads branch
			context.PC = instr.branchTargetInstruction;
		}
		else {
			// all threads fall through
			context.PC ++;
		}
	}
	else {
		// divergence - complicated
		CTAContext branchContext(context), fallthroughContext(context);

		branchContext.active = branch;
		branchContext.PC = instr.branchTargetInstruction;

		fallthroughContext.active = fallthrough;
		fallthroughContext.PC++;

		runtimeStack.pop_back();
		
		if (branchContext.active.any()) {
			runtimeStack.push_back(branchContext);
		}
		
		if (fallthroughContext.active.any()) {
			runtimeStack.push_back(fallthroughContext);		
		}
		
		isDivergent = true;
	}
	
	return isDivergent;
}

void executive::ReconvergenceBarrier::eval_Bar(executive::CTAContext &context, 
	const ir::PTXInstruction &instr) {
	
	CTAContext continuation(context);
	runtimeStack.pop_back();
	if (runtimeStack.size() == 0) {
		continuation.active.set();
		continuation.PC = context.PC + 1;
		runtimeStack.push_back(continuation);
	}
}

void executive::ReconvergenceBarrier::eval_Reconverge(
	executive::CTAContext &context, 
	const ir::PTXInstruction &instr) {
}

void executive::ReconvergenceBarrier::eval_Exit(executive::CTAContext &context, 
	const ir::PTXInstruction &instr) {
	if (runtimeStack.size() == 1) {
		context.running = false;
	}
	else {
		eval_Bar(context, instr);
	}
}

bool executive::ReconvergenceBarrier::nextInstruction(
	executive::CTAContext &context, 
	const ir::PTXInstruction::Opcode &opcode) {

	// advance to next instruction if the current instruction wasn't a branch
	if (opcode != ir::PTXInstruction::Bra
		&& opcode != ir::PTXInstruction::Bar
		&& opcode != ir::PTXInstruction::Call
		&& opcode != ir::PTXInstruction::Ret
		&& opcode != ir::PTXInstruction::Exit) {
		context.PC++;
	}
	return context.running;
}

executive::CTAContext& executive::ReconvergenceBarrier::getContext() {
	return runtimeStack.back();
}

size_t executive::ReconvergenceBarrier::stackSize() const {
	return runtimeStack.size();
}

void executive::ReconvergenceBarrier::push(executive::CTAContext& c) {
	runtimeStack.push_back(c);
}

void executive::ReconvergenceBarrier::pop() {
	runtimeStack.pop_back();
}

		
////////////////////////////////////////////////////////////////////////////////

executive::ReconvergenceTFGen6::ReconvergenceTFGen6(CooperativeThreadArray *cta)
: ReconvergenceMechanism(cta)
{
	type = Reconverge_TFGen6;
}

void executive::ReconvergenceTFGen6::initialize() {
	CTAContext context(cta->kernel, cta);
	runtimeStack.clear();
	runtimeStack.push_back(context);
	threadPCs.resize(runtimeStack.back().active.size(), runtimeStack.back().PC);
}

void executive::ReconvergenceTFGen6::evalPredicate(
	executive::CTAContext &context) {
	for (size_t tid = 0; tid < context.active.size(); tid++) {
		context.active[tid] = (threadPCs[tid] == context.PC);
	}
}

bool executive::ReconvergenceTFGen6::eval_Bra(executive::CTAContext &context, 
	const ir::PTXInstruction &instr, 
	const boost::dynamic_bitset<> & branch, 
	const boost::dynamic_bitset<> & fallthrough) {
	
	report("eval_Bra([PC " << context.PC << "])");

	// handle nops
	if (!context.active.count()) { 
		context.PC++;
		return false;
	}
	
	for (unsigned int id = 0, end = branch.size(); id != end; ++id) {
		if (branch[id]) {
			threadPCs[id] = instr.branchTargetInstruction;
		}
	}

	for (unsigned int id = 0, end = fallthrough.size(); id != end; ++id) {
		if (fallthrough[id]) {
			++threadPCs[id];
		}
	}
	
	bool divergent = true;
	
	if (branch.count() == branch.size()) {
		context.PC = instr.branchTargetInstruction;
		divergent = false;
	}
	else if (fallthrough.count() == fallthrough.size()) {
		++context.PC;
		divergent = false;
	}
	else {
		context.PC = instr.reconvergeInstruction;
	}
	
	return divergent;
}

void executive::ReconvergenceTFGen6::eval_Bar(executive::CTAContext &context, 
	const ir::PTXInstruction &instr) {

	if (!context.active.count()) { 
		context.PC ++;
		return;
	}
	
	size_t activeThreads = context.active.count();
	if (activeThreads && activeThreads != context.active.size()) {
		report("warp PC: " << context.PC);
		for (size_t tid = 0; tid < context.active.size(); tid++) {
			report(" " << threadPCs[tid]);
		}
		throw RuntimeException(
			"GEN6 reconvergence mechanism hasn't re-converged by "
				"barrier.synchronization",
			context.PC, instr);
	}
}

void executive::ReconvergenceTFGen6::eval_Reconverge(
	executive::CTAContext &context, 
	const ir::PTXInstruction &instr) {
	throw RuntimeException(
		"GEN6 reconvergence mechanism does not use explicit "
		"re-converge instructions",
		context.PC, instr);
}

void executive::ReconvergenceTFGen6::eval_Exit(executive::CTAContext &context, 
	const ir::PTXInstruction &instr) {
	if (!context.active.count()) { 
		context.PC ++;
		return;
	}
	if (runtimeStack.size() == 1
		|| context.active.count() == context.active.size()) {
		context.running = false;
	}
	else {	void initialize();

		runtimeStack.pop_back();
	}
}

bool executive::ReconvergenceTFGen6::nextInstruction(
	executive::CTAContext &context, 
	const ir::PTXInstruction::Opcode &opcode) {
	
	// advance to next instruction if the current instruction wasn't a branch
	if (opcode != ir::PTXInstruction::Bra
		&& opcode != ir::PTXInstruction::Exit
		&& opcode != ir::PTXInstruction::Call
		&& opcode != ir::PTXInstruction::Ret) {
		
		context.PC++;
	}
	
	// GEN6 must manually increment the warp PC if instructions
	// are branch or reconverge
	if (opcode != ir::PTXInstruction::Bra
		&& opcode != ir::PTXInstruction::Exit) {
		//
		// these instruction handlers have to update each thread PC individually
		//
		for (size_t tid = 0; tid < context.active.size(); tid++) {
			if (context.active[tid]) {
				threadPCs[tid] = context.PC;
			}
		}
	}
	return context.running;
}

executive::CTAContext& executive::ReconvergenceTFGen6::getContext() {
	return runtimeStack.back();
}

size_t executive::ReconvergenceTFGen6::stackSize() const {
	return runtimeStack.size();
}

void executive::ReconvergenceTFGen6::push(executive::CTAContext& c) {
	runtimeStack.push_back(c);
}

void executive::ReconvergenceTFGen6::pop() {
	runtimeStack.pop_back();
}

////////////////////////////////////////////////////////////////////////////////

executive::ReconvergenceTFSortedStack::ReconvergenceTFSortedStack(
	CooperativeThreadArray *cta)
: ReconvergenceMechanism(cta)
{
	type = Reconverge_TFSortedStack;
}

void executive::ReconvergenceTFSortedStack::initialize() {
	stack.clear();
	stack.push_back(RuntimeStack());
	stack.back().insert(std::make_pair(0, CTAContext(cta->kernel, cta)));
}

void executive::ReconvergenceTFSortedStack::evalPredicate(
	executive::CTAContext &context) {

}

bool executive::ReconvergenceTFSortedStack::eval_Bra(
	executive::CTAContext &context, 
	const ir::PTXInstruction &instr, 
	const boost::dynamic_bitset<> & branch, 
	const boost::dynamic_bitset<> & fallthrough) {

	bool divergent = false;

	CTAContext branchContext(context), fallthroughContext(context);
	
	stack.back().erase(stack.back().begin());

	// TODO: set the check condition correctly

	if (branch.any()) {
		branchContext.active = branch;
		branchContext.PC = instr.branchTargetInstruction;
		
		RuntimeStack::iterator existing = stack.back().find(
			branchContext.PC);
		
		if (existing != stack.back().end()) {
			existing->second.active |= branchContext.active;
		}
		else {
			stack.back().insert(std::make_pair(
				branchContext.PC, branchContext));
		}
	}

	if (fallthrough.any())
	{
		fallthroughContext.active = fallthrough;
		fallthroughContext.PC++;
	
		RuntimeStack::iterator existing = stack.back().find(
			fallthroughContext.PC);
		
		if (existing != stack.back().end()) {
			existing->second.active |= fallthroughContext.active;
		}
		else {
			stack.back().insert(std::make_pair(
				fallthroughContext.PC, fallthroughContext));
		}
	}
	
	divergent = true;
	
	return divergent;
}

void executive::ReconvergenceTFSortedStack::eval_Bar(
	executive::CTAContext &context,
	const ir::PTXInstruction &instr) {
	if (context.active.count() < context.active.size()) {
		// deadlock - not all threads reach synchronization barrier
#if REPORT_BAR
		report(" Bar called - " << context.active.count() << " of " 
			<< context.active.size() << " threads active");
#endif
		throw RuntimeException("barrier deadlock at: ", context.PC, instr);
	}
}

void executive::ReconvergenceTFSortedStack::eval_Reconverge(
	executive::CTAContext &context, 
	const ir::PTXInstruction &instr) {
	throw RuntimeException("sorted stack thread frontier re-convergence does "
		"not use explicit re-converge instructions. ", context.PC, instr);
}

void executive::ReconvergenceTFSortedStack::eval_Exit(
	executive::CTAContext &context, 
	const ir::PTXInstruction &instr) {
	if (stack.back().size() == 1) {
		context.running = false;
	}
	else {
		throw RuntimeException("not all threads hit the exit: ",
			context.PC, instr);
	}
}

bool executive::ReconvergenceTFSortedStack::nextInstruction(
	executive::CTAContext &context,
	const ir::PTXInstruction::Opcode &opcode) {

	// advance to next instruction if the current instruction wasn't a branch
	if (opcode != ir::PTXInstruction::Bra
		&& opcode != ir::PTXInstruction::Call
		&& opcode != ir::PTXInstruction::Ret) {
		context.PC++;
	}
	return context.running;
}

executive::CTAContext& executive::ReconvergenceTFSortedStack::getContext() {
	return stack.back().begin()->second;
}

size_t executive::ReconvergenceTFSortedStack::stackSize() const {
	return stack.back().size();
}

void executive::ReconvergenceTFSortedStack::push(executive::CTAContext& c) {
	stack.push_back(RuntimeStack());
	stack.back().insert(std::make_pair(c.PC, c));
}

void executive::ReconvergenceTFSortedStack::pop() {
	assert(stack.size() > 1);
	stack.pop_back();
}

////////////////////////////////////////////////////////////////////////////////
