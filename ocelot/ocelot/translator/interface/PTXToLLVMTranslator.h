/*!
	\file PTXToLLVMTranslator.h
	\date Wednesday July 29, 2009
	\author Gregory Diamos <gregory.diamos@gatech.edu>
	\brief The header file for the PTXToLLVMTranslator class
*/

#ifndef PTX_TO_LLVM_TRANSLATOR_H_INCLUDED
#define PTX_TO_LLVM_TRANSLATOR_H_INCLUDED

#include <ocelot/translator/interface/Translator.h>
#include <ocelot/ir/interface/LLVMInstruction.h>

namespace ir
{
	class PTXInstruction;
	class Instruction;
	class LLVMKernel;
	class PTXOperand;
}

namespace translator
{

	/*! \brief A translator from PTX to LLVM */
	class PTXToLLVMTranslator : public Translator
	{	
		private:
			ir::LLVMKernel* _llvmKernel;
			unsigned int _tempRegisterCount;
		
		private:
			static ir::LLVMInstruction::Operand 
				_translate( const ir::PTXOperand& o );
		
		private:
			void _translateInstructions();
			void _translate( const ir::PTXInstruction& i );
			void _translateAbs( const ir::PTXInstruction& i );
			void _translateAdd( const ir::PTXInstruction& i );
			void _translateAddC( const ir::PTXInstruction& i );
			void _translateAnd( const ir::PTXInstruction& i );
			void _translateAtom( const ir::PTXInstruction& i );
			void _translateBar( const ir::PTXInstruction& i );
			void _translateBra( const ir::PTXInstruction& i );
			void _translateBrkpt( const ir::PTXInstruction& i );
			void _translateCall( const ir::PTXInstruction& i );
			void _translateCNot( const ir::PTXInstruction& i );
			void _translateCos( const ir::PTXInstruction& i );
			void _translateCvt( const ir::PTXInstruction& i );
			void _translateDiv( const ir::PTXInstruction& i );
			void _translateEx2( const ir::PTXInstruction& i );
			void _translateExit( const ir::PTXInstruction& i );
			void _translateLd( const ir::PTXInstruction& i );
			void _translateLg2( const ir::PTXInstruction& i );
			void _translateMad24( const ir::PTXInstruction& i );
			void _translateMad( const ir::PTXInstruction& i );
			void _translateMax( const ir::PTXInstruction& i );
			void _translateMembar( const ir::PTXInstruction& i );
			void _translateMin( const ir::PTXInstruction& i );
			void _translateMov( const ir::PTXInstruction& i );
			void _translateMul24( const ir::PTXInstruction& i );
			void _translateMul( const ir::PTXInstruction& i );
			void _translateNeg( const ir::PTXInstruction& i );
			void _translateNot( const ir::PTXInstruction& i );
			void _translateOr( const ir::PTXInstruction& i );
			void _translatePmevent( const ir::PTXInstruction& i );
			void _translateRcp( const ir::PTXInstruction& i );
			void _translateRed( const ir::PTXInstruction& i );
			void _translateRem( const ir::PTXInstruction& i );
			void _translateRet( const ir::PTXInstruction& i );
			void _translateRsqrt( const ir::PTXInstruction& i );
			void _translateSad( const ir::PTXInstruction& i );
			void _translateSelP( const ir::PTXInstruction& i );
			void _translateSet( const ir::PTXInstruction& i );
			void _translateSetP( const ir::PTXInstruction& i );
			void _translateShl( const ir::PTXInstruction& i );
			void _translateShr( const ir::PTXInstruction& i );
			void _translateSin( const ir::PTXInstruction& i );
			void _translateSlCt( const ir::PTXInstruction& i );
			void _translateSqrt( const ir::PTXInstruction& i );
			void _translateSt( const ir::PTXInstruction& i );
			void _translateSub( const ir::PTXInstruction& i );
			void _translateSubC( const ir::PTXInstruction& i );
			void _translateTex( const ir::PTXInstruction& i );
			void _translateTrap( const ir::PTXInstruction& i );
			void _translateVote( const ir::PTXInstruction& i );
			void _translateXor( const ir::PTXInstruction& i );
			std::string _tempRegister();
			
			ir::LLVMInstruction::Operand _destination( 
				const ir::PTXInstruction& i );
			void _predicateEpilogue( const ir::PTXInstruction& i, 
				const ir::LLVMInstruction::Operand& temp );
			void _add( const ir::LLVMInstruction& i );

		public:
			PTXToLLVMTranslator( OptimizationLevel l = NoOptimization );
			~PTXToLLVMTranslator();
			
		public:
			ir::Kernel* translate( const ir::Kernel* i );
			void addProfile( const ProfilingData& d );
	};
}

#endif

