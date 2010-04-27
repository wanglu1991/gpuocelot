/*! \file ATIGPUDevice.cpp
 *  \author Rodrigo Dominguez <rdomingu@ece.neu.edu>
 *  \date April 7, 2010
 *  \brief The source file for the ATI GPU Device class.
 */

// C standard library includes
#include <string.h>

// Ocelot includes
#include <ocelot/executive/interface/ATIGPUDevice.h>

// Hydrazine includes
#include <hydrazine/interface/Casts.h>
#include <hydrazine/implementation/Exception.h>
#include <hydrazine/implementation/debug.h>

// TODO Temporarily. Shouldn't be here
#include <ocelot/cuda/interface/cuda_runtime.h>

#ifdef REPORT_BASE
#undef REPORT_BASE
#endif

#define REPORT_BASE 0

#define checkError(x) if(x != CAL_RESULT_OK) { \
	throw hydrazine::Exception(CalDriver()->calGetErrorString()); }
#define Throw(x) {std::stringstream s; s << x; \
	throw hydrazine::Exception(s.str()); }

namespace executive
{
	int* const ATIGPUDevice::Uav0BaseAddr = (int *)0x1000;

    ATIGPUDevice::ATIGPUDevice() 
		: 
			_uav0AllocPtr(Uav0BaseAddr),
			_uav0Resource(0),
			_uav0Mem(0),
			_uav0Name(0),
			_device(0), 
			_info(),
			_context(0), 
			_object(0), 
			_image(0), 
			_module(0), 
			_selected(false)
    {
		checkError(CalDriver()->calDeviceOpen(&_device, 0));
		checkError(CalDriver()->calDeviceGetInfo(&_info, 0));

		_properties.name = "CAL Device";

        // Multiple contexts per device is not supported yet
        // only one context per device so we can create it in the constructor
		checkError(CalDriver()->calCtxCreate(&_context, _device));

		// Allocate uav0 resource
		CALuint width = _info.maxResource1DWidth;
		CALuint flags = CAL_RESALLOC_GLOBAL_BUFFER;
		checkError(CalDriver()->calResAllocLocal1D(
				&_uav0Resource, 
				_device, 
				width,
				CAL_FORMAT_INT_1,
				flags));

		// Get uav0 memory handle
		checkError(CalDriver()->calCtxGetMem(
					&_uav0Mem,
					_context,
					_uav0Resource));

		// Allocate cb0 resource
		const CALuint deviceCount = 1;
		width = _info.maxResource1DWidth;
		flags = 0;
		checkError(CalDriver()->calResAllocRemote1D(
				&_cb0Resource, 
				&_device, 
				deviceCount,
				width,
				CAL_FORMAT_INT_1,
				flags));

		// Get cb0 memory handle
		checkError(CalDriver()->calCtxGetMem(
					&_cb0Mem,
					_context,
					_cb0Resource));

    }

    ATIGPUDevice::~ATIGPUDevice() 
    {
		checkError(CalDriver()->calCtxReleaseMem(_context, _uav0Mem));
		checkError(CalDriver()->calCtxReleaseMem(_context, _cb0Mem));

		checkError(CalDriver()->calResFree(_uav0Resource));
		checkError(CalDriver()->calResFree(_cb0Resource));

        checkError(CalDriver()->calCtxDestroy(_context));
        checkError(CalDriver()->calDeviceClose(_device));
    }

	DeviceVector ATIGPUDevice::createDevices(unsigned int flags)
	{
		DeviceVector devices;

		// Multiple devices is not supported yet
		devices.push_back(new ATIGPUDevice());

		return std::move(devices);
	}
	
	unsigned int ATIGPUDevice::deviceCount()
	{
		// TODO change this when multiple device support is added
		return 1;
	}	

    void ATIGPUDevice::load(const ir::Module *irModule)
    {
		// Use a fixed ILKernel for now (no PTX-to-IL translation yet)
		const CALchar* ILKernel = 
			"il_cs_2_0\n"
			"dcl_max_thread_per_group 256\n"
			"dcl_raw_uav_id(0)\n"
			"dcl_cb cb0[2]\n"
			"dcl_literal l0, 4, 4, 4, 4\n"
			"dcl_literal l1, 2, 2, 2, 2\n"
			"mov r0, vAbsTidFlat.x\n"
			"mov r1, r0\n"
			"imul r2, r1, l0\n"
			"mov r3, cb0[0]\n"
			"iadd r4, r3, r2\n"
			"uav_raw_load_id(0) r5, r4\n"
			"imul r6, r5, l1\n"
			"mov r7, cb0[1]\n"
			"iadd r8, r7, r2\n"
			"uav_raw_store_id(0) mem.xyzw, r8, r6\n"
			"end\n";

		checkError(CalDriver()->calclCompile(
					&_object, 
					CAL_LANGUAGE_IL, 
					ILKernel, 
					_info.target));

		checkError(CalDriver()->calclLink(&_image, &_object, 1));
		checkError(CalDriver()->calModuleLoad(&_module, _context, _image));

		// Get uav0 name
		checkError(CalDriver()->calModuleGetName(
					&_uav0Name, 
					_context, 
					_module,
					"uav0"));

		// Bind uav0 memory handle to module name
		checkError(CalDriver()->calCtxSetMem(
					_context,
					_uav0Name,
					_uav0Mem));

		// Get cb0 name
		checkError(CalDriver()->calModuleGetName(
					&_cb0Name, 
					_context, 
					_module,
					"cb0"));

		// Bind cb0 memory handle to module name
		checkError(CalDriver()->calCtxSetMem(
					_context,
					_cb0Name,
					_cb0Mem));
    }

    void ATIGPUDevice::unload(const std::string& name)
    {
		checkError(CalDriver()->calModuleUnload(_context, _module));
		checkError(CalDriver()->calclFreeImage(_image));
		checkError(CalDriver()->calclFreeObject(_object));
    }

    void ATIGPUDevice::select()
    {
		// Multiple devices is not supported yet
		assert(!selected());
		_selected = true;
    }

    bool ATIGPUDevice::selected() const
    {
		// Multiple devices is not supported yet
        return _selected;
    }

    void ATIGPUDevice::unselect()
    {
		// Multiple devices is not supported yet
		assert(selected());
		_selected = false;
    }

	Device::MemoryAllocation *ATIGPUDevice::getMemoryAllocation(
			const void *address, bool hostAllocation) const
	{
		MemoryAllocation *allocation = 0;

		if (hostAllocation) {
			assertM(false, "Not implemented yet");
		} else {
			if (!_uav0Allocations.empty()) {
				// Device pointer arithmetic is not supported yet
				const AllocationMap::const_iterator alloc = 
					_uav0Allocations.find((void *)address);
				if (alloc != _uav0Allocations.end()) {
					allocation = alloc->second;
				} else {
					Throw("No allocation found for this pointer - " << address);
				}
			}
		}

		return allocation;
	}
	
	Device::MemoryAllocation *ATIGPUDevice::getGlobalAllocation(
			const std::string &moduleName, const std::string &name)
	{
		assertM(false, "Not implemented yet");
	}

	Device::MemoryAllocation *ATIGPUDevice::allocate(size_t size)
	{
		MemoryAllocation *allocation = 
			new MemoryAllocation(&_uav0Resource, _uav0AllocPtr, size);
		_uav0Allocations.insert(
				std::make_pair(allocation->pointer(), allocation));
		_uav0AllocPtr += size;
		return allocation;
	}

	Device::MemoryAllocation *ATIGPUDevice::allocateHost(size_t size, 
			unsigned int flags)
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::free(void *pointer)
	{
		if (pointer == 0) return;

		AllocationMap::iterator allocation = _uav0Allocations.find(pointer);
		if (allocation != _uav0Allocations.end()) {
			_uav0Allocations.erase(allocation);
			delete allocation->second;
		} else {
			Throw("Tried to free invalid pointer - " << pointer);
		}
	}

	Device::MemoryAllocationVector ATIGPUDevice::getNearbyAllocations(
		void *pointer) const
	{
		assertM(false, "Not implemented yet");
	}

	Device::MemoryAllocationVector ATIGPUDevice::getAllAllocations() const
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::clearMemory()
	{
		assertM(false, "Not implemented yet");
	}

	void *ATIGPUDevice::glRegisterBuffer(unsigned int buffer, 
			unsigned int flags)
	{
		assertM(false, "Not implemented yet");
	}

	void *ATIGPUDevice::glRegisterImage(unsigned int image, unsigned int target, 
			unsigned int flags)
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::unRegisterGraphicsResource(void* resource)
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::mapGraphicsResource(void* resource, int count, 
			unsigned int stream)
	{
		assertM(false, "Not implemented yet");
	}

	void *ATIGPUDevice::getPointerToMappedGraphicsResource(size_t& size, 
			void* resource) const
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::setGraphicsResourceFlags(void* resource, 
		unsigned int flags)
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::unmapGraphicsResource(void* resource)
	{
		assertM(false, "Not implemented yet");
	}

	unsigned int ATIGPUDevice::createEvent(int flags)
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::destroyEvent(unsigned int event)
	{
		assertM(false, "Not implemented yet");
	}

	bool ATIGPUDevice::queryEvent(unsigned int event) const
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::recordEvent(unsigned int event, unsigned int stream)
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::synchronizeEvent(unsigned int event)
	{
		assertM(false, "Not implemented yet");
	}

	float ATIGPUDevice::getEventTime(unsigned int start, unsigned int end) const
	{
		assertM(false, "Not implemented yet");
	}

	unsigned int ATIGPUDevice::createStream()
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::destroyStream(unsigned int stream)
	{
		assertM(false, "Not implemented yet");
	}

	bool ATIGPUDevice::queryStream(unsigned int stream) const
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::synchronizeStream(unsigned int stream)
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::setStream(unsigned int stream)
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::bindTexture(void* pointer, const std::string& moduleName, 
		const std::string& textureName, const textureReference& ref, 
		const cudaChannelFormatDesc& desc, const ir::Dim3& size)
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::unbindTexture(const std::string& moduleName, 
		const std::string& textureName)
	{
		assertM(false, "Not implemented yet");
	}

	void* ATIGPUDevice::getTextureReference(const std::string& moduleName, 
		const std::string& textureName)
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::_updateParameterMemory(const void *parameterBlock)
	{
		cb0Array data;
		CALuint pitch = 0;
		CALuint flags = 0;

		checkError(CalDriver()->calResMap((CALvoid **)&data, &pitch, 
					_cb0Resource, flags));

		// Support only for (int *, int *) for now
		(*data)[0][0] = ((int **)parameterBlock)[0] - Uav0BaseAddr; 
		(*data)[1][0] = ((int **)parameterBlock)[1] - Uav0BaseAddr; 
		
		checkError(CalDriver()->calResUnmap(_cb0Resource));
	}

	void ATIGPUDevice::launch(
			const std::string& moduleName,
			const std::string& kernelName, 
			const ir::Dim3& grid, 
			const ir::Dim3& block, 
			size_t sharedMemory, 
			const void *parameterBlock, 
			size_t parameterBlockSize, 
			const trace::TraceGeneratorVector& traceGenerators)
	{
		_updateParameterMemory(parameterBlock);

		// Get module entry
		CALfunc func = 0;
		checkError(CalDriver()->calModuleGetEntry(
					&func,
					_context,
					_module,
					"main"));

		// Invoke kernel
		CALevent event = 0;
		CALprogramGrid pg;
		pg.func             = func;
		pg.flags            = 0;
		pg.gridBlock.width  = block.x;
		pg.gridBlock.height = block.y;
		pg.gridBlock.depth  = block.z;
		pg.gridSize.width   = grid.x;
		pg.gridSize.height  = grid.y;
		pg.gridSize.depth   = grid.z;

		checkError(CalDriver()->calCtxRunProgramGrid(
					&event, 
					_context, 
					&pg));

		while(CalDriver()->calCtxIsEventDone(_context, event) == CAL_RESULT_PENDING);
	}

	cudaFuncAttributes ATIGPUDevice::getAttributes(const std::string& module, 
			const std::string& kernel)
	{
		assertM(false, "Not implemented yet");
	}

	unsigned int ATIGPUDevice::getLastError() const
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::synchronize()
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::limitWorkerThreads(unsigned int threads)
	{
		assertM(false, "Not implemented yet");
	}		

	void ATIGPUDevice::setOptimizationLevel(
			translator::Translator::OptimizationLevel l)
	{
		assertM(false, "Not implemented yet");
	}		

	inline cal::CalDriver *ATIGPUDevice::CalDriver()
	{
		return cal::CalDriver::Instance();
	}

	ATIGPUDevice::MemoryAllocation::MemoryAllocation(CALresource *resource, 
			int *basePtr, size_t size) 
		: _resource(0), _basePtr(0), _size(0)
	{
		assertM(resource, "Invalid resource");
		assertM(basePtr, "Invalid device pointer");
		assertM(size, "Invalid size");

		_resource = resource;
		_basePtr = basePtr;
		_size = size;
	}

	ATIGPUDevice::MemoryAllocation::~MemoryAllocation()
	{
	}

	unsigned int ATIGPUDevice::MemoryAllocation::flags() const
	{
		assertM(false, "Not implemented yet");
	}

	void *ATIGPUDevice::MemoryAllocation::mappedPointer() const
	{
		assertM(false, "Not implemented yet");
	}

	void *ATIGPUDevice::MemoryAllocation::pointer() const
	{
		return (void *)_basePtr;
	}

	size_t ATIGPUDevice::MemoryAllocation::size() const
	{
		return _size;
	}

	/*! \brief Copy from an external host pointer */
	void ATIGPUDevice::MemoryAllocation::copy(size_t offset, const void *host, 
			size_t size)
	{
		assertM(host != 0, "Invalid host pointer");
		assertM(offset + size <= _size, "Invalid copy size");
		
		CALvoid *data = NULL;
		CALuint pitch = 0;
		CALuint flags = 0;

		checkError(CalDriver()->calResMap(&data, &pitch, *_resource, flags));

		unsigned int addr = (_basePtr - ATIGPUDevice::Uav0BaseAddr) + offset;
		std::memcpy((char *)data + addr, host, size);

		checkError(CalDriver()->calResUnmap(*_resource));
	}

	/*! \brief Copy to an external host pointer */
	void ATIGPUDevice::MemoryAllocation::copy(void *host, size_t offset, 
			size_t size) const
	{
		assertM(host != 0, "Invalid host pointer");
		assertM(offset + size <= _size, "Invalid copy size");

		CALvoid *data = NULL;
		CALuint pitch = 0;
		CALuint flags = 0;

		checkError(CalDriver()->calResMap(&data, &pitch, *_resource, flags));

		unsigned int addr = (_basePtr - ATIGPUDevice::Uav0BaseAddr) + offset;
		std::memcpy(host, (char *)data + addr, size);
		report("MemoryAllocation::copy("
				<< "host = " << std::hex << std::showbase << host
				<< ", offset = " << std::dec << offset
				<< ", size = " << size
				<< ")");
		
		checkError(CalDriver()->calResUnmap(*_resource));
	}

	void ATIGPUDevice::MemoryAllocation::memset(size_t offset, int value, 
			size_t size)
	{
		assertM(false, "Not implemented yet");
	}

	void ATIGPUDevice::MemoryAllocation::copy(Device::MemoryAllocation *allocation,
			size_t toOffset, size_t fromOffset, size_t size) const
	{
		assertM(false, "Not implemented yet");
	}


}
