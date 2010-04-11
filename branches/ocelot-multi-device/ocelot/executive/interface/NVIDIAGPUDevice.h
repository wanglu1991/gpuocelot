/*! \file NVIDIAGPUDevice.h
	\author Gregory Diamos
	\date April 7, 2010
	\brief The header file for the NVIDIAGPUDevice class.
*/

#ifndef NVIDIA_GPU_DEVICE_H_INCLUDED
#define NVIDIA_GPU_DEVICE_H_INCLUDED

// ocelot includes
#include <ocelot/executive/interface/Device.h>

namespace executive 
{
	/*! Interface that should be bound to a single nvidia gpu */
	class NVIDIAGPUDevice : public Device
	{
		public:
			/*! \brief An interface to a memory allocation on the cuda driver */
			class MemoryAllocation : public DeviceMemoryAllocation
			{
				private:
					/*! \brief The flags for page-locked host memory */
					unsigned int _flags;
					/*! \brief The size of the allocation in bytes */
					size_t _size;
					/*! \brief The pointer to the base of the allocation */
					CUdeviceptr _devicePointer;
					/*! \brief Host pointer to mapped/page-locked allocation */
					void* _hostPointer;
				
				public:
					/*! \brief Generic Construct */
					MemoryAllocation();
					/*! \brief Construct a device allocation */
					MemoryAllocation(size_t size);
					/*! \brief Construct a host allocation */
					MemoryAllocation(size_t size, unsigned int flags);
					/*! \brief Construct a global allocation */
					MemoryAllocation(CUmodule module, const ir::Global& global);
					/*! \brief Desructor */
					~MemoryAllocation();

				public:
					/*! \brief Copy constructor */
					MemoryAllocation(const MemoryAllocation& a);
					/*! \brief Move constructor */
					MemoryAllocation(MemoryAllocation&& a);
					
					/*! \brief Assignment operator */
					MemoryAllocation& operator=(const MemoryAllocation& a);
					/*! \brief Move operator */
					MemoryAllocation& operator=(MemoryAllocation&& a);
			
				public:
					/*! \brief Get the flags if this is a host pointer */
					unsigned int flags() const;
					/*! \brief Get a host pointer if for a host allocation */
					void* mappedPointer() const;
					/*! \brief Get a device pointer to the base */
					void* pointer() const;
					/*! \brief The size of the allocation */
					size_t size() const;
					/*! \brief Copy from an external host pointer */
					void copy(size_t offset, const void* host, size_t size );
					/*! \brief Copy to an external host pointer */
					void copy(void* host, size_t offset, size_t size) const;
					/*! \brief Memset the allocation */
					void memset(size_t offset, int value, size_t size);
					/*! \brief Copy to another allocation */
					void copy(Device::MemoryAllocation* allocation, 
						size_t toOffset, size_t fromOffset, size_t size) const;
			};

		private:
			/*! \brief A class for holding the state associated with a module */
			class Module
			{
				public:
					/*! \brief This is a map from a global name to pointer */
					typedef std::unordered_map<std::string, void*> GlobalMap;
					/*! \brief A map from a kernel name to its translation */
					typedef std::unordered_map<std::string, 
						GPUExecutableKernel* > KernelMap;
			
				public:
					/*! \brief The ir representation of a module */
					const ir::Module* ir;
					/*! \brief The set of global allocations in the module */
					GlobalMap globals;
					/*! \brief The set of translated kernels */
					KernelMap kernels;
					
				public:
					/*! \brief Construct this based on a module */
					Module(const ir::Module* m = 0);
					/*! \brief Copy constructor */
					Module(const Module& m);
					/*! \brief Clean up all translated kernels */
					~Module();
					
				public:
					/*! \brief Translate all kernels in the module */
					void translate();
					/*! \brief Has this module been translated? */
					bool translated() const;
					/*! \brief Get a specific kernel or 0 */
					GPUExecutableKernel* getKernel(const std::string& name);
			};

			/*! \brief A map of registered modules */
			typedef std::unordered_map<std::string, Module> ModuleMap;

			/*! \brief A map of memory allocations */
			typedef std::map<void*, MemoryAllocation*> AllocationMap;
			
			/*! \brief A map of registered streams */
			typedef std::unordered_map<unsigned int, CUstream> StreamMap;
			
			/*! \brief A map of registered events */
			typedef std::unordered_map<unsigned int CUevent> EventMap;
			
			/*! \brief A map of registered graphics resources */
			typedef std::unordered_map<unsigned int, 
				CUgraphicsResource> GraphicsMap;
			
		public:
			/*! \brief A map of memory allocations in device space */
			AllocationMap _allocations;
			
			/*! \brief A map of allocations in host space */
			AllocationMap _hostAllocations;
			
			/*! \brief The modules that have been loaded */
			ModuleMap _modules;
			
			/*! \brief Registered streams */
			StreamMap _streams;
			
			/*! \brief Registered events */
			EventMap _events;
			
			/*! \brief Registered graphics resources */
			GraphicsMap _graphics;
			
		public:
			/*! \brief Sets the device properties, bind this to the cuda id */
			NVIDIAGPUDevice(int id = 0);
			/*! \brief Clears all state */
			~NVIDIAGPUDevice();
			
		public:
			/*! \brief Check a memory access against all device allocations */
			bool checkMemoryAccess(const void* pointer, size_t size) const;
			/*! \brief Get the device allocation containing a pointer or 0 */
			MemoryAllocation* getMemoryAllocation(const void* address, 
				bool hostAllocation) const;
			/*! \brief Get the address of a global by stream */
			MemoryAllocation* getGlobalAllocation(const std::string& module, 
				const std::string& name) const;
			/*! \brief Allocate some new dynamic memory on this device */
			MemoryAllocation* allocate(size_t size);
			/*! \brief Make this a host memory allocation */
			MemoryAllocation* allocateHost(size_t size, unsigned int flags);
			/*! \brief Free an existing non-global allocation */
			void free(void* pointer);
			/*! \brief Get nearby allocations to a pointer */
			MemoryAllocationVector getNearbyAllocations(void* pointer) const;
		
		public:
			/*! \brief Registers an opengl buffer with a resource */
			void* glRegisterBuffer(unsigned int buffer, 
				unsigned int flags) = 0;
			/*! \brief Registers an opengl image with a resource */
			void* glRegisterImage(unsigned int image, 
				unsigned int target, unsigned int flags) = 0;
			/*! \brief Unregister a resource */
			void unRegisterGraphicsResource(void* resource) = 0;
			/*! \brief Map a graphics resource for use with this device */
			void mapGraphicsResource(void* resource, int count, 
				unsigned int stream);
			/*! \brief Get a pointer to a mapped resource along with its size */
			void* getPointerToMappedGraphicsResource(size_t& size, 
				void* resource) const;
			/*! \brief Change the flags of a mapped resource */
			void setGraphicsResourceFlags(void* resource, 
				unsigned int flags);
			/*! \brief Unmap a mapped resource */
			void unmapGraphicsResource(void* resource);

		public:
			/*! \brief Load a module, must have a unique name */
			void load(const ir::Module* module);
			/*! \brief Unload a module by name */
			void unload(const std::string& name);

		public:
			/*! \brief Get the device properties */
			const Properties& properties() const;

		public:
			/*! \brief Create a new event */
			unsigned int createEvent(int flags);
			/*! \brief Destroy an existing event */
			void destroyEvent(unsigned int event);
			/*! \brief Query to see if an event has been recorded (yes/no) */
			bool queryEvent(unsigned int event) const;
			/*! \brief Record something happening on an event */
			void recordEvent(unsigned int event, unsigned int stream);
			/*! \brief Synchronize on an event */
			void synchronizeEvent(unsigned int event);
			/*! \brief Get the elapsed time in ms between two recorded events */
			float getEventTime(unsigned int start, unsigned int end) const;
		
		public:
			/*! \brief Create a new stream */
			unsigned int createStream();
			/*! \brief Destroy an existing stream */
			void destroyStream(unsigned int stream);
			/*! \brief Query the status of an existing stream (ready/not) */
			bool queryStream(unsigned int stream) const;
			/*! \brief Synchronize a particular stream */
			void synchronizeStream(unsigned int stream);
			/*! \brief Sets the current stream */
			void setStream(unsigned int stream);
			
		public:
			/*! \brief Select this device as the current device. 
				Only one device is allowed to be selected at any time. */
			void select();
			/*! \brief is this device selected? */
			bool selected() const;
			/*! \brief Deselect this device. */
			void unselect();
			/*! \brief Set flags for this device */
			void setDeviceFlags(unsigned int flags);
		
		public:
			/*! \brief Binds a texture to a memory allocation at a pointer */
			void bindTexture(void* pointer, void* texture, 
				const cudaChannelFormatDesc& desc, size_t size);
			/*! \brief unbinds anything bound to a particular texture */
			void unbindTexture(void* texture);
			/*! \brief Get a texture reference for a given symbol name */
			void* getTextureReference(const std::string& module, 
				const std::string& name);

		public:
			/*! \brief helper function for launching a kernel
				\param module module name
				\param kernel kernel name
				\param grid grid dimensions
				\param block block dimensions
				\param sharedMemory shared memory size
				\param parameterBlock array of bytes for parameter memory
				\param parameterBlockSize number of bytes in parameter memory
				\param traceGenerators vector of trace generators to add 
					and remove from kernel
				\param stream The stream to launch the kernel in
			*/
			void launch(const std::string& module, 
				const std::string& kernel, const ir::Dim3& grid, 
				const ir::Dim3& block, size_t sharedMemory, 
				void* parameterBlock, size_t parameterBlockSize, 
				const trace::TraceGeneratorVector& 
				traceGenerators = trace::TraceGeneratorVector());
			/*! \brief Get the function attributes of a specific kernel */
			cudaFuncAttributes getAttributes(const std::string& module, 
				const std::string& kernel) const;
			/*! \brief Get the last error from this device */
			unsigned int getLastError() const;
			/*! \brief Wait until all asynchronous operations have completed */
			void synchronize();
			
		public:
			/*! \brief Limit the worker threads used by this device */
			void limitWorkerThreads(unsigned int threads);

	};
}

#endif
