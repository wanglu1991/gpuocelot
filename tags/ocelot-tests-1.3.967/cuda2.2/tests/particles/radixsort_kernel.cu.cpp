# 1 "/tmp/tmpxft_00000c41_00000000-1_radixsort_kernel.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_00000c41_00000000-1_radixsort_kernel.cudafe1.cpp"
# 1 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
# 46 "/usr/local/cuda/bin/../include/device_types.h"
# 149 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 69 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/device_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/driver_types.h" 1 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h" 3
enum cudaError
{





  cudaSuccess = 0,





  cudaErrorMissingConfiguration = 1,





  cudaErrorMemoryAllocation = 2,





  cudaErrorInitializationError = 3,
# 131 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchFailure = 4,
# 140 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorPriorLaunchFailure = 5,
# 150 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchTimeout = 6,
# 159 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchOutOfResources = 7,





  cudaErrorInvalidDeviceFunction = 8,
# 174 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorInvalidConfiguration = 9,





  cudaErrorInvalidDevice = 10,





  cudaErrorInvalidValue = 11,





  cudaErrorInvalidPitchValue = 12,





  cudaErrorInvalidSymbol = 13,




  cudaErrorMapBufferObjectFailed = 14,




  cudaErrorUnmapBufferObjectFailed = 15,





  cudaErrorInvalidHostPointer = 16,





  cudaErrorInvalidDevicePointer = 17,





  cudaErrorInvalidTexture = 18,





  cudaErrorInvalidTextureBinding = 19,






  cudaErrorInvalidChannelDescriptor = 20,





  cudaErrorInvalidMemcpyDirection = 21,
# 255 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorAddressOfConstant = 22,
# 264 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureFetchFailed = 23,
# 273 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureNotBound = 24,
# 282 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSynchronizationError = 25,





  cudaErrorInvalidFilterSetting = 26,





  cudaErrorInvalidNormSetting = 27,







  cudaErrorMixedDeviceExecution = 28,







  cudaErrorCudartUnloading = 29,




  cudaErrorUnknown = 30,





  cudaErrorNotYetImplemented = 31,
# 330 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorMemoryValueTooLarge = 32,






  cudaErrorInvalidResourceHandle = 33,







  cudaErrorNotReady = 34,






  cudaErrorInsufficientDriver = 35,
# 365 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSetOnActiveProcess = 36,





  cudaErrorInvalidSurface = 37,





  cudaErrorNoDevice = 38,





  cudaErrorECCUncorrectable = 39,




  cudaErrorSharedObjectSymbolNotFound = 40,




  cudaErrorSharedObjectInitFailed = 41,





  cudaErrorUnsupportedLimit = 42,





  cudaErrorDuplicateVariableName = 43,





  cudaErrorDuplicateTextureName = 44,





  cudaErrorDuplicateSurfaceName = 45,
# 426 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorDevicesUnavailable = 46,




  cudaErrorInvalidKernelImage = 47,







  cudaErrorNoKernelImageForDevice = 48,
# 448 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorIncompatibleDriverContext = 49,




  cudaErrorStartupFailure = 0x7f,





  cudaErrorApiFailureBase = 10000
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned = 0,
  cudaChannelFormatKindUnsigned = 1,
  cudaChannelFormatKindFloat = 2,
  cudaChannelFormatKindNone = 3
};





struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};





struct cudaArray;





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice = 1,
  cudaMemcpyDeviceToHost = 2,
  cudaMemcpyDeviceToDevice = 3
};






struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};






struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};






struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};





struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};





struct cudaGraphicsResource;





enum cudaGraphicsRegisterFlags
{
  cudaGraphicsRegisterFlagsNone = 0
};





enum cudaGraphicsMapFlags
{
  cudaGraphicsMapFlagsNone = 0,
  cudaGraphicsMapFlagsReadOnly = 1,
  cudaGraphicsMapFlagsWriteDiscard = 2
};





enum cudaGraphicsCubeFace {
  cudaGraphicsCubeFacePositiveX = 0x00,
  cudaGraphicsCubeFaceNegativeX = 0x01,
  cudaGraphicsCubeFacePositiveY = 0x02,
  cudaGraphicsCubeFaceNegativeY = 0x03,
  cudaGraphicsCubeFacePositiveZ = 0x04,
  cudaGraphicsCubeFaceNegativeZ = 0x05
};





struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;

   int __cudaReserved[6];
};





enum cudaFuncCache
{
  cudaFuncCachePreferNone = 0,
  cudaFuncCachePreferShared = 1,
  cudaFuncCachePreferL1 = 2
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
};





enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
};





struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int integrated;
  int canMapHostMemory;
  int computeMode;
  int maxTexture1D;
  int maxTexture2D[2];
  int maxTexture3D[3];
  int maxTexture2DArray[3];
  size_t surfaceAlignment;
  int concurrentKernels;
  int ECCEnabled;
  int pciBusID;
  int pciDeviceID;
  int tccDriver;
  int __cudaReserved[21];
};
# 768 "/usr/local/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef struct CUstream_st *cudaStream_t;





typedef struct CUevent_st *cudaEvent_t;





typedef struct cudaGraphicsResource *cudaGraphicsResource_t;





typedef struct CUuuid_st cudaUUID_t;
# 44 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/surface_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
  cudaBoundaryModeZero = 0,
  cudaBoundaryModeClamp = 1,
  cudaBoundaryModeTrap = 2
};





enum cudaSurfaceFormatMode
{
  cudaFormatModeForced = 0,
  cudaFormatModeAuto = 1
};





struct surfaceReference
{



  struct cudaChannelFormatDesc channelDesc;
};
# 45 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/texture_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap = 0,
  cudaAddressModeClamp = 1,
  cudaAddressModeMirror = 2,
  cudaAddressModeBorder = 3
};





enum cudaTextureFilterMode
{
  cudaFilterModePoint = 0,
  cudaFilterModeLinear = 1
};





enum cudaTextureReadMode
{
  cudaReadModeElementType = 0,
  cudaReadModeNormalizedFloat = 1
};





struct textureReference
{



  int normalized;



  enum cudaTextureFilterMode filterMode;



  enum cudaTextureAddressMode addressMode[3];



  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 45 "/usr/local/cuda/bin/../include/vector_types.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 46 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 47 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 75 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
  signed char x, y;
};


struct __attribute__((aligned(2))) uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct __attribute__((aligned(4))) char4
{
  signed char x, y, z, w;
};


struct __attribute__((aligned(4))) uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct __attribute__((aligned(4))) short2
{
  short x, y;
};


struct __attribute__((aligned(4))) ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };


struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __attribute__((aligned(8))) int2 { int x; int y; };


struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __attribute__((aligned(16))) int4
{
  int x, y, z, w;
};


struct __attribute__((aligned(16))) uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};
# 229 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct __attribute__((aligned(2*sizeof(long int)))) long2
{
  long int x, y;
};


struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
  unsigned long int x, y;
};




struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __attribute__((aligned(16))) long4
{
  long int x, y, z, w;
};


struct __attribute__((aligned(16))) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __attribute__((aligned(8))) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __attribute__((aligned(16))) float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct __attribute__((aligned(16))) longlong2
{
  long long int x, y;
};


struct __attribute__((aligned(16))) ulonglong2
{
  unsigned long long int x, y;
};


struct longlong3
{
  long long int x, y, z;
};


struct ulonglong3
{
  unsigned long long int x, y, z;
};


struct __attribute__((aligned(16))) longlong4
{
  long long int x, y, z ,w;
};


struct __attribute__((aligned(16))) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __attribute__((aligned(16))) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __attribute__((aligned(16))) double4
{
  double x, y, z, w;
};
# 366 "/usr/local/cuda/bin/../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct longlong3 longlong3;

typedef struct ulonglong3 ulonglong3;

typedef struct longlong4 longlong4;

typedef struct ulonglong4 ulonglong4;

typedef struct double1 double1;

typedef struct double2 double2;

typedef struct double3 double3;

typedef struct double4 double4;
# 469 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};


typedef struct dim3 dim3;
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 70 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda/bin/../include/crt/storage_class.h" 1 3
# 71 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 213 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 2 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h"
# 466 "/usr/local/cuda/bin/../include/driver_types.h"
# 478 "/usr/local/cuda/bin/../include/driver_types.h"
# 491 "/usr/local/cuda/bin/../include/driver_types.h"
# 497 "/usr/local/cuda/bin/../include/driver_types.h"
# 510 "/usr/local/cuda/bin/../include/driver_types.h"
# 523 "/usr/local/cuda/bin/../include/driver_types.h"
# 535 "/usr/local/cuda/bin/../include/driver_types.h"
# 546 "/usr/local/cuda/bin/../include/driver_types.h"
# 564 "/usr/local/cuda/bin/../include/driver_types.h"
# 570 "/usr/local/cuda/bin/../include/driver_types.h"
# 579 "/usr/local/cuda/bin/../include/driver_types.h"
# 590 "/usr/local/cuda/bin/../include/driver_types.h"
# 603 "/usr/local/cuda/bin/../include/driver_types.h"
# 656 "/usr/local/cuda/bin/../include/driver_types.h"
# 667 "/usr/local/cuda/bin/../include/driver_types.h"
# 678 "/usr/local/cuda/bin/../include/driver_types.h"
# 689 "/usr/local/cuda/bin/../include/driver_types.h"
# 768 "/usr/local/cuda/bin/../include/driver_types.h"
# 774 "/usr/local/cuda/bin/../include/driver_types.h"
# 780 "/usr/local/cuda/bin/../include/driver_types.h"
# 786 "/usr/local/cuda/bin/../include/driver_types.h"
# 792 "/usr/local/cuda/bin/../include/driver_types.h"
# 63 "/usr/local/cuda/bin/../include/surface_types.h"
# 74 "/usr/local/cuda/bin/../include/surface_types.h"
# 84 "/usr/local/cuda/bin/../include/surface_types.h"
# 63 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/texture_types.h"
# 85 "/usr/local/cuda/bin/../include/texture_types.h"
# 95 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/vector_types.h"
# 81 "/usr/local/cuda/bin/../include/vector_types.h"
# 87 "/usr/local/cuda/bin/../include/vector_types.h"
# 93 "/usr/local/cuda/bin/../include/vector_types.h"
# 99 "/usr/local/cuda/bin/../include/vector_types.h"
# 105 "/usr/local/cuda/bin/../include/vector_types.h"
# 111 "/usr/local/cuda/bin/../include/vector_types.h"
# 117 "/usr/local/cuda/bin/../include/vector_types.h"
# 123 "/usr/local/cuda/bin/../include/vector_types.h"
# 129 "/usr/local/cuda/bin/../include/vector_types.h"
# 135 "/usr/local/cuda/bin/../include/vector_types.h"
# 141 "/usr/local/cuda/bin/../include/vector_types.h"
# 147 "/usr/local/cuda/bin/../include/vector_types.h"
# 153 "/usr/local/cuda/bin/../include/vector_types.h"
# 159 "/usr/local/cuda/bin/../include/vector_types.h"
# 162 "/usr/local/cuda/bin/../include/vector_types.h"
# 165 "/usr/local/cuda/bin/../include/vector_types.h"
# 171 "/usr/local/cuda/bin/../include/vector_types.h"
# 177 "/usr/local/cuda/bin/../include/vector_types.h"
# 180 "/usr/local/cuda/bin/../include/vector_types.h"
# 183 "/usr/local/cuda/bin/../include/vector_types.h"
# 189 "/usr/local/cuda/bin/../include/vector_types.h"
# 195 "/usr/local/cuda/bin/../include/vector_types.h"
# 201 "/usr/local/cuda/bin/../include/vector_types.h"
# 207 "/usr/local/cuda/bin/../include/vector_types.h"
# 213 "/usr/local/cuda/bin/../include/vector_types.h"
# 229 "/usr/local/cuda/bin/../include/vector_types.h"
# 235 "/usr/local/cuda/bin/../include/vector_types.h"
# 243 "/usr/local/cuda/bin/../include/vector_types.h"
# 249 "/usr/local/cuda/bin/../include/vector_types.h"
# 255 "/usr/local/cuda/bin/../include/vector_types.h"
# 261 "/usr/local/cuda/bin/../include/vector_types.h"
# 267 "/usr/local/cuda/bin/../include/vector_types.h"
# 273 "/usr/local/cuda/bin/../include/vector_types.h"
# 276 "/usr/local/cuda/bin/../include/vector_types.h"
# 282 "/usr/local/cuda/bin/../include/vector_types.h"
# 288 "/usr/local/cuda/bin/../include/vector_types.h"
# 294 "/usr/local/cuda/bin/../include/vector_types.h"
# 300 "/usr/local/cuda/bin/../include/vector_types.h"
# 306 "/usr/local/cuda/bin/../include/vector_types.h"
# 312 "/usr/local/cuda/bin/../include/vector_types.h"
# 318 "/usr/local/cuda/bin/../include/vector_types.h"
# 324 "/usr/local/cuda/bin/../include/vector_types.h"
# 330 "/usr/local/cuda/bin/../include/vector_types.h"
# 336 "/usr/local/cuda/bin/../include/vector_types.h"
# 342 "/usr/local/cuda/bin/../include/vector_types.h"
# 348 "/usr/local/cuda/bin/../include/vector_types.h"
# 354 "/usr/local/cuda/bin/../include/vector_types.h"
# 366 "/usr/local/cuda/bin/../include/vector_types.h"
# 368 "/usr/local/cuda/bin/../include/vector_types.h"
# 370 "/usr/local/cuda/bin/../include/vector_types.h"
# 372 "/usr/local/cuda/bin/../include/vector_types.h"
# 374 "/usr/local/cuda/bin/../include/vector_types.h"
# 376 "/usr/local/cuda/bin/../include/vector_types.h"
# 378 "/usr/local/cuda/bin/../include/vector_types.h"
# 380 "/usr/local/cuda/bin/../include/vector_types.h"
# 382 "/usr/local/cuda/bin/../include/vector_types.h"
# 384 "/usr/local/cuda/bin/../include/vector_types.h"
# 386 "/usr/local/cuda/bin/../include/vector_types.h"
# 388 "/usr/local/cuda/bin/../include/vector_types.h"
# 390 "/usr/local/cuda/bin/../include/vector_types.h"
# 392 "/usr/local/cuda/bin/../include/vector_types.h"
# 394 "/usr/local/cuda/bin/../include/vector_types.h"
# 396 "/usr/local/cuda/bin/../include/vector_types.h"
# 398 "/usr/local/cuda/bin/../include/vector_types.h"
# 400 "/usr/local/cuda/bin/../include/vector_types.h"
# 402 "/usr/local/cuda/bin/../include/vector_types.h"
# 404 "/usr/local/cuda/bin/../include/vector_types.h"
# 406 "/usr/local/cuda/bin/../include/vector_types.h"
# 408 "/usr/local/cuda/bin/../include/vector_types.h"
# 410 "/usr/local/cuda/bin/../include/vector_types.h"
# 412 "/usr/local/cuda/bin/../include/vector_types.h"
# 414 "/usr/local/cuda/bin/../include/vector_types.h"
# 416 "/usr/local/cuda/bin/../include/vector_types.h"
# 418 "/usr/local/cuda/bin/../include/vector_types.h"
# 420 "/usr/local/cuda/bin/../include/vector_types.h"
# 422 "/usr/local/cuda/bin/../include/vector_types.h"
# 424 "/usr/local/cuda/bin/../include/vector_types.h"
# 426 "/usr/local/cuda/bin/../include/vector_types.h"
# 428 "/usr/local/cuda/bin/../include/vector_types.h"
# 430 "/usr/local/cuda/bin/../include/vector_types.h"
# 432 "/usr/local/cuda/bin/../include/vector_types.h"
# 434 "/usr/local/cuda/bin/../include/vector_types.h"
# 436 "/usr/local/cuda/bin/../include/vector_types.h"
# 438 "/usr/local/cuda/bin/../include/vector_types.h"
# 440 "/usr/local/cuda/bin/../include/vector_types.h"
# 442 "/usr/local/cuda/bin/../include/vector_types.h"
# 444 "/usr/local/cuda/bin/../include/vector_types.h"
# 446 "/usr/local/cuda/bin/../include/vector_types.h"
# 448 "/usr/local/cuda/bin/../include/vector_types.h"
# 450 "/usr/local/cuda/bin/../include/vector_types.h"
# 452 "/usr/local/cuda/bin/../include/vector_types.h"
# 454 "/usr/local/cuda/bin/../include/vector_types.h"
# 456 "/usr/local/cuda/bin/../include/vector_types.h"
# 458 "/usr/local/cuda/bin/../include/vector_types.h"
# 460 "/usr/local/cuda/bin/../include/vector_types.h"
# 469 "/usr/local/cuda/bin/../include/vector_types.h"
# 480 "/usr/local/cuda/bin/../include/vector_types.h"
# 115 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 131 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 183 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit, size_t);
# 207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t *, cudaLimit);
# 237 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache *);
# 278 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache);
# 330 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 373 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 387 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t);
# 418 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
# 536 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
# 555 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
# 579 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int);
# 597 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int *);
# 626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int *, int);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned);
# 703 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
# 719 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
# 753 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t, cudaEvent_t, unsigned);
# 771 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
# 789 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 821 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
# 852 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, unsigned);
# 885 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t = 0);
# 914 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
# 946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
# 966 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 1046 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0);
# 1073 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
# 1119 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char *, cudaFuncCache);
# 1154 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char *);
# 1187 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 1209 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
# 1231 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 1263 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
# 1292 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void **, size_t);
# 1331 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 1370 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0));
# 1394 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void *);
# 1414 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void *);
# 1436 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray *);
# 1495 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
# 1522 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 1541 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned *, void *);
# 1576 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
# 1626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0));
# 1723 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
# 1828 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0);
# 1847 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t *, size_t *);
# 1880 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
# 1913 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
# 1946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
# 1981 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2023 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2064 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2105 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
# 2144 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 2213 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 2256 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2298 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2340 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2391 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2441 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2491 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2535 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2578 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2600 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
# 2626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 2665 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
# 2692 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void *, int, size_t, cudaStream_t = 0);
# 2724 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void *, size_t, int, size_t, size_t, cudaStream_t = 0);
# 2769 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr, int, cudaExtent, cudaStream_t = 0);
# 2796 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
# 2819 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 2865 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t);
# 2897 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t, unsigned);
# 2932 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2963 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2992 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource_t);
# 3026 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource_t, unsigned, unsigned);
# 3059 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
# 3094 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 3136 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
# 3179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
# 3207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3228 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
# 3253 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
# 3277 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 3310 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3328 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference **, const char *);
# 3355 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
# 3372 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 3377 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void **, const cudaUUID_t *);
# 93 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 94 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 95 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 96 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 98 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 99 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 100 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 102 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 103 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 105 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 106 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 107 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 109 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 110 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 112 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 113 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 114 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 117 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 119 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 120 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 121 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 124 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 126 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 127 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 128 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 133 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 135 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 137 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 138 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 139 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 141 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 142 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 144 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 145 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 146 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 148 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 149 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 151 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 152 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 153 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 158 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 159 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 160 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 165 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 166 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 167 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 170 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 172 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 173 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 174 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 179 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 180 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 181 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 184 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 186 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 187 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 188 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 191 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 193 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 194 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 195 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 197 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 198 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 200 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 201 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 202 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 204 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 205 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 207 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 208 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 209 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 214 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 215 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 216 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 221 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 222 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 223 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 226 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 228 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 229 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 230 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 235 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 236 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 237 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 240 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 242 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 243 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 244 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 247 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 249 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 250 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 251 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 253 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 254 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 256 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 257 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 258 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 260 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 261 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 263 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 264 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 265 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 270 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 271 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 272 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 277 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 278 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 279 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 282 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 284 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 285 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 286 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 291 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 292 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 293 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 296 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 298 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 299 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 300 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 303 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 365 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 366 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 367 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 369 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 370 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 372 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 373 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 374 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 376 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 377 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 379 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 380 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 381 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 384 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 386 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 387 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 388 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 391 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 65 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 66 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPitchedPtr s;
# 69 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ptr) = d;
# 70 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.pitch) = p;
# 71 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.xsize) = xsz;
# 72 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ysize) = ysz;
# 74 "/usr/local/cuda/bin/../include/driver_functions.h"
return s;
# 75 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 92 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 93 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 94 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPos p;
# 96 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.x) = x;
# 97 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.y) = y;
# 98 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.z) = z;
# 100 "/usr/local/cuda/bin/../include/driver_functions.h"
return p;
# 101 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 118 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 119 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 120 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaExtent e;
# 122 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.width) = w;
# 123 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.height) = h;
# 124 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.depth) = d;
# 126 "/usr/local/cuda/bin/../include/driver_functions.h"
return e;
# 127 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 55 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 56 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 57 "/usr/local/cuda/bin/../include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 58 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 61 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 62 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 63 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 65 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 66 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 68 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 70 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 71 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 72 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 73 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 75 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 76 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 77 "/usr/local/cuda/bin/../include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 78 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 80 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 81 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 82 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 83 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 85 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 86 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 87 "/usr/local/cuda/bin/../include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 88 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 90 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 91 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 92 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 93 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 95 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short1 make_short1(short x)
# 96 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 97 "/usr/local/cuda/bin/../include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 98 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 100 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 101 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 102 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 103 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 105 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 106 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 107 "/usr/local/cuda/bin/../include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 108 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 110 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 111 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 112 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 113 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 115 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 116 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 117 "/usr/local/cuda/bin/../include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 118 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 120 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 121 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 122 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 123 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 125 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 126 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 127 "/usr/local/cuda/bin/../include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 128 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 130 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 131 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 132 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 133 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 135 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int1 make_int1(int x)
# 136 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 137 "/usr/local/cuda/bin/../include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 138 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 140 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 141 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 142 "/usr/local/cuda/bin/../include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 143 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 145 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 146 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 147 "/usr/local/cuda/bin/../include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 148 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 150 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 151 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 152 "/usr/local/cuda/bin/../include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 153 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 155 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 156 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 157 "/usr/local/cuda/bin/../include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 158 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 160 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 161 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 162 "/usr/local/cuda/bin/../include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 163 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 165 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 166 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 167 "/usr/local/cuda/bin/../include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 168 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 170 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 171 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 172 "/usr/local/cuda/bin/../include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 173 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 175 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long1 make_long1(long x)
# 176 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 177 "/usr/local/cuda/bin/../include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 178 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 180 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 181 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 182 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 183 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 185 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 186 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 187 "/usr/local/cuda/bin/../include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 188 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 190 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 191 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 192 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 193 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 195 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 196 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 197 "/usr/local/cuda/bin/../include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 198 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 200 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 201 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 202 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 203 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 205 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 206 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 207 "/usr/local/cuda/bin/../include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 208 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 210 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 211 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 212 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 213 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 215 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
# 216 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 217 "/usr/local/cuda/bin/../include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 218 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 220 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 221 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 222 "/usr/local/cuda/bin/../include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 223 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 225 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 226 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 227 "/usr/local/cuda/bin/../include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 228 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 230 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 231 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 232 "/usr/local/cuda/bin/../include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 233 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 235 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 236 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 237 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 238 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 240 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 241 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 242 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 243 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 245 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 246 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 247 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 248 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 250 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 251 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 252 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 253 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 255 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 256 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 257 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 258 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 260 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 261 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 262 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 263 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 265 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 266 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 267 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 268 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 270 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 271 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 272 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 273 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 275 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double1 make_double1(double x)
# 276 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 277 "/usr/local/cuda/bin/../include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 278 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 280 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 281 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 282 "/usr/local/cuda/bin/../include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 283 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 285 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 286 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 287 "/usr/local/cuda/bin/../include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 288 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 290 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 291 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 292 "/usr/local/cuda/bin/../include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 293 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 44 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 49 "/usr/include/string.h" 3
extern "C" void *memmove(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 57 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 65 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 68 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 75 "/usr/include/string.h" 3
extern void *memchr(void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 77 "/usr/include/string.h" 3
extern const void *memchr(const void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 104 "/usr/include/string.h" 3
void *rawmemchr(void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 106 "/usr/include/string.h" 3
const void *rawmemchr(const void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 115 "/usr/include/string.h" 3
void *memrchr(void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 117 "/usr/include/string.h" 3
const void *memrchr(const void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 128 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 131 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 136 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 139 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 143 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 146 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 150 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 153 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(2)));
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 34 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 36 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 39 "/usr/include/xlocale.h" 3
const char *__names[13];
# 40 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 43 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 165 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 168 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 175 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 183 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 215 "/usr/include/string.h" 3
extern char *strchr(char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 217 "/usr/include/string.h" 3
extern const char *strchr(const char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 242 "/usr/include/string.h" 3
extern char *strrchr(char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 244 "/usr/include/string.h" 3
extern const char *strrchr(const char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 271 "/usr/include/string.h" 3
char *strchrnul(char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 273 "/usr/include/string.h" 3
const char *strchrnul(const char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 284 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 288 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 294 "/usr/include/string.h" 3
extern char *strpbrk(char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 296 "/usr/include/string.h" 3
extern const char *strpbrk(const char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 321 "/usr/include/string.h" 3
extern char *strstr(char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 323 "/usr/include/string.h" 3
extern const char *strstr(const char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 348 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(2)));
# 354 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 359 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 367 "/usr/include/string.h" 3
char *strcasestr(char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 369 "/usr/include/string.h" 3
const char *strcasestr(const char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 388 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 391 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 399 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 406 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 413 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 445 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 451 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 455 "/usr/include/string.h" 3
extern "C" void bcopy(const void *, void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/string.h" 3
extern "C" void bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 462 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 469 "/usr/include/string.h" 3
extern char *index(char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 471 "/usr/include/string.h" 3
extern const char *index(const char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 497 "/usr/include/string.h" 3
extern char *rindex(char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 499 "/usr/include/string.h" 3
extern const char *rindex(const char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 523 "/usr/include/string.h" 3
extern "C" int ffs(int) throw() __attribute__((__const__));
# 528 "/usr/include/string.h" 3
extern "C" int ffsl(long) throw() __attribute__((__const__));
# 530 "/usr/include/string.h" 3
extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 536 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 540 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 547 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 551 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 559 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 566 "/usr/include/string.h" 3
extern "C" char *strsignal(int) throw();
# 569 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 571 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 576 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 579 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 586 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 590 "/usr/include/string.h" 3
extern "C" char *strfry(char *) throw() __attribute__((nonnull(1)));
# 593 "/usr/include/string.h" 3
extern "C" void *memfrob(void *, size_t) throw() __attribute__((nonnull(1)));
# 601 "/usr/include/string.h" 3
char *basename(char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 603 "/usr/include/string.h" 3
const char *basename(const char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 44 "/usr/include/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 45 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 54 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 139 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 141 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 143 "/usr/include/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145 "/usr/include/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 148 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 173 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180 "/usr/include/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 184 "/usr/include/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 192 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 60 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 76 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 92 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 104 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
long tv_nsec;
# 124 "/usr/include/time.h" 3
}; }
# 133 "/usr/include/time.h" 3
extern "C" { struct tm {
# 135 "/usr/include/time.h" 3
int tm_sec;
# 136 "/usr/include/time.h" 3
int tm_min;
# 137 "/usr/include/time.h" 3
int tm_hour;
# 138 "/usr/include/time.h" 3
int tm_mday;
# 139 "/usr/include/time.h" 3
int tm_mon;
# 140 "/usr/include/time.h" 3
int tm_year;
# 141 "/usr/include/time.h" 3
int tm_wday;
# 142 "/usr/include/time.h" 3
int tm_yday;
# 143 "/usr/include/time.h" 3
int tm_isdst;
# 146 "/usr/include/time.h" 3
long tm_gmtoff;
# 147 "/usr/include/time.h" 3
const char *tm_zone;
# 152 "/usr/include/time.h" 3
}; }
# 161 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 163 "/usr/include/time.h" 3
timespec it_interval;
# 164 "/usr/include/time.h" 3
timespec it_value;
# 165 "/usr/include/time.h" 3
}; }
# 168 "/usr/include/time.h" 3
struct sigevent;
# 174 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 183 "/usr/include/time.h" 3
extern "C" __attribute__((weak)) clock_t clock() throw();
# 186 "/usr/include/time.h" 3
extern "C" time_t time(time_t *) throw();
# 189 "/usr/include/time.h" 3
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));
# 193 "/usr/include/time.h" 3
extern "C" time_t mktime(tm *) throw();
# 199 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 207 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 217 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();
# 224 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 233 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();
# 237 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t *) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 248 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 255 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();
# 258 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t *) throw();
# 266 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();
# 270 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 276 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 277 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 278 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 283 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 287 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 291 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 292 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 298 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 313 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();
# 316 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm *) throw();
# 319 "/usr/include/time.h" 3
extern "C" int dysize(int) throw() __attribute__((__const__));
# 328 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);
# 333 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t, timespec *) throw();
# 336 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t, timespec *) throw();
# 339 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 347 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);
# 352 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();
# 357 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();
# 362 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t) throw();
# 365 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();
# 370 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t, itimerspec *) throw();
# 374 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t) throw();
# 390 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 399 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 413 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 57 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) clock_t clock() throw();
# 59 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 61 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memcpy(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 66 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 68 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 70 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 72 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__));
# 74 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__));
# 77 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int min(int, int);
# 79 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umin(unsigned, unsigned);
# 81 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmin(long long, long long);
# 83 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmin(unsigned long long, unsigned long long);
# 85 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fminf(float, float) throw();
# 87 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmin(double, double) throw();
# 90 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int max(int, int);
# 92 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umax(unsigned, unsigned);
# 94 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmax(long long, long long);
# 96 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmax(unsigned long long, unsigned long long);
# 98 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaxf(float, float) throw();
# 100 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmax(double, double) throw();
# 103 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sin(double) throw();
# 105 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinf(float) throw();
# 108 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cos(double) throw();
# 110 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cosf(float) throw();
# 113 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw();
# 115 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 118 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tan(double) throw();
# 120 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanf(float) throw();
# 123 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sqrt(double) throw();
# 125 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sqrtf(float) throw();
# 128 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rsqrt(double);
# 130 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rsqrtf(float);
# 133 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp2(double) throw();
# 135 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp2f(float) throw();
# 138 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp10(double) throw();
# 140 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 143 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double expm1(double) throw();
# 145 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expm1f(float) throw();
# 148 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log2(double) throw();
# 150 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log2f(float) throw();
# 153 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log10(double) throw();
# 155 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log10f(float) throw();
# 158 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log(double) throw();
# 160 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logf(float) throw();
# 163 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log1p(double) throw();
# 165 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log1pf(float) throw();
# 168 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__));
# 170 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__));
# 173 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp(double) throw();
# 175 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expf(float) throw();
# 178 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cosh(double) throw();
# 180 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float coshf(float) throw();
# 183 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinh(double) throw();
# 185 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinhf(float) throw();
# 188 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tanh(double) throw();
# 190 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanhf(float) throw();
# 193 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acosh(double) throw();
# 195 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acoshf(float) throw();
# 198 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asinh(double) throw();
# 200 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinhf(float) throw();
# 203 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atanh(double) throw();
# 205 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanhf(float) throw();
# 208 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ldexp(double, int) throw();
# 210 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ldexpf(float, int) throw();
# 213 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double logb(double) throw();
# 215 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logbf(float) throw();
# 218 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogb(double) throw();
# 220 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogbf(float) throw();
# 223 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbn(double, int) throw();
# 225 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalbnf(float, int) throw();
# 228 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbln(double, long) throw();
# 230 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalblnf(float, long) throw();
# 233 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double frexp(double, int *) throw();
# 235 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float frexpf(float, int *) throw();
# 238 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__));
# 240 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__));
# 243 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lround(double) throw();
# 245 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lroundf(float) throw();
# 248 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llround(double) throw();
# 250 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llroundf(float) throw();
# 253 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rint(double) throw();
# 255 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rintf(float) throw();
# 258 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrint(double) throw();
# 260 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrintf(float) throw();
# 263 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrint(double) throw();
# 265 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrintf(float) throw();
# 268 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nearbyint(double) throw();
# 270 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nearbyintf(float) throw();
# 273 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__));
# 275 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__));
# 278 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__));
# 280 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__));
# 283 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fdim(double, double) throw();
# 285 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fdimf(float, float) throw();
# 288 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan2(double, double) throw();
# 290 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atan2f(float, float) throw();
# 293 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan(double) throw();
# 295 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanf(float) throw();
# 298 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asin(double) throw();
# 300 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinf(float) throw();
# 303 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acos(double) throw();
# 305 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acosf(float) throw();
# 308 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double hypot(double, double) throw();
# 310 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float hypotf(float, float) throw();
# 313 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cbrt(double) throw();
# 315 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cbrtf(float) throw();
# 318 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rcbrt(double);
# 320 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rcbrtf(float);
# 323 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinpi(double);
# 325 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinpif(float);
# 328 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double pow(double, double) throw();
# 330 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 333 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double modf(double, double *) throw();
# 335 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float modff(float, float *) throw();
# 338 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmod(double, double) throw();
# 340 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmodf(float, float) throw();
# 343 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remainder(double, double) throw();
# 345 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remainderf(float, float) throw();
# 348 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw();
# 350 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw();
# 353 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erf(double) throw();
# 355 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erff(float) throw();
# 358 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfinv(double);
# 360 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfinvf(float);
# 363 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfc(double) throw();
# 365 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcf(float) throw();
# 368 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfcinv(double);
# 370 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcinvf(float);
# 373 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double lgamma(double) throw();
# 375 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float lgammaf(float) throw();
# 378 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tgamma(double) throw();
# 380 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tgammaf(float) throw();
# 383 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__));
# 385 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__));
# 388 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__));
# 390 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__));
# 393 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__));
# 395 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__));
# 398 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 400 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 403 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 405 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 419 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 421 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 423 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 428 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 431 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fma(double, double, double) throw();
# 433 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw();
# 441 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 443 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 445 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 455 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acos(double) throw(); extern "C" double __acos(double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asin(double) throw(); extern "C" double __asin(double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan(double) throw(); extern "C" double __atan(double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cos(double) throw(); extern "C" double __cos(double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sin(double) throw(); extern "C" double __sin(double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tan(double) throw(); extern "C" double __tan(double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cosh(double) throw(); extern "C" double __cosh(double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sinh(double) throw(); extern "C" double __sinh(double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tanh(double) throw(); extern "C" double __tanh(double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acosh(double) throw(); extern "C" double __acosh(double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asinh(double) throw(); extern "C" double __asinh(double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp(double) throw(); extern "C" double __exp(double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log(double) throw(); extern "C" double __log(double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log10(double) throw(); extern "C" double __log10(double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp10(double) throw(); extern "C" double __exp10(double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double expm1(double) throw(); extern "C" double __expm1(double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log1p(double) throw(); extern "C" double __log1p(double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp2(double) throw(); extern "C" double __exp2(double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double rint(double) throw(); extern "C" double __rint(double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lround(double) throw(); extern "C" long __lround(double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llround(double) throw(); extern "C" long long __llround(double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acosf(float) throw(); extern "C" float __acosf(float) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinf(float) throw(); extern "C" float __asinf(float) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanf(float) throw(); extern "C" float __atanf(float) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cosf(float) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinf(float) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanf(float) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float coshf(float) throw(); extern "C" float __coshf(float) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expf(float) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logf(float) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log10f(float) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float rintf(float) throw(); extern "C" float __rintf(float) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 203 "/usr/include/math.h" 3
enum {
# 204 "/usr/include/math.h" 3
FP_NAN,
# 206 "/usr/include/math.h" 3
FP_INFINITE,
# 208 "/usr/include/math.h" 3
FP_ZERO,
# 210 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 212 "/usr/include/math.h" 3
FP_NORMAL
# 214 "/usr/include/math.h" 3
};
# 302 "/usr/include/math.h" 3
extern "C" { typedef
# 296 "/usr/include/math.h" 3
enum {
# 297 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 298 "/usr/include/math.h" 3
_SVID_ = 0,
# 299 "/usr/include/math.h" 3
_XOPEN_,
# 300 "/usr/include/math.h" 3
_POSIX_,
# 301 "/usr/include/math.h" 3
_ISOC_
# 302 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 307 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 318 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 323 "/usr/include/math.h" 3
int type;
# 324 "/usr/include/math.h" 3
char *name;
# 325 "/usr/include/math.h" 3
double arg1;
# 326 "/usr/include/math.h" 3
double arg2;
# 327 "/usr/include/math.h" 3
double retval;
# 328 "/usr/include/math.h" 3
}; }
# 331 "/usr/include/math.h" 3
extern "C" int matherr(__exception *) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/bits/waitstatus.h" 3
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 34 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 45 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 49 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 56 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 61 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 66 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 71 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 76 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 81 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 87 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 94 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t; }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t; }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long int64_t; }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t; }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef int register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 75 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 77 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 78 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 79 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[(1024 / (8 * ((int)sizeof(__fd_mask))))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long) throw();
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long) throw();
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned, unsigned) throw();
# 229 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 236 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 240 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 244 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 265 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union {
# 55 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 56 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 64 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 65 "/usr/include/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union {
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 124 "/usr/include/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union {
# 134 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union {
# 154 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 155 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 156 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 157 "/usr/include/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 158 "/usr/include/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 159 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 160 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 161 "/usr/include/bits/pthreadtypes.h" 3
int __writer;
# 162 "/usr/include/bits/pthreadtypes.h" 3
int __shared;
# 163 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 164 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 167 "/usr/include/bits/pthreadtypes.h" 3
unsigned __flags;
# 168 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 188 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union {
# 193 "/usr/include/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw() __attribute__((nonnull(2)));
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char *) throw() __attribute__((nonnull(1)));
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 351 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 352 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 353 "/usr/include/stdlib.h" 3
int32_t *state;
# 354 "/usr/include/stdlib.h" 3
int rand_type;
# 355 "/usr/include/stdlib.h" 3
int rand_deg;
# 356 "/usr/include/stdlib.h" 3
int rand_sep;
# 357 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 358 "/usr/include/stdlib.h" 3
}; }
# 360 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned, random_data *) throw() __attribute__((nonnull(2)));
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute__((nonnull(1)));
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 420 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 421 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 422 "/usr/include/stdlib.h" 3
unsigned short __c;
# 423 "/usr/include/stdlib.h" 3
unsigned short __init;
# 424 "/usr/include/stdlib.h" 3
unsigned long long __a;
# 425 "/usr/include/stdlib.h" 3
}; }
# 428 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw() __attribute__((nonnull(2)));
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw() __attribute__((__warn_unused_result__));
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void *) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));
# 508 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void **, size_t, size_t) throw() __attribute__((nonnull(1)));
# 514 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));
# 518 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void)) throw() __attribute__((nonnull(1)));
# 525 "/usr/include/stdlib.h" 3
int at_quick_exit(void (*)(void)) throw() __asm__("at_quick_exit") __attribute__((nonnull(1)));
# 536 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw() __attribute__((nonnull(1)));
# 544 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 552 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int) throw() __attribute__((__noreturn__));
# 560 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 567 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw() __attribute__((nonnull(1)));
# 572 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char *) throw() __attribute__((nonnull(1)));
# 579 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw() __attribute__((nonnull(1)));
# 585 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw() __attribute__((nonnull(2)));
# 589 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char *) throw() __attribute__((nonnull(1)));
# 596 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw() __attribute__((nonnull(1)));
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *) __attribute__((nonnull(1)));
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *) __attribute__((nonnull(1)));
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char *, int) __attribute__((nonnull(1)));
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char *, int) __attribute__((nonnull(1)));
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw() __attribute__((nonnull(1)));
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int) __attribute__((nonnull(1)));
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int) __attribute__((nonnull(1)));
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char *, int, int) __attribute__((nonnull(1)));
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char *, int, int) __attribute__((nonnull(1)));
# 717 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 724 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw() __attribute__((nonnull(1)));
# 734 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 742 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5)));
# 761 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 764 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 771 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 772 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 776 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 785 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));
# 787 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 793 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 808 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 814 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 820 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw() __attribute__((nonnull(3)));
# 826 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 829 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 832 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double, int, char *) throw() __attribute__((nonnull(3)));
# 838 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 841 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 845 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 849 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 860 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();
# 863 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 867 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char *, wchar_t) throw();
# 871 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 874 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 885 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw() __attribute__((nonnull(1)));
# 896 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 905 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw() __attribute__((nonnull(1)));
# 913 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 921 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();
# 925 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int) throw();
# 930 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int) throw();
# 937 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 941 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 948 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw() __attribute__((nonnull(1)));
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 71 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container> class __normal_iterator;
# 74 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 76 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace std __attribute__((visibility("default"))) {
# 78 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __true_type { };
# 79 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __false_type { };
# 81 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< bool __T0>
# 82 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __truth_type {
# 83 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 86 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 87 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 91 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 92 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __traitor {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 95 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 96 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 99 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class , class >
# 100 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same {
# 102 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 103 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 104 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 106 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 109 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 110 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 111 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 115 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_void {
# 117 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 118 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 119 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 122 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 125 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 126 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 132 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_integer {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 135 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 136 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 142 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 145 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 146 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 149 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 152 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 153 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 159 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 166 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 174 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 195 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 198 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 199 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 205 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 206 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 209 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 212 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 213 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 216 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 219 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 220 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 223 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 226 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 227 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 230 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 233 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 234 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 237 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 240 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 241 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 244 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 247 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 248 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 253 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 254 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_floating {
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 257 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 258 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 262 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 265 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 266 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 269 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 272 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 273 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 276 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 279 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 280 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 285 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 286 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 288 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 289 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 290 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 292 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 293 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 295 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 296 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 297 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 302 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 303 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 306 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 307 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 309 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 310 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 313 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 314 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 315 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 320 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 321 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 323 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 328 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 329 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 331 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 336 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 337 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 339 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 344 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 345 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_char {
# 347 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 348 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 349 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 352 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 355 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 356 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 360 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 363 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 364 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 368 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_byte {
# 370 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 371 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 372 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 375 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 378 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 379 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 382 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 385 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 386 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 389 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 392 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 393 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 398 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 399 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 401 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 402 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 403 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.4/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 40 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool __T1, class >
# 41 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if {
# 42 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 44 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 45 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 46 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 50 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 51 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type {
# 52 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 54 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 55 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 56 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 60 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 61 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __add_unsigned {
# 64 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 67 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 68 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 71 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 72 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 75 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 76 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 79 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 80 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned short __type; };
# 83 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 84 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned __type; };
# 87 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 88 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long __type; };
# 91 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 92 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 96 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 99 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 103 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 104 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __remove_unsigned {
# 107 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 110 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 111 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 115 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 118 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 119 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 122 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 123 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef short __type; };
# 126 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 127 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef int __type; };
# 130 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 131 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long __type; };
# 134 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 135 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long long __type; };
# 139 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 142 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 146 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 159 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote {
# 160 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef double __type; };
# 162 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 163 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 164 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 166 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up>
# 167 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_2 {
# 170 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 171 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 174 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(__type1() + __type2()) __type;
# 175 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 177 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp>
# 178 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_3 {
# 181 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 182 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 183 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 186 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2()) + __type3()) __type;
# 187 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 189 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp>
# 190 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_4 {
# 193 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 194 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 195 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 196 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 199 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3()) + __type4()) __type;
# 200 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 81 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94 "/usr/include/c++/4.4/cmath" 3
inline double abs(double __x)
# 95 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabs(__x); }
# 98 "/usr/include/c++/4.4/cmath" 3
inline float abs(float __x)
# 99 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 102 "/usr/include/c++/4.4/cmath" 3
inline long double abs(long double __x)
# 103 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 105 "/usr/include/c++/4.4/cmath" 3
using ::acos;
# 108 "/usr/include/c++/4.4/cmath" 3
inline float acos(float __x)
# 109 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosf(__x); }
# 112 "/usr/include/c++/4.4/cmath" 3
inline long double acos(long double __x)
# 113 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosl(__x); }
# 115 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 121 "/usr/include/c++/4.4/cmath" 3
using ::asin;
# 124 "/usr/include/c++/4.4/cmath" 3
inline float asin(float __x)
# 125 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinf(__x); }
# 128 "/usr/include/c++/4.4/cmath" 3
inline long double asin(long double __x)
# 129 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinl(__x); }
# 131 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 137 "/usr/include/c++/4.4/cmath" 3
using ::atan;
# 140 "/usr/include/c++/4.4/cmath" 3
inline float atan(float __x)
# 141 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanf(__x); }
# 144 "/usr/include/c++/4.4/cmath" 3
inline long double atan(long double __x)
# 145 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanl(__x); }
# 147 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 153 "/usr/include/c++/4.4/cmath" 3
using ::atan2;
# 156 "/usr/include/c++/4.4/cmath" 3
inline float atan2(float __y, float __x)
# 157 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 160 "/usr/include/c++/4.4/cmath" 3
inline long double atan2(long double __y, long double __x)
# 161 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 163 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 175 "/usr/include/c++/4.4/cmath" 3
using ::ceil;
# 178 "/usr/include/c++/4.4/cmath" 3
inline float ceil(float __x)
# 179 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceilf(__x); }
# 182 "/usr/include/c++/4.4/cmath" 3
inline long double ceil(long double __x)
# 183 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceill(__x); }
# 185 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 191 "/usr/include/c++/4.4/cmath" 3
using ::cos;
# 194 "/usr/include/c++/4.4/cmath" 3
inline float cos(float __x)
# 195 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosf(__x); }
# 198 "/usr/include/c++/4.4/cmath" 3
inline long double cos(long double __x)
# 199 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosl(__x); }
# 201 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 207 "/usr/include/c++/4.4/cmath" 3
using ::cosh;
# 210 "/usr/include/c++/4.4/cmath" 3
inline float cosh(float __x)
# 211 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshf(__x); }
# 214 "/usr/include/c++/4.4/cmath" 3
inline long double cosh(long double __x)
# 215 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshl(__x); }
# 217 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 223 "/usr/include/c++/4.4/cmath" 3
using ::exp;
# 226 "/usr/include/c++/4.4/cmath" 3
inline float exp(float __x)
# 227 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expf(__x); }
# 230 "/usr/include/c++/4.4/cmath" 3
inline long double exp(long double __x)
# 231 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expl(__x); }
# 233 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 239 "/usr/include/c++/4.4/cmath" 3
using ::fabs;
# 242 "/usr/include/c++/4.4/cmath" 3
inline float fabs(float __x)
# 243 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 246 "/usr/include/c++/4.4/cmath" 3
inline long double fabs(long double __x)
# 247 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 249 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 255 "/usr/include/c++/4.4/cmath" 3
using ::floor;
# 258 "/usr/include/c++/4.4/cmath" 3
inline float floor(float __x)
# 259 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorf(__x); }
# 262 "/usr/include/c++/4.4/cmath" 3
inline long double floor(long double __x)
# 263 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorl(__x); }
# 265 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 271 "/usr/include/c++/4.4/cmath" 3
using ::fmod;
# 274 "/usr/include/c++/4.4/cmath" 3
inline float fmod(float __x, float __y)
# 275 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 278 "/usr/include/c++/4.4/cmath" 3
inline long double fmod(long double __x, long double __y)
# 279 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 281 "/usr/include/c++/4.4/cmath" 3
using ::frexp;
# 284 "/usr/include/c++/4.4/cmath" 3
inline float frexp(float __x, int *__exp)
# 285 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 288 "/usr/include/c++/4.4/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 289 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 291 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 297 "/usr/include/c++/4.4/cmath" 3
using ::ldexp;
# 300 "/usr/include/c++/4.4/cmath" 3
inline float ldexp(float __x, int __exp)
# 301 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 304 "/usr/include/c++/4.4/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 305 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 307 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 313 "/usr/include/c++/4.4/cmath" 3
using ::log;
# 316 "/usr/include/c++/4.4/cmath" 3
inline float log(float __x)
# 317 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logf(__x); }
# 320 "/usr/include/c++/4.4/cmath" 3
inline long double log(long double __x)
# 321 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logl(__x); }
# 323 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 329 "/usr/include/c++/4.4/cmath" 3
using ::log10;
# 332 "/usr/include/c++/4.4/cmath" 3
inline float log10(float __x)
# 333 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10f(__x); }
# 336 "/usr/include/c++/4.4/cmath" 3
inline long double log10(long double __x)
# 337 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10l(__x); }
# 339 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 345 "/usr/include/c++/4.4/cmath" 3
using ::modf;
# 348 "/usr/include/c++/4.4/cmath" 3
inline float modf(float __x, float *__iptr)
# 349 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 352 "/usr/include/c++/4.4/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 353 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 355 "/usr/include/c++/4.4/cmath" 3
using ::pow;
# 358 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, float __y)
# 359 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powf(__x, __y); }
# 362 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, long double __y)
# 363 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powl(__x, __y); }
# 369 "/usr/include/c++/4.4/cmath" 3
inline double pow(double __x, int __i)
# 370 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powi(__x, __i); }
# 373 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, int __n)
# 374 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powif(__x, __n); }
# 377 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, int __n)
# 378 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powil(__x, __n); }
# 381 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 393 "/usr/include/c++/4.4/cmath" 3
using ::sin;
# 396 "/usr/include/c++/4.4/cmath" 3
inline float sin(float __x)
# 397 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinf(__x); }
# 400 "/usr/include/c++/4.4/cmath" 3
inline long double sin(long double __x)
# 401 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinl(__x); }
# 403 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 409 "/usr/include/c++/4.4/cmath" 3
using ::sinh;
# 412 "/usr/include/c++/4.4/cmath" 3
inline float sinh(float __x)
# 413 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhf(__x); }
# 416 "/usr/include/c++/4.4/cmath" 3
inline long double sinh(long double __x)
# 417 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhl(__x); }
# 419 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 425 "/usr/include/c++/4.4/cmath" 3
using ::sqrt;
# 428 "/usr/include/c++/4.4/cmath" 3
inline float sqrt(float __x)
# 429 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtf(__x); }
# 432 "/usr/include/c++/4.4/cmath" 3
inline long double sqrt(long double __x)
# 433 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtl(__x); }
# 435 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 441 "/usr/include/c++/4.4/cmath" 3
using ::tan;
# 444 "/usr/include/c++/4.4/cmath" 3
inline float tan(float __x)
# 445 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanf(__x); }
# 448 "/usr/include/c++/4.4/cmath" 3
inline long double tan(long double __x)
# 449 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanl(__x); }
# 451 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 457 "/usr/include/c++/4.4/cmath" 3
using ::tanh;
# 460 "/usr/include/c++/4.4/cmath" 3
inline float tanh(float __x)
# 461 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhf(__x); }
# 464 "/usr/include/c++/4.4/cmath" 3
inline long double tanh(long double __x)
# 465 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhl(__x); }
# 467 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 473 "/usr/include/c++/4.4/cmath" 3
}
# 492 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 494 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type ( __f ) );
    }
# 504 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 513 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 522 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 531 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 540 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 549 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 558 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 567 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 576 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 585 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 594 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 603 "/usr/include/c++/4.4/cmath" 3
}
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {
# 37 "/usr/include/c++/4.4/bits/cmath.tcc" 3
template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : _Tp ( 1 );

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }
# 53 "/usr/include/c++/4.4/bits/cmath.tcc" 3
}
# 49 "/usr/include/c++/4.4/cstddef" 3
namespace std __attribute__((visibility("default"))) {
# 51 "/usr/include/c++/4.4/cstddef" 3
using ::ptrdiff_t;
# 52 "/usr/include/c++/4.4/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.4/cstddef" 3
}
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 102 "/usr/include/c++/4.4/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.4/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.4/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.4/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.4/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.4/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.4/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.4/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.4/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.4/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.4/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.4/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.4/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.4/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.4/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.4/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.4/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.4/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.4/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.4/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.4/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.4/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.4/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.4/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.4/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.4/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.4/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.4/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.4/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 144 "/usr/include/c++/4.4/cstdlib" 3
}
# 157 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 160 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv_t;
# 166 "/usr/include/c++/4.4/cstdlib" 3
using ::_Exit;
# 170 "/usr/include/c++/4.4/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 173 "/usr/include/c++/4.4/cstdlib" 3
using ::llabs;
# 176 "/usr/include/c++/4.4/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.4/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 179 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv;
# 190 "/usr/include/c++/4.4/cstdlib" 3
using ::atoll;
# 191 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoll;
# 192 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoull;
# 194 "/usr/include/c++/4.4/cstdlib" 3
using ::strtof;
# 195 "/usr/include/c++/4.4/cstdlib" 3
using ::strtold;
# 197 "/usr/include/c++/4.4/cstdlib" 3
}
# 199 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 202 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 204 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::_Exit;
# 205 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::llabs;
# 208 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::div;
# 209 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv;
# 211 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::atoll;
# 212 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtof;
# 213 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoll;
# 214 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoull;
# 215 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.4/cstdlib" 3
}
# 497 "/usr/local/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {
# 499 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long long abs(long long) __attribute__((visibility("default")));
# 500 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 502 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 504 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __pow_helper(T, int);
# 505 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __cmath_power(T, unsigned);
# 506 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 508 "/usr/local/cuda/bin/../include/math_functions.h"
using std::abs;
# 509 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fabs;
# 510 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ceil;
# 511 "/usr/local/cuda/bin/../include/math_functions.h"
using std::floor;
# 512 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sqrt;
# 513 "/usr/local/cuda/bin/../include/math_functions.h"
using std::pow;
# 514 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log;
# 515 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log10;
# 516 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fmod;
# 517 "/usr/local/cuda/bin/../include/math_functions.h"
using std::modf;
# 518 "/usr/local/cuda/bin/../include/math_functions.h"
using std::exp;
# 519 "/usr/local/cuda/bin/../include/math_functions.h"
using std::frexp;
# 520 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ldexp;
# 521 "/usr/local/cuda/bin/../include/math_functions.h"
using std::asin;
# 522 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sin;
# 523 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sinh;
# 524 "/usr/local/cuda/bin/../include/math_functions.h"
using std::acos;
# 525 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cos;
# 526 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cosh;
# 527 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan;
# 528 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan2;
# 529 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tan;
# 530 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tanh;
# 584 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 587 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long abs(long) __attribute__((visibility("default")));
# 588 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float abs(float) __attribute__((visibility("default")));
# 589 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double abs(double) __attribute__((visibility("default")));
# 590 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fabs(float) __attribute__((visibility("default")));
# 591 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ceil(float) __attribute__((visibility("default")));
# 592 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float floor(float) __attribute__((visibility("default")));
# 593 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sqrt(float) __attribute__((visibility("default")));
# 594 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, float) __attribute__((visibility("default")));
# 595 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, int) __attribute__((visibility("default")));
# 596 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double pow(double, int) __attribute__((visibility("default")));
# 597 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log(float) __attribute__((visibility("default")));
# 598 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log10(float) __attribute__((visibility("default")));
# 599 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fmod(float, float) __attribute__((visibility("default")));
# 600 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float modf(float, float *) __attribute__((visibility("default")));
# 601 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float exp(float) __attribute__((visibility("default")));
# 602 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float frexp(float, int *) __attribute__((visibility("default")));
# 603 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ldexp(float, int) __attribute__((visibility("default")));
# 604 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float asin(float) __attribute__((visibility("default")));
# 605 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sin(float) __attribute__((visibility("default")));
# 606 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sinh(float) __attribute__((visibility("default")));
# 607 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float acos(float) __attribute__((visibility("default")));
# 608 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cos(float) __attribute__((visibility("default")));
# 609 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cosh(float) __attribute__((visibility("default")));
# 610 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan(float) __attribute__((visibility("default")));
# 611 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan2(float, float) __attribute__((visibility("default")));
# 612 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tan(float) __attribute__((visibility("default")));
# 613 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tanh(float) __attribute__((visibility("default")));
# 616 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 619 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float logb(float a)
# 620 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 621 "/usr/local/cuda/bin/../include/math_functions.h"
return logbf(a);
# 622 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 624 "/usr/local/cuda/bin/../include/math_functions.h"
static inline int ilogb(float a)
# 625 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 626 "/usr/local/cuda/bin/../include/math_functions.h"
return ilogbf(a);
# 627 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 629 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbn(float a, int b)
# 630 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 631 "/usr/local/cuda/bin/../include/math_functions.h"
return scalbnf(a, b);
# 632 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 634 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbln(float a, long b)
# 635 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 636 "/usr/local/cuda/bin/../include/math_functions.h"
return scalblnf(a, b);
# 637 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 639 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp2(float a)
# 640 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 641 "/usr/local/cuda/bin/../include/math_functions.h"
return exp2f(a);
# 642 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 644 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp10(float a)
# 645 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 646 "/usr/local/cuda/bin/../include/math_functions.h"
return exp10f(a);
# 647 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 649 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float expm1(float a)
# 650 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 651 "/usr/local/cuda/bin/../include/math_functions.h"
return expm1f(a);
# 652 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 654 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log2(float a)
# 655 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 656 "/usr/local/cuda/bin/../include/math_functions.h"
return log2f(a);
# 657 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 659 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log1p(float a)
# 660 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 661 "/usr/local/cuda/bin/../include/math_functions.h"
return log1pf(a);
# 662 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 664 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rsqrt(float a)
# 665 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 666 "/usr/local/cuda/bin/../include/math_functions.h"
return rsqrtf(a);
# 667 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 669 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float acosh(float a)
# 670 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 671 "/usr/local/cuda/bin/../include/math_functions.h"
return acoshf(a);
# 672 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 674 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float asinh(float a)
# 675 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 676 "/usr/local/cuda/bin/../include/math_functions.h"
return asinhf(a);
# 677 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 679 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float atanh(float a)
# 680 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 681 "/usr/local/cuda/bin/../include/math_functions.h"
return atanhf(a);
# 682 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 684 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float hypot(float a, float b)
# 685 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 686 "/usr/local/cuda/bin/../include/math_functions.h"
return hypotf(a, b);
# 687 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 689 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float cbrt(float a)
# 690 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 691 "/usr/local/cuda/bin/../include/math_functions.h"
return cbrtf(a);
# 692 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 694 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rcbrt(float a)
# 695 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 696 "/usr/local/cuda/bin/../include/math_functions.h"
return rcbrtf(a);
# 697 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 699 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float sinpi(float a)
# 700 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 701 "/usr/local/cuda/bin/../include/math_functions.h"
return sinpif(a);
# 702 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 704 "/usr/local/cuda/bin/../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 705 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 706 "/usr/local/cuda/bin/../include/math_functions.h"
sincosf(a, sptr, cptr);
# 707 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 709 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erf(float a)
# 710 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 711 "/usr/local/cuda/bin/../include/math_functions.h"
return erff(a);
# 712 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 714 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfinv(float a)
# 715 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 716 "/usr/local/cuda/bin/../include/math_functions.h"
return erfinvf(a);
# 717 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 719 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfc(float a)
# 720 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 721 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcf(a);
# 722 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 724 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfcinv(float a)
# 725 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 726 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcinvf(a);
# 727 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 729 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float lgamma(float a)
# 730 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 731 "/usr/local/cuda/bin/../include/math_functions.h"
return lgammaf(a);
# 732 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 734 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float tgamma(float a)
# 735 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 736 "/usr/local/cuda/bin/../include/math_functions.h"
return tgammaf(a);
# 737 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 739 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, float b)
# 740 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 741 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, b);
# 742 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 744 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double copysign(double a, float b)
# 745 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 746 "/usr/local/cuda/bin/../include/math_functions.h"
return copysign(a, (double)b);
# 747 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 749 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, double b)
# 750 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 751 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, (float)b);
# 752 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 754 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nextafter(float a, float b)
# 755 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 756 "/usr/local/cuda/bin/../include/math_functions.h"
return nextafterf(a, b);
# 757 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 759 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remainder(float a, float b)
# 760 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 761 "/usr/local/cuda/bin/../include/math_functions.h"
return remainderf(a, b);
# 762 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 764 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 765 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 766 "/usr/local/cuda/bin/../include/math_functions.h"
return remquof(a, b, quo);
# 767 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 769 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float round(float a)
# 770 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 771 "/usr/local/cuda/bin/../include/math_functions.h"
return roundf(a);
# 772 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 774 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lround(float a)
# 775 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 776 "/usr/local/cuda/bin/../include/math_functions.h"
return lroundf(a);
# 777 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 779 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llround(float a)
# 780 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 781 "/usr/local/cuda/bin/../include/math_functions.h"
return llroundf(a);
# 782 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 784 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float trunc(float a)
# 785 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 786 "/usr/local/cuda/bin/../include/math_functions.h"
return truncf(a);
# 787 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 789 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rint(float a)
# 790 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 791 "/usr/local/cuda/bin/../include/math_functions.h"
return rintf(a);
# 792 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 794 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lrint(float a)
# 795 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 796 "/usr/local/cuda/bin/../include/math_functions.h"
return lrintf(a);
# 797 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 799 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llrint(float a)
# 800 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 801 "/usr/local/cuda/bin/../include/math_functions.h"
return llrintf(a);
# 802 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 804 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nearbyint(float a)
# 805 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 806 "/usr/local/cuda/bin/../include/math_functions.h"
return nearbyintf(a);
# 807 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 809 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fdim(float a, float b)
# 810 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 811 "/usr/local/cuda/bin/../include/math_functions.h"
return fdimf(a, b);
# 812 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 814 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 815 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 816 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaf(a, b, c);
# 817 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 819 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmax(float a, float b)
# 820 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 821 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 822 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 824 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmin(float a, float b)
# 825 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 826 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 827 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 829 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 830 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 831 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, b);
# 832 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 834 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 835 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 836 "/usr/local/cuda/bin/../include/math_functions.h"
return umin((unsigned)a, b);
# 837 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 839 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 840 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 841 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, (unsigned)b);
# 842 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 844 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long min(long long a, long long b)
# 845 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 846 "/usr/local/cuda/bin/../include/math_functions.h"
return llmin(a, b);
# 847 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 849 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 850 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 851 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, b);
# 852 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 854 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 855 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 856 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 857 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 859 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 860 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 861 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 862 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 864 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float min(float a, float b)
# 865 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 866 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 867 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 869 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, double b)
# 870 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 871 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, b);
# 872 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 874 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(float a, double b)
# 875 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 876 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin((double)a, b);
# 877 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 879 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, float b)
# 880 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 881 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, (double)b);
# 882 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 884 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 885 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 886 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, b);
# 887 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 889 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 890 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 891 "/usr/local/cuda/bin/../include/math_functions.h"
return umax((unsigned)a, b);
# 892 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 894 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 895 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 896 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, (unsigned)b);
# 897 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 899 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long max(long long a, long long b)
# 900 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 901 "/usr/local/cuda/bin/../include/math_functions.h"
return llmax(a, b);
# 902 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 904 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 905 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 906 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, b);
# 907 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 909 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 910 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 911 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 912 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 914 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 915 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 916 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 917 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 919 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float max(float a, float b)
# 920 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 921 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 922 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 924 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, double b)
# 925 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 926 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, b);
# 927 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 929 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(float a, double b)
# 930 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 931 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax((double)a, b);
# 932 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 934 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, float b)
# 935 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 936 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, (double)b);
# 937 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< class T, int dim = 1>
# 61 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 63 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 64 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 65 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 66 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 68 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 69 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 70 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = desc;
# 71 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 72 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 75 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< int dim>
# 76 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 78 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 79 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 81 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 82 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 60 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
template< class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 61 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
struct texture : public textureReference {
# 63 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 64 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 65 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 66 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 67 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 68 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 69 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 70 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 71 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 72 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 73 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 75 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 76 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 77 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 78 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
desc)
# 79 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 81 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 82 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 83 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 84 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 85 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = desc;
# 86 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 87 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
};
# 324 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 325 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 327 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 329 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 330 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 332 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 334 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 335 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 337 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 339 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 340 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 342 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 344 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 345 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 347 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 349 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 350 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 352 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 354 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 355 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 357 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 359 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 360 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 365 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 367 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 369 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 370 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 372 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 374 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 375 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 377 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 379 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 380 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 382 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 384 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 385 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 390 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 392 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 394 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c)
# 395 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 397 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 399 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 400 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 404 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 405 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 422 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 424 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 425 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 430 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 438 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 446 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 453 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 454 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 459 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 102 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 103 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 105 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 107 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 108 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 113 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 115 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 117 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 118 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 120 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 122 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 123 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 125 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 127 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 128 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 130 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 132 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 133 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 135 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 138 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 142 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 143 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 147 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 148 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 150 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 152 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 153 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 155 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 157 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 158 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 162 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 163 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 168 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 170 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 172 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 173 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 175 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 178 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 182 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 183 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 185 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 187 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 188 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 190 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 192 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 193 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 195 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 197 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 198 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 203 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 205 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 75 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 76 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 78 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 80 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 81 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 83 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 85 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 86 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 88 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 90 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 91 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 93 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 95 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 96 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 98 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 170 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 171 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 176 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 178 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 179 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 184 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 186 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 187 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 194 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 195 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 203 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 208 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 210 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 211 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 216 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 218 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 219 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 224 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 226 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 227 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 234 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 235 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 240 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 242 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 243 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 245 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 248 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 252 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 253 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 66 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 67 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
{int volatile ___ = 1;
# 69 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
exit(___);}
# 124 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 125 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 127 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 129 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 130 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 132 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 134 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 135 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 137 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 139 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 140 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 142 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 97 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 98 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 99 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 106 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 108 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 109 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 110 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 116 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 118 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 119 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 120 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 122 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 125 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 126 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 128 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 131 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 132 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 134 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 138 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 143 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 144 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 146 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 149 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 155 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 156 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 163 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 164 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 166 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 169 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 174 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 178 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 183 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 184 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 189 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 196 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 198 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 201 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 202 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 204 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 207 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 208 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 216 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 218 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 221 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 222 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 226 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 235 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 236 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 238 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 241 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 242 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 244 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 248 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 253 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 254 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 256 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 259 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 264 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 267 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 268 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 270 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 273 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 274 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 278 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 281 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 282 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 284 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 287 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 288 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 290 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 293 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 294 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 296 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 299 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 300 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 302 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 305 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 306 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 308 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 311 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 312 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 316 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 319 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 320 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 322 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 385 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 386 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 388 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 391 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 392 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 394 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 398 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 406 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 410 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 457 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 458 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 459 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 466 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 468 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 469 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 470 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 476 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 478 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 479 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 480 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 482 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 485 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 486 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 488 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 492 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 494 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 497 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 498 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 500 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 503 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 504 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 506 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 509 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 510 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 512 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 516 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 520 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 523 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 524 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 526 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 530 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 534 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 537 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 538 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 540 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 543 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 544 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 546 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 549 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 550 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 555 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 556 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 558 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 562 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 564 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 567 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 568 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 572 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 576 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 578 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 581 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 582 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 586 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 590 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 592 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 595 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 596 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 598 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 601 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 602 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 604 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 607 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 608 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 610 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 613 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 614 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 616 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 619 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 620 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 624 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 627 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 628 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 630 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 633 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 634 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 638 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 641 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 642 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 644 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 647 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 648 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 650 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 653 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 654 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 659 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 660 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 662 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 665 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 666 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 668 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 672 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 679 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 680 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 682 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 745 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 746 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 748 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 751 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 752 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 754 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 757 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 758 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 762 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 765 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 766 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 770 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 817 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 818 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 819 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 837 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 839 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 840 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 841 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 843 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 846 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 847 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 849 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 851 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 852 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 854 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 856 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 857 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 859 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 861 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 862 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 864 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 866 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 867 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 869 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 871 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 872 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 877 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 879 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 881 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 882 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 884 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 886 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 887 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 889 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 891 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 892 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 894 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 896 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 897 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 899 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 901 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 902 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 904 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 906 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 907 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 909 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 911 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 912 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 914 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 916 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 917 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 919 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 921 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 922 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 924 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 926 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 927 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 929 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 931 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 932 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 934 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 936 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 937 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 939 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 941 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 942 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 947 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 949 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 951 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 952 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 954 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 956 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 957 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 959 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 961 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 962 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 964 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 966 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 967 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 969 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 971 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 972 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 974 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 976 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 977 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 979 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 981 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 982 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 984 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 986 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 987 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 989 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 991 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 992 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 994 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 996 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 997 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 999 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1045 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1046 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1048 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1050 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1051 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1053 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1055 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1056 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1058 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1060 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1061 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1063 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1110 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1111 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1112 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1130 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1132 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1133 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1134 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1136 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1139 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1140 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1142 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1144 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1145 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1147 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1149 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1155 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1157 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1159 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1160 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1162 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1164 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1165 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1167 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1169 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1172 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1174 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1175 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1177 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1179 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1180 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1182 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1184 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1185 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1187 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1189 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1194 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1195 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1197 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1199 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1200 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1202 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1204 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1205 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1207 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1209 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1210 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1214 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1215 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1217 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1219 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1220 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1222 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1224 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1225 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1227 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1229 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1234 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1235 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1237 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1239 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1240 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1242 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1244 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1245 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1247 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1249 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1250 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1255 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1257 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1259 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1262 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1264 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1265 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1267 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1269 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1270 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1272 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1274 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1275 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1277 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1279 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1280 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1282 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1284 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1285 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1287 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1289 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1290 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1292 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1338 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1339 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1341 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1343 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1344 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1346 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1348 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1349 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1351 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1353 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1354 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1356 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 61 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4);
# 63 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4);
# 65 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4);
# 68 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int = dim);
# 70 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, dim, readMode> , float4, int = dim);
# 72 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int = dim);
# 80 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 81 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 89 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 91 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 92 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 96 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 98 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 99 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 103 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 113 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 153 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 158 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 160 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 172 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 174 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 175 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 179 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 181 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 182 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 188 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 189 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 193 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 196 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 203 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 207 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 216 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 220 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 222 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 223 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 227 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 230 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 234 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 236 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 237 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 241 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 243 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 244 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 250 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 251 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 257 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 258 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 264 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 265 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 343 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 344 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 348 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 351 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 357 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 358 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 365 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 378 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 390 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 398 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 406 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 413 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 414 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 421 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 422 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 430 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 438 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 446 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 460 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 467 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 468 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 475 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 476 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 481 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 483 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 489 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 492 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 497 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 499 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 500 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 505 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 508 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 516 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 530 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 538 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 540 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 545 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 547 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 554 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 559 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 562 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 566 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 602 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 607 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 609 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 614 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 616 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 621 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 623 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 624 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 628 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 630 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 631 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 635 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 637 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 638 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 642 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 644 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 645 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 649 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 651 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 652 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 664 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 665 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 669 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 672 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 678 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 679 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 683 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 685 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 686 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 690 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 692 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 693 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 699 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 700 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 706 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 707 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 713 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 714 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 803 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 805 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 806 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 810 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 817 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 819 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 824 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 832 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 833 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 877 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 882 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 884 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 885 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 890 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 892 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 893 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 898 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 900 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 901 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 906 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 914 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 915 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 920 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 922 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 923 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 928 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 931 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 936 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 938 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 939 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 947 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 952 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 963 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 968 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 971 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 976 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 993 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 996 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1003 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1016 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1021 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1023 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1028 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1031 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1038 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1058 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1071 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1076 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1078 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1083 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1086 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1093 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1111 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1147 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1148 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1155 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1159 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1162 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1166 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1169 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1173 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1247 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1259 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1261 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1266 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1268 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1273 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1281 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1282 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1291 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1293 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1294 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1299 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1301 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1302 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1307 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1309 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1310 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1315 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1317 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1318 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1323 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1325 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1326 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1331 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1333 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1334 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1339 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1341 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1342 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1347 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1349 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1363 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1371 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1372 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1379 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1380 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1385 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1388 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1393 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1396 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1401 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1404 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1409 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1412 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1417 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1420 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1425 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1433 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1434 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1442 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1444 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1449 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1452 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1456 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1458 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1463 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1466 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1470 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1472 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1477 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1479 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1480 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1486 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1487 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1493 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1494 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1498 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1506 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1511 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1514 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1518 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1520 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1525 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1527 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1528 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1532 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1534 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1535 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1539 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1542 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1546 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1549 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1553 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1556 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1560 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1596 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1597 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1601 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1604 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1608 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1611 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1615 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1618 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1622 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1696 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1701 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1703 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1708 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1710 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1715 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1717 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1722 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1730 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1731 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1740 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1742 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1743 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1748 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1750 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1751 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1756 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1758 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1759 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1764 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1766 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1767 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1772 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1774 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1775 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1780 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1782 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1783 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1788 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1790 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1791 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1796 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1804 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1818 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1821 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1826 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1828 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1829 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1834 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1836 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1837 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern int4 __itex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1932 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern uint4 __utex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1934 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern float4 __ftex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1957 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1959 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1964 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1965 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1967 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1969 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1972 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1974 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1975 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1977 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1979 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1980 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1982 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1987 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1989 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1990 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1992 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1994 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1997 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1999 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2004 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2005 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2012 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2015 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2019 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2020 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2022 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2025 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2027 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2029 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2032 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2034 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2039 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2040 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2047 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2050 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2052 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2054 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2055 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2059 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2060 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2067 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2070 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2074 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2075 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2077 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2080 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2082 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2084 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2087 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2089 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2094 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2095 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2102 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2109 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2114 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2115 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2122 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2125 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2129 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2130 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2132 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 53 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 55 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 57 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 59 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 61 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 106 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 107 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaSetupArgument(T
# 108 "/usr/local/cuda/bin/../include/cuda_runtime.h"
arg, size_t
# 109 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset)
# 111 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 112 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 113 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 145 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 146 "/usr/local/cuda/bin/../include/cuda_runtime.h"
event, unsigned
# 147 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 149 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 150 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, 0);
# 151 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 208 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 209 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 210 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 211 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 213 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 214 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 215 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 217 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 218 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostAlloc(T **
# 219 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 220 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 221 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 223 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 224 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 225 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 227 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 228 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 229 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pDevice, void *
# 230 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pHost, unsigned
# 231 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 233 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 234 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 235 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 237 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 238 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMalloc(T **
# 239 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 240 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size)
# 242 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 243 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 244 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 246 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 247 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocHost(T **
# 248 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 249 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 250 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags = (0))
# 252 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 253 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 254 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 256 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 257 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocPitch(T **
# 258 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t *
# 259 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch, size_t
# 260 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 261 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height)
# 263 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 264 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 265 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 275 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 276 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 277 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 278 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 279 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 280 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 282 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 283 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 284 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 286 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 287 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 288 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 289 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 290 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 291 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 292 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 294 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 295 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 296 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 298 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 299 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 300 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 301 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 302 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 303 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 304 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 306 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 307 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 308 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 310 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 311 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 312 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 313 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 314 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 315 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 316 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 317 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 319 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 320 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 321 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 329 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 330 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 331 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 332 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 333 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 334 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 336 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 337 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 338 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 340 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 341 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 342 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 343 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 344 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 345 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 346 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 348 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 349 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 350 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 352 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 353 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 354 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 355 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 356 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 357 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 358 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 360 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 361 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 362 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 364 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 365 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 366 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 367 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 368 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 369 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 370 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 371 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 373 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 374 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 375 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 377 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 378 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, char *
# 379 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 381 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 382 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 383 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 410 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 411 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 412 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const T &
# 413 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 415 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 416 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 417 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 425 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 426 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, char *
# 427 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 429 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 430 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 431 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 458 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 459 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 460 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, const T &
# 461 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 463 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 464 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 465 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 507 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 508 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 509 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 510 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 511 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 512 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 513 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 515 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 516 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 517 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 552 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 553 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 554 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 555 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 556 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 557 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 559 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 560 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 561 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 608 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 609 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 610 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 611 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 612 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 613 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 614 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 615 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 616 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 618 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 619 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 620 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 666 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 667 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 668 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 669 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 670 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 671 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 672 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 673 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 675 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 676 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 708 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 709 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 710 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 711 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 712 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 714 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 715 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 716 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 746 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 747 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 748 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 749 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 751 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 752 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 753 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 755 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 756 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 785 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 786 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 787 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 789 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 790 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 791 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 825 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 826 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 827 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 828 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 830 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 831 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 832 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 886 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 887 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 888 "/usr/local/cuda/bin/../include/cuda_runtime.h"
func, cudaFuncCache
# 889 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cacheConfig)
# 891 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 892 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 893 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 930 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 931 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaLaunch(T *
# 932 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 934 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 935 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 936 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 970 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 971 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 972 "/usr/local/cuda/bin/../include/cuda_runtime.h"
attr, T *
# 973 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 975 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 976 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 977 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 999 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1000 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1001 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1002 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1003 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 1005 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1006 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 1028 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1029 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1030 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1031 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 1033 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1034 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1035 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1037 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1038 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 49 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 95 "/usr/include/wchar.h" 3
extern "C" { typedef
# 84 "/usr/include/wchar.h" 3
struct {
# 85 "/usr/include/wchar.h" 3
int __count;
# 87 "/usr/include/wchar.h" 3
union {
# 89 "/usr/include/wchar.h" 3
unsigned __wch;
# 93 "/usr/include/wchar.h" 3
char __wchb[4];
# 94 "/usr/include/wchar.h" 3
} __value;
# 95 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct {
# 24 "/usr/include/_G_config.h" 3
__off_t __pos;
# 25 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 26 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 31 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct {
# 29 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 30 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 31 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
# 54 "/usr/include/_G_config.h" 3
extern "C" { typedef int _G_int32_t; }
# 55 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned short _G_uint16_t; }
# 56 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned _G_uint32_t; }
# 40 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/va.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 187 "/usr/include/libio.h" 3
_IO_marker *_next;
# 188 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 192 "/usr/include/libio.h" 3
int _pos;
# 203 "/usr/include/libio.h" 3
}; }
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv
# 212 "/usr/include/libio.h" 3
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 272 "/usr/include/libio.h" 3
int _flags;
# 277 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 278 "/usr/include/libio.h" 3
char *_IO_read_end;
# 279 "/usr/include/libio.h" 3
char *_IO_read_base;
# 280 "/usr/include/libio.h" 3
char *_IO_write_base;
# 281 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 282 "/usr/include/libio.h" 3
char *_IO_write_end;
# 283 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 284 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 286 "/usr/include/libio.h" 3
char *_IO_save_base;
# 287 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 288 "/usr/include/libio.h" 3
char *_IO_save_end;
# 290 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 292 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 294 "/usr/include/libio.h" 3
int _fileno;
# 298 "/usr/include/libio.h" 3
int _flags2;
# 300 "/usr/include/libio.h" 3
__off_t _old_offset;
# 304 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 305 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 306 "/usr/include/libio.h" 3
char _shortbuf[1];
# 310 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
# 329 "/usr/include/libio.h" 3
void *__pad2;
# 330 "/usr/include/libio.h" 3
void *__pad3;
# 331 "/usr/include/libio.h" 3
void *__pad4;
# 332 "/usr/include/libio.h" 3
size_t __pad5;
# 334 "/usr/include/libio.h" 3
int _mode;
# 336 "/usr/include/libio.h" 3
char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];
# 338 "/usr/include/libio.h" 3
}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 346 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 347 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 348 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }
# 384 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void *); }
# 389 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct {
# 397 "/usr/include/libio.h" 3
__io_read_fn *read;
# 398 "/usr/include/libio.h" 3
__io_write_fn *write;
# 399 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 400 "/usr/include/libio.h" 3
__io_close_fn *close;
# 401 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 402 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 407 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 417 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 418 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int, _IO_FILE *);
# 462 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE *) throw();
# 463 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE *) throw();
# 465 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE *);
# 471 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 472 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 473 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 492 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 494 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 495 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 497 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 498 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 500 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 111 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 117 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 165 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 166 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 167 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 175 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();
# 177 "/usr/include/stdio.h" 3
extern "C" int rename(const char *, const char *) throw();
# 182 "/usr/include/stdio.h" 3
extern "C" int renameat(int, const char *, int, const char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 202 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 206 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char *) throw();
# 212 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 224 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 234 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE *);
# 249 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 259 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 269 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 275 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);
# 296 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 303 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 309 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();
# 316 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 322 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 329 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();
# 333 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 340 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();
# 344 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE *) throw();
# 353 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 359 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);
# 361 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 368 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 374 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__, __gnuc_va_list);
# 376 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 383 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();
# 387 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 396 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 399 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 402 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 414 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);
# 417 "/usr/include/stdio.h" 3
extern "C" int dprintf(int, const char *__restrict__, ...);
# 427 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 433 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);
# 435 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 473 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 481 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);
# 485 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 533 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
# 534 "/usr/include/stdio.h" 3
extern "C" int getc(FILE *);
# 540 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 552 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
# 553 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 563 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE *);
# 575 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
# 576 "/usr/include/stdio.h" 3
extern "C" int putc(int, FILE *);
# 582 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 596 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int, FILE *);
# 604 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
# 605 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int);
# 612 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);
# 615 "/usr/include/stdio.h" 3
extern "C" int putw(int, FILE *);
# 624 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 632 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 642 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 658 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 661 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 671 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__);
# 682 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 688 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 695 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 702 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 708 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 719 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 730 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 732 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);
# 747 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE *);
# 752 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE *);
# 766 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);
# 771 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE *);
# 791 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);
# 796 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE *, const fpos_t *);
# 811 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
# 812 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE *);
# 813 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
# 814 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE *, const fpos64_t *);
# 819 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *) throw();
# 821 "/usr/include/stdio.h" 3
extern "C" int feof(FILE *) throw();
# 823 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE *) throw();
# 828 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE *) throw();
# 829 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE *) throw();
# 830 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE *) throw();
# 839 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 851 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();
# 856 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE *) throw();
# 866 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 872 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 878 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 884 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);
# 889 "/usr/include/stdio.h" 3
struct obstack;
# 892 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();
# 895 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 906 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();
# 910 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE *) throw();
# 913 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE *) throw();
# 45 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort.cuh"
extern "C" { typedef unsigned uint; }
# 46 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort.cuh"
extern "C" { typedef unsigned short ushort; }
# 57 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort.cuh"
typedef
# 53 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort.cuh"
struct __attribute__((__aligned__(8))) {
# 54 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort.cuh"
uint key;
# 55 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort.cuh"
uint value;
# 57 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort.cuh"
} KeyValuePair;
# 60 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort.cuh"
extern "C" void RadixSort(KeyValuePair *, KeyValuePair *, uint, uint);
# 44 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int NUM_SMS = 16;
# 45 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int NUM_THREADS_PER_SM = 192;
# 46 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int NUM_THREADS_PER_BLOCK = 64;
# 48 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int NUM_BLOCKS = ((NUM_THREADS_PER_SM / NUM_THREADS_PER_BLOCK) * NUM_SMS);
# 49 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int RADIX = 8;
# 50 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int RADICES = (1 << RADIX);
# 51 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int RADIXMASK = (RADICES - 1);
# 55 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int RADIXBITS = 32;
# 57 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int RADIXTHREADS = 16;
# 58 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int RADIXGROUPS = (NUM_THREADS_PER_BLOCK / RADIXTHREADS);
# 59 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int TOTALRADIXGROUPS = (NUM_BLOCKS * RADIXGROUPS);
# 60 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int SORTRADIXGROUPS = (TOTALRADIXGROUPS * RADICES);
# 61 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int GRFELEMENTS = ((NUM_THREADS_PER_BLOCK / RADIXTHREADS) * RADICES);
# 62 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int GRFSIZE = ((GRFELEMENTS) * sizeof(uint));
# 65 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int PREFIX_NUM_THREADS_PER_SM = NUM_THREADS_PER_SM;
# 66 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int PREFIX_NUM_THREADS_PER_BLOCK = PREFIX_NUM_THREADS_PER_SM;
# 67 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int PREFIX_NUM_BLOCKS = ((PREFIX_NUM_THREADS_PER_SM / PREFIX_NUM_THREADS_PER_BLOCK) * NUM_SMS);
# 68 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int PREFIX_BLOCKSIZE = (SORTRADIXGROUPS / PREFIX_NUM_BLOCKS);
# 69 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int PREFIX_GRFELEMENTS = (PREFIX_BLOCKSIZE + (2 * PREFIX_NUM_THREADS_PER_BLOCK));
# 70 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int PREFIX_GRFSIZE = ((PREFIX_GRFELEMENTS) * sizeof(uint));
# 73 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int SHUFFLE_GRFOFFSET = (RADIXGROUPS * RADICES);
# 74 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int SHUFFLE_GRFELEMENTS = (SHUFFLE_GRFOFFSET + PREFIX_NUM_BLOCKS);
# 75 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static const int SHUFFLE_GRFSIZE = ((SHUFFLE_GRFELEMENTS) * sizeof(uint));
# 81 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
uint gRadixSum[(TOTALRADIXGROUPS * RADICES)];
# 82 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static uint dRadixSum[(TOTALRADIXGROUPS * RADICES)];
# 83 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
uint gRadixBlockSum[PREFIX_NUM_BLOCKS];
# 84 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
static uint dRadixBlockSum[PREFIX_NUM_BLOCKS];
# 86 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
__attribute__((unused)) extern uint sRadixSum[];
# 101 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
void RadixSum(KeyValuePair *pData, uint elements, uint elements_rounded_to_3072, uint shift) ;
# 251 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
void RadixPrefixSum() ;
# 374 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
void RadixAddOffsetsAndShuffle(KeyValuePair *pSrc, KeyValuePair *pDst, uint elements, uint elements_rounded_to_3072, int shift) ;
# 1 "/tmp/tmpxft_00000c41_00000000-1_radixsort_kernel.cudafe1.stub.c"
# 1 "/tmp/tmpxft_00000c41_00000000-1_radixsort_kernel.cudafe1.stub.c" 1
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1
# 91 "/usr/local/cuda/bin/../include/crt/host_runtime.h"
extern "C" {

extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

# 1 "/usr/local/cuda/bin/../include/common_functions.h" 1
# 90 "/usr/local/cuda/bin/../include/common_functions.h"
# 1 "/usr/local/cuda/bin/../include/math_functions.h" 1 3
# 948 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_constants.h" 1 3
# 949 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 2973 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 2974 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 4683 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) double rcbrt(double a); double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  }
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;



  if (__signbit(a))

  {
    t = -t;
  }
  return t;
}

extern __attribute__((__weak__)) double sinpi(double a); double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  }
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

extern __attribute__((__weak__)) double erfinv(double a); double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (fa == 1.0) {
      t = a * exp(1000.0);
    }
  } else if (fa >= 0.9375) {




    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    t = a * a - .87890625;
    p = .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q = t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {




    t = a * a - .5625;
    p = - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q = t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

extern __attribute__((__weak__)) double erfcinv(double a); double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);
    }
  }
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q = t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

extern __attribute__((__weak__)) float rcbrtf(float a); float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

extern __attribute__((__weak__)) float sinpif(float a); float sinpif(float a)
{
  return (float)sinpi((double)a);
}

extern __attribute__((__weak__)) float erfinvf(float a); float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

extern __attribute__((__weak__)) float erfcinvf(float a); float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}







extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) long long int llmin(long long int a, long long int b); long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmin(unsigned long long int a, unsigned long long int b); unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) long long int llmax(long long int a, long long int b); long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmax(unsigned long long int a, unsigned long long int b); unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}
# 5000 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx1.h" 1 3
# 5001 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 91 "/usr/local/cuda/bin/../include/common_functions.h" 2
# 164 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2







#pragma pack()
# 2 "/tmp/tmpxft_00000c41_00000000-1_radixsort_kernel.cudafe1.stub.c" 2
# 1 "/tmp/tmpxft_00000c41_00000000-3_radixsort_kernel.fatbin.c" 1
# 1 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 1
# 83 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
extern "C" {
# 97 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatDebugEntryRec {
    char* gpuProfileName;
    char* debug;
    struct __cudaFatDebugEntryRec *next;
    unsigned int size;
} __cudaFatDebugEntry;

typedef struct __cudaFatElfEntryRec {
    char* gpuProfileName;
    char* elf;
    struct __cudaFatElfEntryRec *next;
    unsigned int size;
} __cudaFatElfEntry;

typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 152 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 166 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatCudaBinaryRec {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
    __cudaFatSymbol *exported;
    __cudaFatSymbol *imported;
    struct __cudaFatCudaBinaryRec *dependends;
    unsigned int characteristic;
    __cudaFatElfEntry *elf;
} __cudaFatCudaBinary;
# 203 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode,
        __cudaFatForcePTX
    } __cudaFatCompilationPolicy;
# 227 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 240 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
unsigned char fatCheckJitForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *ptx );
# 250 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );





void __cudaFatFreePTX( char* ptx );


}
# 2 "/tmp/tmpxft_00000c41_00000000-3_radixsort_kernel.fatbin.c" 2

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$compute_10$:\n"
".quad 0x6f69737265762e09,0x2e090a342e31206e,0x7320746567726174,0x616d202c30315f6d\n"
".quad 0x6f745f3436665f70,0x2f2f090a3233665f,0x656c69706d6f6320,0x2f20687469772064\n"
".quad 0x61636f6c2f727375,0x6f2f616475632f6c,0x696c2f34366e6570,0x2f090a65622f2f62\n"
".quad 0x6e65706f766e202f,0x6220322e33206363,0x206e6f20746c6975,0x2d39302d30313032\n"
".quad 0x2d2f2f090a0a3930,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x43202f2f090a2d2d,0x676e696c69706d6f,0x6d742f706d742f20,0x3030305f74667870\n"
".quad 0x30305f3134633030,0x372d303030303030,0x6f7378696461725f,0x656e72656b5f7472\n"
".quad 0x692e337070632e6c,0x632f706d742f2820,0x77336e2e23494263,0x2f2f090a29426552\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2f2f090a0a2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x202f2f090a2d2d2d\n"
".quad 0x3a736e6f6974704f,0x2d2d2d2d2f2f090a,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x0a2d2d2d2d2d2d2d,0x72615420202f2f09,0x2c7874703a746567,0x5f6d733a41534920\n"
".quad 0x69646e45202c3031,0x6c7474696c3a6e61,0x746e696f50202c65,0x3a657a6953207265\n"
".quad 0x20202f2f090a3436,0x74704f2809334f2d,0x6f6974617a696d69,0x296c6576656c206e\n"
".quad 0x672d20202f2f090a,0x6775626544280930,0x0a296c6576656c20,0x326d2d20202f2f09\n"
".quad 0x74726f7065522809,0x726f736976646120,0x2f2f090a29736569,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x662e090a0a2d2d2d,0x3c22093109656c69\n"
".quad 0x2d646e616d6d6f63,0x090a223e656e696c,0x093209656c69662e,0x6d742f706d742f22\n"
".quad 0x3030305f74667870,0x30305f3134633030,0x362d303030303030,0x6f7378696461725f\n"
".quad 0x656e72656b5f7472,0x6566616475632e6c,0x090a227570672e32,0x093309656c69662e\n"
".quad 0x6e2f656d6f682f22,0x68632f6c616d726f,0x672f74756f6b6365,0x746f6c65636f7570\n"
".quad 0x632f73747365742f,0x742f322e32616475,0x7261702f73747365,0x722f73656c636974\n"
".quad 0x74726f7378696461,0x2e090a226875632e,0x22093409656c6966,0x62696c2f7273752f\n"
".quad 0x3836692f6363672f,0x2d78756e696c2d36,0x2e342e342f756e67,0x64756c636e692f35\n"
".quad 0x6665646474732f65,0x69662e090a22682e,0x752f22093509656c,0x6c61636f6c2f7273\n"
".quad 0x69622f616475632f,0x636e692f2e2e2f6e,0x7472632f6564756c,0x5f6563697665642f\n"
".quad 0x2e656d69746e7572,0x6c69662e090a2268,0x73752f2209360965,0x2f6c61636f6c2f72\n"
".quad 0x6e69622f61647563,0x6c636e692f2e2e2f,0x74736f682f656475,0x73656e696665645f\n"
".quad 0x69662e090a22682e,0x752f22093709656c,0x6c61636f6c2f7273,0x69622f616475632f\n"
".quad 0x636e692f2e2e2f6e,0x6975622f6564756c,0x7079745f6e69746c,0x2e090a22682e7365\n"
".quad 0x22093809656c6966,0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962\n"
".quad 0x642f6564756c636e,0x79745f6563697665,0x090a22682e736570,0x093909656c69662e\n"
".quad 0x6f6c2f7273752f22,0x616475632f6c6163,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x745f726576697264,0x0a22682e73657079,0x3109656c69662e09,0x2f7273752f220930\n"
".quad 0x75632f6c61636f6c,0x2e2f6e69622f6164,0x64756c636e692f2e,0x6361667275732f65\n"
".quad 0x2e73657079745f65,0x6c69662e090a2268,0x752f220931310965,0x6c61636f6c2f7273\n"
".quad 0x69622f616475632f,0x636e692f2e2e2f6e,0x7865742f6564756c,0x7079745f65727574\n"
".quad 0x2e090a22682e7365,0x09323109656c6966,0x6f6c2f7273752f22,0x616475632f6c6163\n"
".quad 0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x745f726f74636576,0x0a22682e73657079\n"
".quad 0x3109656c69662e09,0x2f7273752f220933,0x75632f6c61636f6c,0x2e2f6e69622f6164\n"
".quad 0x64756c636e692f2e,0x6563697665642f65,0x5f68636e75616c5f,0x6574656d61726170\n"
".quad 0x2e090a22682e7372,0x09343109656c6966,0x6f6c2f7273752f22,0x616475632f6c6163\n"
".quad 0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x726f74732f747263,0x73616c635f656761\n"
".quad 0x662e090a22682e73,0x2209353109656c69,0x636e692f7273752f,0x7469622f6564756c\n"
".quad 0x2e73657079742f73,0x6c69662e090a2268,0x752f220936310965,0x756c636e692f7273\n"
".quad 0x2e656d69742f6564,0x6c69662e090a2268,0x682f220937310965,0x6d726f6e2f656d6f\n"
".quad 0x6b636568632f6c61,0x6f7570672f74756f,0x65742f746f6c6563,0x616475632f737473\n"
".quad 0x747365742f322e32,0x6369747261702f73,0x696461722f73656c,0x656b5f74726f7378\n"
".quad 0x2275632e6c656e72,0x09656c69662e090a,0x7273752f22093831,0x632f6c61636f6c2f\n"
".quad 0x2f6e69622f616475,0x756c636e692f2e2e,0x6f6d6d6f632f6564,0x6974636e75665f6e\n"
".quad 0x090a22682e736e6f,0x393109656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f\n"
".quad 0x2e2e2f6e69622f61,0x6564756c636e692f,0x75665f6874616d2f,0x2e736e6f6974636e\n"
".quad 0x6c69662e090a2268,0x752f220930320965,0x6c61636f6c2f7273,0x69622f616475632f\n"
".quad 0x636e692f2e2e2f6e,0x74616d2f6564756c,0x6174736e6f635f68,0x090a22682e73746e\n"
".quad 0x313209656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x5f6563697665642f,0x6e6f6974636e7566,0x662e090a22682e73\n"
".quad 0x2209323209656c69,0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962\n"
".quad 0x732f6564756c636e,0x6f74615f31315f6d,0x636e75665f63696d,0x22682e736e6f6974\n"
".quad 0x09656c69662e090a,0x7273752f22093332,0x632f6c61636f6c2f,0x2f6e69622f616475\n"
".quad 0x756c636e692f2e2e,0x32315f6d732f6564,0x5f63696d6f74615f,0x6e6f6974636e7566\n"
".quad 0x662e090a22682e73,0x2209343209656c69,0x636f6c2f7273752f,0x2f616475632f6c61\n"
".quad 0x692f2e2e2f6e6962,0x732f6564756c636e,0x756f645f33315f6d,0x636e75665f656c62\n"
".quad 0x22682e736e6f6974,0x09656c69662e090a,0x7273752f22093532,0x632f6c61636f6c2f\n"
".quad 0x2f6e69622f616475,0x756c636e692f2e2e,0x30325f6d732f6564,0x5f63696d6f74615f\n"
".quad 0x6e6f6974636e7566,0x662e090a22682e73,0x2209363209656c69,0x636f6c2f7273752f\n"
".quad 0x2f616475632f6c61,0x692f2e2e2f6e6962,0x732f6564756c636e,0x746e695f30325f6d\n"
".quad 0x2e736369736e6972,0x6c69662e090a2268,0x752f220937320965,0x6c61636f6c2f7273\n"
".quad 0x69622f616475632f,0x636e692f2e2e2f6e,0x7275732f6564756c,0x6e75665f65636166\n"
".quad 0x682e736e6f697463,0x656c69662e090a22,0x73752f2209383209,0x2f6c61636f6c2f72\n"
".quad 0x6e69622f61647563,0x6c636e692f2e2e2f,0x747865742f656475,0x637465665f657275\n"
".quad 0x6974636e75665f68,0x090a22682e736e6f,0x393209656c69662e,0x6c2f7273752f2209\n"
".quad 0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f,0x75665f6874616d2f\n"
".quad 0x5f736e6f6974636e,0x317874705f6c6264,0x652e090a0a22682e,0x732e096e72657478\n"
".quad 0x612e206465726168,0x2e2034206e67696c,0x6964615273203862,0x0a3b5d5b6d755378\n"
".quad 0x6c61626f6c672e09,0x206e67696c612e20,0x52642038622e2034,0x5b6d755378696461\n"
".quad 0x3b5d383036363931,0x72746e652e090a0a,0x646152385a5f2079,0x3231506d75537869\n"
".quad 0x65756c615679654b,0x206a6a6a72696150,0x7261702e09090a28,0x203436752e206d61\n"
".quad 0x6170616475635f5f,0x6152385a5f5f6d72,0x31506d7553786964,0x756c615679654b32\n"
".quad 0x6a6a6a7269615065,0x0a2c61746144705f,0x6d617261702e0909,0x5f5f203233752e20\n"
".quad 0x6d72617061647563,0x69646152385a5f5f,0x4b3231506d755378,0x5065756c61567965\n"
".quad 0x655f6a6a6a726961,0x2c73746e656d656c,0x617261702e09090a,0x5f203233752e206d\n"
".quad 0x726170616475635f,0x646152385a5f5f6d,0x3231506d75537869,0x65756c615679654b\n"
".quad 0x5f6a6a6a72696150,0x73746e656d656c65,0x6465646e756f725f,0x323730335f6f745f\n"
".quad 0x7261702e09090a2c,0x203233752e206d61,0x6170616475635f5f,0x6152385a5f5f6d72\n"
".quad 0x31506d7553786964,0x756c615679654b32,0x6a6a6a7269615065,0x0a2974666968735f\n"
".quad 0x6765722e090a7b09,0x7225203631752e20,0x2e090a3b3e333c68,0x3233752e20676572\n"
".quad 0x3e3738313c722520,0x206765722e090a3b,0x647225203436752e,0x2e090a3b3e39343c\n"
".quad 0x6572702e20676572,0x3e31343c70252064,0x09636f6c2e090a3b,0x3009313031093731\n"
".quad 0x67656257444c240a,0x6152385a5f5f6e69,0x31506d7553786964,0x756c615679654b32\n"
".quad 0x6a6a6a7269615065,0x09636f6c2e090a3a,0x3009333031093731,0x33752e747663090a\n"
".quad 0x2509203631752e32,0x64697425202c3172,0x766f6d090a3b782e,0x722509203233732e\n"
".quad 0x0a3b317225202c32,0x3233752e766f6d09,0x31202c3372250920,0x6573090a3b333230\n"
".quad 0x33752e74672e7074,0x202c317025092032,0x337225202c317225,0x2031702540090a3b\n"
".quad 0x744c240920617262,0x32383430325f305f,0x752e766f6d090a3b,0x3164722509203436\n"
".quad 0x786964615273202c,0x6f6d090a3b6d7553,0x2509203233752e76,0x37383031202c3472\n"
".quad 0x752e627573090a3b,0x2c35722509203233,0x7225202c34722520,0x2e726873090a3b31\n"
".quad 0x3672250920323373,0x33202c357225202c,0x2e766f6d090a3b31,0x3772250920323373\n"
".quad 0x61090a3b3336202c,0x09203233622e646e,0x367225202c387225,0x090a3b377225202c\n"
".quad 0x203233732e646461,0x7225202c39722509,0x0a3b357225202c38,0x3233732e72687309\n"
".quad 0x202c303172250920,0x0a3b36202c397225,0x3436752e74766309,0x722509203233752e\n"
".quad 0x3b317225202c3264,0x69772e6c756d090a,0x09203233752e6564,0x7225202c33647225\n"
".quad 0x61090a3b34202c31,0x09203436752e6464,0x7225202c34647225,0x33647225202c3164\n"
".quad 0x732e766f6d090a3b,0x3131722509203233,0x0a3b30317225202c,0x30325f305f744c24\n"
".quad 0x2f2f200a3a343939,0x4c203e706f6f6c3c,0x79646f6220706f6f,0x303120656e696c20\n"
".quad 0x697473656e202c33,0x687470656420676e,0x747365202c31203a,0x6920646574616d69\n"
".quad 0x6e6f697461726574,0x6f6e6b6e75203a73,0x636f6c2e090a6e77,0x0938303109373109\n"
".quad 0x752e766f6d090a30,0x3231722509203233,0x7473090a3b30202c,0x2e6465726168732e\n"
".quad 0x72255b0920323375,0x25202c5d302b3464,0x6461090a3b323172,0x2509203233752e64\n"
".quad 0x2c327225202c3272,0x6461090a3b343620,0x2509203436752e64,0x647225202c346472\n"
".quad 0x0a3b363532202c34,0x3233752e766f6d09,0x202c333172250920,0x73090a3b33323031\n"
".quad 0x752e656c2e707465,0x2c32702509203233,0x7225202c32722520,0x702540090a3b3331\n"
".quad 0x2409206172622032,0x3930325f305f744c,0x5f744c240a3b3439,0x3a32383430325f30\n"
".quad 0x36752e766f6d090a,0x2c31647225092034,0x5378696461527320,0x6f6c2e090a3b6d75\n"
".quad 0x3633310937310963,0x2e726162090a3009,0x3b300920636e7973,0x33622e646e61090a\n"
".quad 0x2c34317225092032,0x3531202c31722520,0x752e726873090a3b,0x3531722509203233\n"
".quad 0x34202c317225202c,0x752e766f6d090a3b,0x3168722509203631,0x646961746325202c\n"
".quad 0x6c756d090a3b782e,0x31752e656469772e,0x2c36317225092036,0x34202c3168722520\n"
".quad 0x61702e646c090a3b,0x203233752e6d6172,0x5b202c3731722509,0x6170616475635f5f\n"
".quad 0x6152385a5f5f6d72,0x31506d7553786964,0x756c615679654b32,0x6a6a6a7269615065\n"
".quad 0x746e656d656c655f,0x65646e756f725f73,0x3730335f6f745f64,0x766f6d090a3b5d32\n"
".quad 0x722509203233752e,0x3334312d202c3831,0x3b35363735353631,0x69682e6c756d090a\n"
".quad 0x722509203233752e,0x37317225202c3931,0x0a3b38317225202c,0x3233752e72687309\n"
".quad 0x202c303272250920,0x3b37202c39317225,0x33752e646461090a,0x2c31327225092032\n"
".quad 0x25202c3531722520,0x756d090a3b363172,0x3233752e6f6c2e6c,0x202c323272250920\n"
".quad 0x7225202c30327225,0x646461090a3b3132,0x722509203233752e,0x34317225202c3332\n"
".quad 0x0a3b32327225202c,0x3233732e766f6d09,0x25202c3272250920,0x6461090a3b333272\n"
".quad 0x2509203233752e64,0x327225202c343272,0x3b32327225202c30,0x672e70746573090a\n"
".quad 0x2509203233752e65,0x33327225202c3370,0x0a3b34327225202c,0x7262203370254009\n"
".quad 0x305f744c24092061,0x0a3b36303531325f,0x3233752e62757309,0x202c353272250920\n"
".quad 0x7225202c30327225,0x646461090a3b3431,0x722509203233752e,0x35327225202c3632\n"
".quad 0x73090a3b3531202c,0x09203233732e7268,0x7225202c37327225,0x0a3b3133202c3632\n"
".quad 0x3233732e766f6d09,0x202c383272250920,0x646e61090a3b3531,0x722509203233622e\n"
".quad 0x37327225202c3932,0x0a3b38327225202c,0x3233732e64646109,0x202c303372250920\n"
".quad 0x7225202c39327225,0x726873090a3b3632,0x722509203233732e,0x30337225202c3133\n"
".quad 0x6f6d090a3b34202c,0x2509203233752e76,0x0a3b30202c323372,0x71652e7074657309\n"
".quad 0x702509203233752e,0x2c34317225202c34,0x090a3b3233722520,0x203233752e766f6d\n"
".quad 0x31202c3333722509,0x2e70746573090a3b,0x09203233752e7165,0x317225202c357025\n"
".quad 0x3b33337225202c34,0x33752e766f6d090a,0x2c34337225092032,0x746573090a3b3220\n"
".quad 0x3233752e71652e70,0x25202c3670250920,0x337225202c343172,0x2e766f6d090a3b34\n"
".quad 0x3372250920323375,0x73090a3b33202c35,0x752e71652e707465,0x2c37702509203233\n"
".quad 0x25202c3431722520,0x6f6d090a3b353372,0x2509203233752e76,0x0a3b34202c363372\n"
".quad 0x71652e7074657309,0x702509203233752e,0x2c34317225202c38,0x090a3b3633722520\n"
".quad 0x203233752e766f6d,0x35202c3733722509,0x2e70746573090a3b,0x09203233752e7165\n"
".quad 0x317225202c397025,0x3b37337225202c34,0x33752e766f6d090a,0x2c38337225092032\n"
".quad 0x746573090a3b3620,0x3233752e71652e70,0x202c303170250920,0x7225202c34317225\n"
".quad 0x766f6d090a3b3833,0x722509203233752e,0x090a3b37202c3933,0x2e71652e70746573\n"
".quad 0x3170250920323375,0x2c34317225202c31,0x090a3b3933722520,0x203233752e766f6d\n"
".quad 0x38202c3034722509,0x2e70746573090a3b,0x09203233752e7165,0x7225202c32317025\n"
".quad 0x30347225202c3431,0x752e766f6d090a3b,0x3134722509203233,0x6573090a3b39202c\n"
".quad 0x33752e71652e7074,0x2c33317025092032,0x25202c3431722520,0x6f6d090a3b313472\n"
".quad 0x2509203233752e76,0x3b3031202c323472,0x652e70746573090a,0x2509203233752e71\n"
".quad 0x317225202c343170,0x3b32347225202c34,0x33752e766f6d090a,0x2c33347225092032\n"
".quad 0x6573090a3b313120,0x33752e71652e7074,0x2c35317025092032,0x25202c3431722520\n"
".quad 0x6f6d090a3b333472,0x2509203233752e76,0x3b3231202c343472,0x652e70746573090a\n"
".quad 0x2509203233752e71,0x317225202c363170,0x3b34347225202c34,0x33752e766f6d090a\n"
".quad 0x2c35347225092032,0x6573090a3b333120,0x33752e71652e7074,0x2c37317025092032\n"
".quad 0x25202c3431722520,0x6f6d090a3b353472,0x2509203233752e76,0x3b3431202c363472\n"
".quad 0x652e70746573090a,0x2509203233752e71,0x317225202c383170,0x3b36347225202c34\n"
".quad 0x33752e766f6d090a,0x2c37347225092032,0x6573090a3b353120,0x33752e71652e7074\n"
".quad 0x2c39317025092032,0x25202c3431722520,0x6573090a3b373472,0x09203233732e706c\n"
".quad 0x2c31202c38347225,0x3b347025202c3020,0x732e706c6573090a,0x3934722509203233\n"
".quad 0x202c30202c31202c,0x6573090a3b357025,0x09203233732e706c,0x2c31202c30357225\n"
".quad 0x3b367025202c3020,0x732e706c6573090a,0x3135722509203233,0x202c30202c31202c\n"
".quad 0x6573090a3b377025,0x09203233732e706c,0x2c31202c32357225,0x3b387025202c3020\n"
".quad 0x732e706c6573090a,0x3335722509203233,0x202c30202c31202c,0x6573090a3b397025\n"
".quad 0x09203233732e706c,0x2c31202c34357225,0x30317025202c3020,0x2e706c6573090a3b\n"
".quad 0x3572250920323373,0x2c30202c31202c35,0x090a3b3131702520,0x3233732e706c6573\n"
".quad 0x202c363572250920,0x7025202c30202c31,0x6c6573090a3b3231,0x2509203233732e70\n"
".quad 0x202c31202c373572,0x3b33317025202c30,0x732e706c6573090a,0x3835722509203233\n"
".quad 0x202c30202c31202c,0x73090a3b34317025,0x203233732e706c65,0x31202c3935722509\n"
".quad 0x317025202c30202c,0x706c6573090a3b35,0x722509203233732e,0x30202c31202c3036\n"
".quad 0x0a3b36317025202c,0x33732e706c657309,0x2c31367225092032,0x25202c30202c3120\n"
".quad 0x6573090a3b373170,0x09203233732e706c,0x2c31202c32367225,0x38317025202c3020\n"
".quad 0x2e706c6573090a3b,0x3672250920323373,0x2c30202c31202c33,0x090a3b3931702520\n"
".quad 0x6d617261702e646c,0x722509203233752e,0x635f5f5b202c3436,0x5f6d726170616475\n"
".quad 0x7869646152385a5f,0x654b3231506d7553,0x615065756c615679,0x6c655f6a6a6a7269\n"
".quad 0x3b5d73746e656d65,0x33732e766f6d090a,0x2c35367225092032,0x240a3b3133722520\n"
".quad 0x3032325f305f744c,0x3c2f2f200a3a3831,0x6f4c203e706f6f6c,0x2079646f6220706f\n"
".quad 0x36333120656e696c,0x6e697473656e202c,0x3a68747065642067,0x69747365202c3120\n"
".quad 0x746920646574616d,0x736e6f6974617265,0x776f6e6b6e75203a,0x2e70746573090a6e\n"
".quad 0x09203233752e746c,0x7225202c30327025,0x3b34367225202c32,0x303270252140090a\n"
".quad 0x4c24092061726220,0x333532325f305f74,0x6c3c2f2f200a3b30,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c36333120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x313032325f305f74,0x09636f6c2e090a38,0x3009383431093731\n"
".quad 0x6f6c2e6c756d090a,0x722509203233752e,0x2c327225202c3636,0x747663090a3b3820\n"
".quad 0x3233752e3436752e,0x202c356472250920,0x6c090a3b36367225,0x2e6d617261702e64\n"
".quad 0x6472250920343675,0x75635f5f5b202c36,0x5f5f6d7261706164,0x537869646152385a\n"
".quad 0x79654b3231506d75,0x69615065756c6156,0x6144705f6a6a6a72,0x6461090a3b5d6174\n"
".quad 0x2509203436752e64,0x647225202c376472,0x3b36647225202c35,0x6f6c672e646c090a\n"
".quad 0x203233752e6c6162,0x5b202c3736722509,0x3b5d302b37647225,0x6e752e617262090a\n"
".quad 0x305f744c24092069,0x0a3b34373232325f,0x32325f305f744c24,0x2f2f200a3a303335\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x333120656e696c20\n"
".quad 0x2064616568202c36,0x2064656c6562616c,0x32325f305f744c24,0x6f6c2e090a383130\n"
".quad 0x3035310937310963,0x2e766f6d090a3009,0x3672250920323375,0x4c240a3b30202c37\n"
".quad 0x373232325f305f74,0x6c3c2f2f200a3a34,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c36333120656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x313032325f305f74,0x2e706c6573090a38,0x3672250920323373,0x2c30202c31202c38\n"
".quad 0x090a3b3032702520,0x203233622e646e61,0x25202c3936722509,0x347225202c383672\n"
".quad 0x2e766f6d090a3b38,0x3772250920323375,0x73090a3b30202c30,0x732e71652e707465\n"
".quad 0x3132702509203233,0x202c39367225202c,0x40090a3b30377225,0x6172622031327025\n"
".quad 0x5f305f744c240920,0x200a3b3638373232,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c363331,0x656c6562616c2064\n"
".quad 0x5f305f744c242064,0x2e090a3831303232,0x3109373109636f6c,0x646c090a30093337\n"
".quad 0x732e6d617261702e,0x3137722509203233,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x7553786964615238,0x5679654b3231506d,0x7269615065756c61,0x666968735f6a6a6a\n"
".quad 0x726873090a3b5d74,0x722509203233752e,0x37367225202c3237,0x0a3b31377225202c\n"
".quad 0x3233622e646e6109,0x202c333772250920,0x3532202c32377225,0x2e6c756d090a3b35\n"
".quad 0x09203233752e6f6c,0x7225202c34377225,0x090a3b34202c3337,0x203233752e646461\n"
".quad 0x25202c3537722509,0x377225202c353172,0x2e747663090a3b34,0x203233752e343675\n"
".quad 0x25202c3864722509,0x756d090a3b353772,0x752e656469772e6c,0x3964722509203233\n"
".quad 0x202c35377225202c,0x2e646461090a3b34,0x6472250920343675,0x31647225202c3031\n"
".quad 0x0a3b39647225202c,0x726168732e646c09,0x09203233752e6465,0x255b202c36377225\n"
".quad 0x3b5d302b30316472,0x33752e646461090a,0x2c37377225092032,0x31202c3637722520\n"
".quad 0x68732e7473090a3b,0x3233752e64657261,0x30316472255b0920,0x377225202c5d302b\n"
".quad 0x305f744c240a3b37,0x0a3a36383732325f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c36333120,0x6c6562616c206461\n"
".quad 0x305f744c24206465,0x090a38313032325f,0x09373109636f6c2e,0x62090a3009343731\n"
".quad 0x20636e79732e7261,0x646e61090a3b3009,0x722509203233622e,0x38367225202c3837\n"
".quad 0x0a3b39347225202c,0x3233752e766f6d09,0x202c393772250920,0x70746573090a3b30\n"
".quad 0x203233732e71652e,0x25202c3232702509,0x377225202c383772,0x32702540090a3b39\n"
".quad 0x2409206172622032,0x3233325f305f744c,0x3c2f2f200a3b3839,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x36333120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3032325f305f744c,0x636f6c2e090a3831,0x0936373109373109\n"
".quad 0x61702e646c090a30,0x203233732e6d6172,0x5b202c3038722509,0x6170616475635f5f\n"
".quad 0x6152385a5f5f6d72,0x31506d7553786964,0x756c615679654b32,0x6a6a6a7269615065\n"
".quad 0x3b5d74666968735f,0x33752e726873090a,0x2c32377225092032,0x25202c3736722520\n"
".quad 0x6e61090a3b303872,0x2509203233622e64,0x377225202c333772,0x0a3b353532202c32\n"
".quad 0x2e6f6c2e6c756d09,0x3772250920323375,0x2c33377225202c34,0x646461090a3b3420\n"
".quad 0x722509203233752e,0x35317225202c3138,0x0a3b34377225202c,0x3436752e74766309\n"
".quad 0x722509203233752e,0x387225202c313164,0x2e6c756d090a3b31,0x3233752e65646977\n"
".quad 0x2c32316472250920,0x34202c3138722520,0x752e646461090a3b,0x3164722509203436\n"
".quad 0x2c31647225202c30,0x0a3b323164722520,0x726168732e646c09,0x09203233752e6465\n"
".quad 0x255b202c32387225,0x3b5d302b30316472,0x33752e646461090a,0x2c33387225092032\n"
".quad 0x31202c3238722520,0x68732e7473090a3b,0x3233752e64657261,0x30316472255b0920\n"
".quad 0x387225202c5d302b,0x305f744c240a3b33,0x0a3a38393233325f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c36333120\n"
".quad 0x6c6562616c206461,0x305f744c24206465,0x090a38313032325f,0x09373109636f6c2e\n"
".quad 0x62090a3009373731,0x20636e79732e7261,0x646e61090a3b3009,0x722509203233622e\n"
".quad 0x38367225202c3438,0x0a3b30357225202c,0x3233752e766f6d09,0x202c353872250920\n"
".quad 0x70746573090a3b30,0x203233732e71652e,0x25202c3332702509,0x387225202c343872\n"
".quad 0x32702540090a3b35,0x2409206172622033,0x3833325f305f744c,0x3c2f2f200a3b3031\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x36333120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3032325f305f744c,0x636f6c2e090a3831\n"
".quad 0x0939373109373109,0x61702e646c090a30,0x203233732e6d6172,0x5b202c3638722509\n"
".quad 0x6170616475635f5f,0x6152385a5f5f6d72,0x31506d7553786964,0x756c615679654b32\n"
".quad 0x6a6a6a7269615065,0x3b5d74666968735f,0x33752e726873090a,0x2c32377225092032\n"
".quad 0x25202c3736722520,0x6e61090a3b363872,0x2509203233622e64,0x377225202c333772\n"
".quad 0x0a3b353532202c32,0x2e6f6c2e6c756d09,0x3772250920323375,0x2c33377225202c34\n"
".quad 0x646461090a3b3420,0x722509203233752e,0x35317225202c3738,0x0a3b34377225202c\n"
".quad 0x3436752e74766309,0x722509203233752e,0x387225202c333164,0x2e6c756d090a3b37\n"
".quad 0x3233752e65646977,0x2c34316472250920,0x34202c3738722520,0x752e646461090a3b\n"
".quad 0x3164722509203436,0x2c31647225202c30,0x0a3b343164722520,0x726168732e646c09\n"
".quad 0x09203233752e6465,0x255b202c38387225,0x3b5d302b30316472,0x33752e646461090a\n"
".quad 0x2c39387225092032,0x31202c3838722520,0x68732e7473090a3b,0x3233752e64657261\n"
".quad 0x30316472255b0920,0x387225202c5d302b,0x305f744c240a3b39,0x0a3a30313833325f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c36333120,0x6c6562616c206461,0x305f744c24206465,0x090a38313032325f\n"
".quad 0x09373109636f6c2e,0x62090a3009303831,0x20636e79732e7261,0x646e61090a3b3009\n"
".quad 0x722509203233622e,0x38367225202c3039,0x0a3b31357225202c,0x3233752e766f6d09\n"
".quad 0x202c313972250920,0x70746573090a3b30,0x203233732e71652e,0x25202c3432702509\n"
".quad 0x397225202c303972,0x32702540090a3b31,0x2409206172622034,0x3334325f305f744c\n"
".quad 0x3c2f2f200a3b3232,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x36333120656e696c,0x6c2064616568202c,0x242064656c656261,0x3032325f305f744c\n"
".quad 0x636f6c2e090a3831,0x0932383109373109,0x61702e646c090a30,0x203233732e6d6172\n"
".quad 0x5b202c3239722509,0x6170616475635f5f,0x6152385a5f5f6d72,0x31506d7553786964\n"
".quad 0x756c615679654b32,0x6a6a6a7269615065,0x3b5d74666968735f,0x33752e726873090a\n"
".quad 0x2c32377225092032,0x25202c3736722520,0x6e61090a3b323972,0x2509203233622e64\n"
".quad 0x377225202c333772,0x0a3b353532202c32,0x2e6f6c2e6c756d09,0x3772250920323375\n"
".quad 0x2c33377225202c34,0x646461090a3b3420,0x722509203233752e,0x35317225202c3339\n"
".quad 0x0a3b34377225202c,0x3436752e74766309,0x722509203233752e,0x397225202c353164\n"
".quad 0x2e6c756d090a3b33,0x3233752e65646977,0x2c36316472250920,0x34202c3339722520\n"
".quad 0x752e646461090a3b,0x3164722509203436,0x2c31647225202c30,0x0a3b363164722520\n"
".quad 0x726168732e646c09,0x09203233752e6465,0x255b202c34397225,0x3b5d302b30316472\n"
".quad 0x33752e646461090a,0x2c35397225092032,0x31202c3439722520,0x68732e7473090a3b\n"
".quad 0x3233752e64657261,0x30316472255b0920,0x397225202c5d302b,0x305f744c240a3b35\n"
".quad 0x0a3a32323334325f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c36333120,0x6c6562616c206461,0x305f744c24206465\n"
".quad 0x090a38313032325f,0x09373109636f6c2e,0x62090a3009333831,0x20636e79732e7261\n"
".quad 0x646e61090a3b3009,0x722509203233622e,0x38367225202c3639,0x0a3b32357225202c\n"
".quad 0x3233752e766f6d09,0x202c373972250920,0x70746573090a3b30,0x203233732e71652e\n"
".quad 0x25202c3532702509,0x397225202c363972,0x32702540090a3b37,0x2409206172622035\n"
".quad 0x3834325f305f744c,0x3c2f2f200a3b3433,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x36333120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3032325f305f744c,0x636f6c2e090a3831,0x0935383109373109,0x61702e646c090a30\n"
".quad 0x203233732e6d6172,0x5b202c3839722509,0x6170616475635f5f,0x6152385a5f5f6d72\n"
".quad 0x31506d7553786964,0x756c615679654b32,0x6a6a6a7269615065,0x3b5d74666968735f\n"
".quad 0x33752e726873090a,0x2c32377225092032,0x25202c3736722520,0x6e61090a3b383972\n"
".quad 0x2509203233622e64,0x377225202c333772,0x0a3b353532202c32,0x2e6f6c2e6c756d09\n"
".quad 0x3772250920323375,0x2c33377225202c34,0x646461090a3b3420,0x722509203233752e\n"
".quad 0x35317225202c3939,0x0a3b34377225202c,0x3436752e74766309,0x722509203233752e\n"
".quad 0x397225202c373164,0x2e6c756d090a3b39,0x3233752e65646977,0x2c38316472250920\n"
".quad 0x34202c3939722520,0x752e646461090a3b,0x3164722509203436,0x2c31647225202c30\n"
".quad 0x0a3b383164722520,0x726168732e646c09,0x09203233752e6465,0x5b202c3030317225\n"
".quad 0x5d302b3031647225,0x752e646461090a3b,0x3031722509203233,0x3030317225202c31\n"
".quad 0x7473090a3b31202c,0x2e6465726168732e,0x72255b0920323375,0x202c5d302b303164\n"
".quad 0x240a3b3130317225,0x3834325f305f744c,0x3c2f2f200a3a3433,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x36333120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3032325f305f744c,0x636f6c2e090a3831,0x0936383109373109\n"
".quad 0x732e726162090a30,0x0a3b300920636e79,0x3233622e646e6109,0x2c32303172250920\n"
".quad 0x25202c3836722520,0x6f6d090a3b333572,0x2509203233752e76,0x3b30202c33303172\n"
".quad 0x652e70746573090a,0x2509203233732e71,0x317225202c363270,0x30317225202c3230\n"
".quad 0x32702540090a3b33,0x2409206172622036,0x3335325f305f744c,0x3c2f2f200a3b3634\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x36333120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3032325f305f744c,0x636f6c2e090a3831\n"
".quad 0x0938383109373109,0x61702e646c090a30,0x203233732e6d6172,0x202c343031722509\n"
".quad 0x70616475635f5f5b,0x52385a5f5f6d7261,0x506d755378696461,0x6c615679654b3231\n"
".quad 0x6a6a726961506575,0x5d74666968735f6a,0x752e726873090a3b,0x3237722509203233\n"
".quad 0x202c37367225202c,0x090a3b3430317225,0x203233622e646e61,0x25202c3337722509\n"
".quad 0x353532202c323772,0x6c2e6c756d090a3b,0x2509203233752e6f,0x377225202c343772\n"
".quad 0x61090a3b34202c33,0x09203233752e6464,0x25202c3530317225,0x377225202c353172\n"
".quad 0x2e747663090a3b34,0x203233752e343675,0x202c393164722509,0x090a3b3530317225\n"
".quad 0x656469772e6c756d,0x722509203233752e,0x317225202c303264,0x090a3b34202c3530\n"
".quad 0x203436752e646461,0x202c303164722509,0x7225202c31647225,0x646c090a3b303264\n"
".quad 0x2e6465726168732e,0x3172250920323375,0x6472255b202c3630,0x090a3b5d302b3031\n"
".quad 0x203233752e646461,0x202c373031722509,0x31202c3630317225,0x68732e7473090a3b\n"
".quad 0x3233752e64657261,0x30316472255b0920,0x317225202c5d302b,0x5f744c240a3b3730\n"
".quad 0x3a36343335325f30,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3633312065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a38313032325f30,0x373109636f6c2e09,0x090a300939383109,0x636e79732e726162\n"
".quad 0x6e61090a3b300920,0x2509203233622e64,0x7225202c38303172,0x34357225202c3836\n"
".quad 0x752e766f6d090a3b,0x3031722509203233,0x73090a3b30202c39,0x732e71652e707465\n"
".quad 0x3732702509203233,0x2c3830317225202c,0x0a3b393031722520,0x6220373270254009\n"
".quad 0x5f744c2409206172,0x3b38353835325f30,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3633312065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a38313032325f30,0x373109636f6c2e09,0x090a300931393109\n"
".quad 0x6d617261702e646c,0x722509203233732e,0x5f5f5b202c303131,0x6d72617061647563\n"
".quad 0x69646152385a5f5f,0x4b3231506d755378,0x5065756c61567965,0x735f6a6a6a726961\n"
".quad 0x090a3b5d74666968,0x203233752e726873,0x25202c3237722509,0x317225202c373672\n"
".quad 0x646e61090a3b3031,0x722509203233622e,0x32377225202c3337,0x090a3b353532202c\n"
".quad 0x752e6f6c2e6c756d,0x3437722509203233,0x202c33377225202c,0x2e646461090a3b34\n"
".quad 0x3172250920323375,0x35317225202c3131,0x0a3b34377225202c,0x3436752e74766309\n"
".quad 0x722509203233752e,0x317225202c313264,0x6c756d090a3b3131,0x33752e656469772e\n"
".quad 0x3232647225092032,0x2c3131317225202c,0x646461090a3b3420,0x722509203436752e\n"
".quad 0x647225202c303164,0x3232647225202c31,0x68732e646c090a3b,0x3233752e64657261\n"
".quad 0x2c32313172250920,0x2b30316472255b20,0x646461090a3b5d30,0x722509203233752e\n"
".quad 0x317225202c333131,0x090a3b31202c3231,0x65726168732e7473,0x5b09203233752e64\n"
".quad 0x5d302b3031647225,0x3b3331317225202c,0x325f305f744c240a,0x2f200a3a38353835\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079\n"
".quad 0x64616568202c3633,0x64656c6562616c20,0x325f305f744c2420,0x6c2e090a38313032\n"
".quad 0x393109373109636f,0x726162090a300932,0x300920636e79732e,0x622e646e61090a3b\n"
".quad 0x3131722509203233,0x2c38367225202c34,0x090a3b3535722520,0x203233752e766f6d\n"
".quad 0x202c353131722509,0x70746573090a3b30,0x203233732e71652e,0x25202c3832702509\n"
".quad 0x7225202c34313172,0x2540090a3b353131,0x2061726220383270,0x325f305f744c2409\n"
".quad 0x2f200a3b30373336,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3120656e696c2079,0x64616568202c3633,0x64656c6562616c20,0x325f305f744c2420\n"
".quad 0x6c2e090a38313032,0x393109373109636f,0x2e646c090a300934,0x33732e6d61726170\n"
".quad 0x3631317225092032,0x6475635f5f5b202c,0x5a5f5f6d72617061,0x7553786964615238\n"
".quad 0x5679654b3231506d,0x7269615065756c61,0x666968735f6a6a6a,0x726873090a3b5d74\n"
".quad 0x722509203233752e,0x37367225202c3237,0x3b3631317225202c,0x33622e646e61090a\n"
".quad 0x2c33377225092032,0x32202c3237722520,0x6c756d090a3b3535,0x203233752e6f6c2e\n"
".quad 0x25202c3437722509,0x0a3b34202c333772,0x3233752e64646109,0x2c37313172250920\n"
".quad 0x25202c3531722520,0x7663090a3b343772,0x33752e3436752e74,0x3332647225092032\n"
".quad 0x3b3731317225202c,0x69772e6c756d090a,0x09203233752e6564,0x25202c3432647225\n"
".quad 0x3b34202c37313172,0x36752e646461090a,0x3031647225092034,0x202c31647225202c\n"
".quad 0x090a3b3432647225,0x65726168732e646c,0x2509203233752e64,0x255b202c38313172\n"
".quad 0x3b5d302b30316472,0x33752e646461090a,0x3931317225092032,0x2c3831317225202c\n"
".quad 0x2e7473090a3b3120,0x752e646572616873,0x6472255b09203233,0x25202c5d302b3031\n"
".quad 0x4c240a3b39313172,0x373336325f305f74,0x6c3c2f2f200a3a30,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c36333120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x313032325f305f74,0x09636f6c2e090a38,0x3009353931093731\n"
".quad 0x79732e726162090a,0x090a3b300920636e,0x203233622e646e61,0x202c303231722509\n"
".quad 0x7225202c38367225,0x766f6d090a3b3635,0x722509203233752e,0x0a3b30202c313231\n"
".quad 0x71652e7074657309,0x702509203233732e,0x32317225202c3932,0x3132317225202c30\n"
".quad 0x3932702540090a3b,0x4c24092061726220,0x383836325f305f74,0x6c3c2f2f200a3b32\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c36333120656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x313032325f305f74,0x09636f6c2e090a38\n"
".quad 0x3009373931093731,0x7261702e646c090a,0x09203233732e6d61,0x5b202c3232317225\n"
".quad 0x6170616475635f5f,0x6152385a5f5f6d72,0x31506d7553786964,0x756c615679654b32\n"
".quad 0x6a6a6a7269615065,0x3b5d74666968735f,0x33752e726873090a,0x2c32377225092032\n"
".quad 0x25202c3736722520,0x61090a3b32323172,0x09203233622e646e,0x7225202c33377225\n"
".quad 0x3b353532202c3237,0x6f6c2e6c756d090a,0x722509203233752e,0x33377225202c3437\n"
".quad 0x6461090a3b34202c,0x2509203233752e64,0x7225202c33323172,0x34377225202c3531\n"
".quad 0x752e747663090a3b,0x09203233752e3436,0x25202c3532647225,0x6d090a3b33323172\n"
".quad 0x2e656469772e6c75,0x6472250920323375,0x32317225202c3632,0x61090a3b34202c33\n"
".quad 0x09203436752e6464,0x25202c3031647225,0x647225202c316472,0x2e646c090a3b3632\n"
".quad 0x752e646572616873,0x3231722509203233,0x316472255b202c34,0x61090a3b5d302b30\n"
".quad 0x09203233752e6464,0x25202c3532317225,0x3b31202c34323172,0x6168732e7473090a\n"
".quad 0x203233752e646572,0x2b30316472255b09,0x32317225202c5d30,0x305f744c240a3b35\n"
".quad 0x0a3a32383836325f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c36333120,0x6c6562616c206461,0x305f744c24206465\n"
".quad 0x090a38313032325f,0x09373109636f6c2e,0x62090a3009383931,0x20636e79732e7261\n"
".quad 0x646e61090a3b3009,0x722509203233622e,0x367225202c363231,0x3b37357225202c38\n"
".quad 0x33752e766f6d090a,0x3732317225092032,0x6573090a3b30202c,0x33732e71652e7074\n"
".quad 0x2c30337025092032,0x202c363231722520,0x090a3b3732317225,0x7262203033702540\n"
".quad 0x305f744c24092061,0x0a3b34393337325f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c36333120,0x6c6562616c206461\n"
".quad 0x305f744c24206465,0x090a38313032325f,0x09373109636f6c2e,0x6c090a3009303032\n"
".quad 0x2e6d617261702e64,0x3172250920323373,0x635f5f5b202c3832,0x5f6d726170616475\n"
".quad 0x7869646152385a5f,0x654b3231506d7553,0x615065756c615679,0x68735f6a6a6a7269\n"
".quad 0x73090a3b5d746669,0x09203233752e7268,0x7225202c32377225,0x32317225202c3736\n"
".quad 0x2e646e61090a3b38,0x3772250920323362,0x2c32377225202c33,0x6d090a3b35353220\n"
".quad 0x33752e6f6c2e6c75,0x2c34377225092032,0x34202c3337722520,0x752e646461090a3b\n"
".quad 0x3231722509203233,0x2c35317225202c39,0x090a3b3437722520,0x2e3436752e747663\n"
".quad 0x6472250920323375,0x32317225202c3732,0x2e6c756d090a3b39,0x3233752e65646977\n"
".quad 0x2c38326472250920,0x202c393231722520,0x2e646461090a3b34,0x6472250920343675\n"
".quad 0x31647225202c3031,0x3b3832647225202c,0x6168732e646c090a,0x203233752e646572\n"
".quad 0x202c303331722509,0x302b30316472255b,0x2e646461090a3b5d,0x3172250920323375\n"
".quad 0x33317225202c3133,0x73090a3b31202c30,0x6465726168732e74,0x255b09203233752e\n"
".quad 0x2c5d302b30316472,0x0a3b313331722520,0x37325f305f744c24,0x2f2f200a3a343933\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x333120656e696c20\n"
".quad 0x2064616568202c36,0x2064656c6562616c,0x32325f305f744c24,0x6f6c2e090a383130\n"
".quad 0x3130320937310963,0x2e726162090a3009,0x3b300920636e7973,0x33622e646e61090a\n"
".quad 0x3233317225092032,0x202c38367225202c,0x6d090a3b38357225,0x09203233752e766f\n"
".quad 0x30202c3333317225,0x2e70746573090a3b,0x09203233732e7165,0x7225202c31337025\n"
".quad 0x317225202c323331,0x702540090a3b3333,0x0920617262203133,0x37325f305f744c24\n"
".quad 0x2f2f200a3b363039,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x333120656e696c20,0x2064616568202c36,0x2064656c6562616c,0x32325f305f744c24\n"
".quad 0x6f6c2e090a383130,0x3330320937310963,0x702e646c090a3009,0x3233732e6d617261\n"
".quad 0x2c34333172250920,0x616475635f5f5b20,0x385a5f5f6d726170,0x6d75537869646152\n"
".quad 0x615679654b323150,0x6a7269615065756c,0x74666968735f6a6a,0x2e726873090a3b5d\n"
".quad 0x3772250920323375,0x2c37367225202c32,0x0a3b343331722520,0x3233622e646e6109\n"
".quad 0x202c333772250920,0x3532202c32377225,0x2e6c756d090a3b35,0x09203233752e6f6c\n"
".quad 0x7225202c34377225,0x090a3b34202c3337,0x203233752e646461,0x202c353331722509\n"
".quad 0x7225202c35317225,0x747663090a3b3437,0x3233752e3436752e,0x2c39326472250920\n"
".quad 0x0a3b353331722520,0x6469772e6c756d09,0x2509203233752e65,0x7225202c30336472\n"
".quad 0x0a3b34202c353331,0x3436752e64646109,0x2c30316472250920,0x25202c3164722520\n"
".quad 0x6c090a3b30336472,0x6465726168732e64,0x722509203233752e,0x72255b202c363331\n"
".quad 0x0a3b5d302b303164,0x3233752e64646109,0x2c37333172250920,0x202c363331722520\n"
".quad 0x732e7473090a3b31,0x33752e6465726168,0x316472255b092032,0x7225202c5d302b30\n"
".quad 0x744c240a3b373331,0x36303937325f305f,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c36333120656e,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x38313032325f305f,0x3109636f6c2e090a,0x0a30093430320937\n"
".quad 0x6e79732e72616209,0x61090a3b30092063,0x09203233622e646e,0x25202c3833317225\n"
".quad 0x357225202c383672,0x2e766f6d090a3b39,0x3172250920323375,0x090a3b30202c3933\n"
".quad 0x2e71652e70746573,0x3370250920323373,0x3833317225202c32,0x3b3933317225202c\n"
".quad 0x203233702540090a,0x744c240920617262,0x38313438325f305f,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c36333120656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x38313032325f305f,0x3109636f6c2e090a\n"
".quad 0x0a30093630320937,0x617261702e646c09,0x2509203233732e6d,0x5f5b202c30343172\n"
".quad 0x726170616475635f,0x646152385a5f5f6d,0x3231506d75537869,0x65756c615679654b\n"
".quad 0x5f6a6a6a72696150,0x0a3b5d7466696873,0x3233752e72687309,0x202c323772250920\n"
".quad 0x7225202c37367225,0x6e61090a3b303431,0x2509203233622e64,0x377225202c333772\n"
".quad 0x0a3b353532202c32,0x2e6f6c2e6c756d09,0x3772250920323375,0x2c33377225202c34\n"
".quad 0x646461090a3b3420,0x722509203233752e,0x317225202c313431,0x3b34377225202c35\n"
".quad 0x36752e747663090a,0x2509203233752e34,0x7225202c31336472,0x756d090a3b313431\n"
".quad 0x752e656469772e6c,0x3364722509203233,0x3134317225202c32,0x6461090a3b34202c\n"
".quad 0x2509203436752e64,0x7225202c30316472,0x33647225202c3164,0x732e646c090a3b32\n"
".quad 0x33752e6465726168,0x3234317225092032,0x30316472255b202c,0x6461090a3b5d302b\n"
".quad 0x2509203233752e64,0x7225202c33343172,0x0a3b31202c323431,0x726168732e747309\n"
".quad 0x09203233752e6465,0x302b30316472255b,0x3334317225202c5d,0x5f305f744c240a3b\n"
".quad 0x200a3a3831343832,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c363331,0x656c6562616c2064,0x5f305f744c242064\n"
".quad 0x2e090a3831303232,0x3209373109636f6c,0x6162090a30093730,0x0920636e79732e72\n"
".quad 0x2e646e61090a3b30,0x3172250920323362,0x38367225202c3434,0x0a3b30367225202c\n"
".quad 0x3233752e766f6d09,0x2c35343172250920,0x746573090a3b3020,0x3233732e71652e70\n"
".quad 0x202c333370250920,0x25202c3434317225,0x40090a3b35343172,0x6172622033337025\n"
".quad 0x5f305f744c240920,0x200a3b3033393832,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c363331,0x656c6562616c2064\n"
".quad 0x5f305f744c242064,0x2e090a3831303232,0x3209373109636f6c,0x646c090a30093930\n"
".quad 0x732e6d617261702e,0x3431722509203233,0x75635f5f5b202c36,0x5f5f6d7261706164\n"
".quad 0x537869646152385a,0x79654b3231506d75,0x69615065756c6156,0x6968735f6a6a6a72\n"
".quad 0x6873090a3b5d7466,0x2509203233752e72,0x367225202c323772,0x3634317225202c37\n"
".quad 0x622e646e61090a3b,0x3337722509203233,0x202c32377225202c,0x756d090a3b353532\n"
".quad 0x3233752e6f6c2e6c,0x202c343772250920,0x3b34202c33377225,0x33752e646461090a\n"
".quad 0x3734317225092032,0x202c35317225202c,0x63090a3b34377225,0x752e3436752e7476\n"
".quad 0x3364722509203233,0x3734317225202c33,0x772e6c756d090a3b,0x203233752e656469\n"
".quad 0x202c343364722509,0x34202c3734317225,0x752e646461090a3b,0x3164722509203436\n"
".quad 0x2c31647225202c30,0x0a3b343364722520,0x726168732e646c09,0x09203233752e6465\n"
".quad 0x5b202c3834317225,0x5d302b3031647225,0x752e646461090a3b,0x3431722509203233\n"
".quad 0x3834317225202c39,0x7473090a3b31202c,0x2e6465726168732e,0x72255b0920323375\n"
".quad 0x202c5d302b303164,0x240a3b3934317225,0x3938325f305f744c,0x3c2f2f200a3a3033\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x36333120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3032325f305f744c,0x636f6c2e090a3831\n"
".quad 0x0930313209373109,0x732e726162090a30,0x0a3b300920636e79,0x3233622e646e6109\n"
".quad 0x2c30353172250920,0x25202c3836722520,0x6f6d090a3b313672,0x2509203233752e76\n"
".quad 0x3b30202c31353172,0x652e70746573090a,0x2509203233732e71,0x317225202c343370\n"
".quad 0x35317225202c3035,0x33702540090a3b31,0x2409206172622034,0x3439325f305f744c\n"
".quad 0x3c2f2f200a3b3234,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x36333120656e696c,0x6c2064616568202c,0x242064656c656261,0x3032325f305f744c\n"
".quad 0x636f6c2e090a3831,0x0932313209373109,0x61702e646c090a30,0x203233732e6d6172\n"
".quad 0x202c323531722509,0x70616475635f5f5b,0x52385a5f5f6d7261,0x506d755378696461\n"
".quad 0x6c615679654b3231,0x6a6a726961506575,0x5d74666968735f6a,0x752e726873090a3b\n"
".quad 0x3237722509203233,0x202c37367225202c,0x090a3b3235317225,0x203233622e646e61\n"
".quad 0x25202c3337722509,0x353532202c323772,0x6c2e6c756d090a3b,0x2509203233752e6f\n"
".quad 0x377225202c343772,0x61090a3b34202c33,0x09203233752e6464,0x25202c3335317225\n"
".quad 0x377225202c353172,0x2e747663090a3b34,0x203233752e343675,0x202c353364722509\n"
".quad 0x090a3b3335317225,0x656469772e6c756d,0x722509203233752e,0x317225202c363364\n"
".quad 0x090a3b34202c3335,0x203436752e646461,0x202c303164722509,0x7225202c31647225\n"
".quad 0x646c090a3b363364,0x2e6465726168732e,0x3172250920323375,0x6472255b202c3435\n"
".quad 0x090a3b5d302b3031,0x203233752e646461,0x202c353531722509,0x31202c3435317225\n"
".quad 0x68732e7473090a3b,0x3233752e64657261,0x30316472255b0920,0x317225202c5d302b\n"
".quad 0x5f744c240a3b3535,0x3a32343439325f30,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3633312065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a38313032325f30,0x373109636f6c2e09,0x090a300933313209\n"
".quad 0x636e79732e726162,0x6e61090a3b300920,0x2509203233622e64,0x7225202c36353172\n"
".quad 0x32367225202c3836,0x752e766f6d090a3b,0x3531722509203233,0x73090a3b30202c37\n"
".quad 0x732e71652e707465,0x3533702509203233,0x2c3635317225202c,0x0a3b373531722520\n"
".quad 0x6220353370254009,0x5f744c2409206172,0x3b34353939325f30,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3633312065\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x0a38313032325f30,0x373109636f6c2e09\n"
".quad 0x090a300935313209,0x6d617261702e646c,0x722509203233732e,0x5f5f5b202c383531\n"
".quad 0x6d72617061647563,0x69646152385a5f5f,0x4b3231506d755378,0x5065756c61567965\n"
".quad 0x735f6a6a6a726961,0x090a3b5d74666968,0x203233752e726873,0x25202c3237722509\n"
".quad 0x317225202c373672,0x646e61090a3b3835,0x722509203233622e,0x32377225202c3337\n"
".quad 0x090a3b353532202c,0x752e6f6c2e6c756d,0x3437722509203233,0x202c33377225202c\n"
".quad 0x2e646461090a3b34,0x3172250920323375,0x35317225202c3935,0x0a3b34377225202c\n"
".quad 0x3436752e74766309,0x722509203233752e,0x317225202c373364,0x6c756d090a3b3935\n"
".quad 0x33752e656469772e,0x3833647225092032,0x2c3935317225202c,0x646461090a3b3420\n"
".quad 0x722509203436752e,0x647225202c303164,0x3833647225202c31,0x68732e646c090a3b\n"
".quad 0x3233752e64657261,0x2c30363172250920,0x2b30316472255b20,0x646461090a3b5d30\n"
".quad 0x722509203233752e,0x317225202c313631,0x090a3b31202c3036,0x65726168732e7473\n"
".quad 0x5b09203233752e64,0x5d302b3031647225,0x3b3136317225202c,0x325f305f744c240a\n"
".quad 0x2f200a3a34353939,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3120656e696c2079,0x64616568202c3633,0x64656c6562616c20,0x325f305f744c2420\n"
".quad 0x6c2e090a38313032,0x313209373109636f,0x726162090a300936,0x300920636e79732e\n"
".quad 0x622e646e61090a3b,0x3631722509203233,0x2c38367225202c32,0x090a3b3336722520\n"
".quad 0x203233752e766f6d,0x202c333631722509,0x70746573090a3b30,0x203233732e71652e\n"
".quad 0x25202c3633702509,0x7225202c32363172,0x2540090a3b333631,0x2061726220363370\n"
".quad 0x335f305f744c2409,0x2f200a3b36363430,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3633,0x64656c6562616c20\n"
".quad 0x325f305f744c2420,0x6c2e090a38313032,0x313209373109636f,0x2e646c090a300938\n"
".quad 0x33732e6d61726170,0x3436317225092032,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x7553786964615238,0x5679654b3231506d,0x7269615065756c61,0x666968735f6a6a6a\n"
".quad 0x726873090a3b5d74,0x722509203233752e,0x37367225202c3237,0x3b3436317225202c\n"
".quad 0x33622e646e61090a,0x2c33377225092032,0x32202c3237722520,0x6c756d090a3b3535\n"
".quad 0x203233752e6f6c2e,0x25202c3437722509,0x0a3b34202c333772,0x3233752e64646109\n"
".quad 0x2c35363172250920,0x25202c3531722520,0x7663090a3b343772,0x33752e3436752e74\n"
".quad 0x3933647225092032,0x3b3536317225202c,0x69772e6c756d090a,0x09203233752e6564\n"
".quad 0x25202c3034647225,0x3b34202c35363172,0x36752e646461090a,0x3031647225092034\n"
".quad 0x202c31647225202c,0x090a3b3034647225,0x65726168732e646c,0x2509203233752e64\n"
".quad 0x255b202c36363172,0x3b5d302b30316472,0x33752e646461090a,0x3736317225092032\n"
".quad 0x2c3636317225202c,0x2e7473090a3b3120,0x752e646572616873,0x6472255b09203233\n"
".quad 0x25202c5d302b3031,0x4c240a3b37363172,0x363430335f305f74,0x6c3c2f2f200a3a36\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c36333120656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x313032325f305f74,0x09636f6c2e090a38\n"
".quad 0x3009393132093731,0x79732e726162090a,0x090a3b300920636e,0x203233752e646461\n"
".quad 0x7225202c32722509,0x090a3b3631202c32,0x2e74672e70746573,0x3370250920323375\n"
".quad 0x2c34327225202c37,0x40090a3b32722520,0x6172622037337025,0x5f305f744c240920\n"
".quad 0x240a3b3831303232,0x3531325f305f744c,0x6f6c2e090a3a3630,0x3833320937310963\n"
".quad 0x2e726873090a3009,0x3172250920323375,0x2c317225202c3836,0x766f6d090a3b3220\n"
".quad 0x722509203233752e,0x353532202c393631,0x2e70746573090a3b,0x09203233752e7467\n"
".quad 0x7225202c38337025,0x317225202c383631,0x702540090a3b3936,0x0920617262203833\n"
".quad 0x31335f305f744c24,0x6f6d090a3b343332,0x2509203233752e76,0x3732202c30373172\n"
".quad 0x2e627573090a3b31,0x3172250920323375,0x37317225202c3137,0x3836317225202c30\n"
".quad 0x732e726873090a3b,0x3731722509203233,0x3137317225202c32,0x6d090a3b3133202c\n"
".quad 0x09203233732e766f,0x31202c3337317225,0x2e646e61090a3b35,0x3172250920323362\n"
".quad 0x37317225202c3437,0x3337317225202c32,0x732e646461090a3b,0x3731722509203233\n"
".quad 0x3437317225202c35,0x3b3137317225202c,0x33732e726873090a,0x3637317225092032\n"
".quad 0x2c3537317225202c,0x646e61090a3b3420,0x722509203233622e,0x317225202c373731\n"
".quad 0x756d090a3b33202c,0x752e6f6c2e34326c,0x3731722509203233,0x3836317225202c38\n"
".quad 0x756d090a3b34202c,0x752e6f6c2e34326c,0x3731722509203233,0x3836317225202c39\n"
".quad 0x090a3b323931202c,0x203233752e646461,0x202c303831722509,0x25202c3737317225\n"
".quad 0x61090a3b38373172,0x09203233752e6464,0x25202c3138317225,0x317225202c363172\n"
".quad 0x646461090a3b3937,0x722509203233752e,0x317225202c323831,0x38317225202c3737\n"
".quad 0x2e766f6d090a3b31,0x6472250920343675,0x64615264202c3134,0x090a3b6d75537869\n"
".quad 0x203233732e766f6d,0x202c333831722509,0x240a3b3637317225,0x3731335f305f744c\n"
".quad 0x3c2f2f200a3a3634,0x6f4c203e706f6f6c,0x2079646f6220706f,0x38333220656e696c\n"
".quad 0x6e697473656e202c,0x3a68747065642067,0x69747365202c3120,0x746920646574616d\n"
".quad 0x736e6f6974617265,0x776f6e6b6e75203a,0x09636f6c2e090a6e,0x3009313432093731\n"
".quad 0x36752e747663090a,0x2509203233752e34,0x7225202c32346472,0x756d090a3b303831\n"
".quad 0x752e656469772e6c,0x3464722509203233,0x3038317225202c33,0x6461090a3b34202c\n"
".quad 0x2509203436752e64,0x7225202c34346472,0x34647225202c3164,0x732e646c090a3b33\n"
".quad 0x33752e6465726168,0x3438317225092032,0x34346472255b202c,0x7663090a3b5d302b\n"
".quad 0x33752e3436752e74,0x3534647225092032,0x3b3238317225202c,0x69772e6c756d090a\n"
".quad 0x09203233752e6564,0x25202c3634647225,0x3b34202c32383172,0x36752e646461090a\n"
".quad 0x3734647225092034,0x2c3134647225202c,0x0a3b363464722520,0x626f6c672e747309\n"
".quad 0x09203233752e6c61,0x302b37346472255b,0x3438317225202c5d,0x752e646461090a3b\n"
".quad 0x3831722509203233,0x3238317225202c32,0x0a3b32373033202c,0x3233752e64646109\n"
".quad 0x2c38373172250920,0x202c383731722520,0x646461090a3b3436,0x722509203233752e\n"
".quad 0x317225202c303831,0x0a3b3436202c3038,0x3233752e766f6d09,0x2c35383172250920\n"
".quad 0x090a3b3032303120,0x2e656c2e70746573,0x3370250920323375,0x3837317225202c39\n"
".quad 0x3b3538317225202c,0x203933702540090a,0x744c240920617262,0x36343731335f305f\n"
".quad 0x5f305f744c240a3b,0x090a3a3433323133,0x09373109636f6c2e,0x65090a3009343432\n"
".quad 0x444c240a3b746978,0x385a5f5f646e6557,0x6d75537869646152,0x615679654b323150\n"
".quad 0x6a7269615065756c,0x2f207d090a3a6a6a,0x646152385a5f202f,0x3231506d75537869\n"
".quad 0x65756c615679654b,0x0a6a6a6a72696150,0x6c61626f6c672e09,0x206e67696c612e20\n"
".quad 0x52642038622e2034,0x636f6c4278696461,0x5d34365b6d75536b,0x746e652e090a0a3b\n"
".quad 0x5234315a5f207972,0x6665725078696461,0x090a766d75537869,0x206765722e090a7b\n"
".quad 0x3c7225203233752e,0x722e090a3b3e3037,0x203436752e206765,0x3b3e30333c647225\n"
".quad 0x2e206765722e090a,0x3c70252064657270,0x6c2e090a3b3e3531,0x343209373109636f\n"
".quad 0x57444c240a300935,0x5a5f5f6e69676562,0x5078696461523431,0x6d75537869666572\n"
".quad 0x636f6c2e090a3a76,0x0939363209373109,0x752e747663090a30,0x09203631752e3233\n"
".quad 0x697425202c317225,0x6e61090a3b782e64,0x2509203233622e64,0x2c317225202c3272\n"
".quad 0x6873090a3b353120,0x2509203233752e72,0x2c317225202c3372,0x6c756d090a3b3420\n"
".quad 0x33752e6f6c2e3432,0x202c347225092032,0x3b3731202c337225,0x33752e646461090a\n"
".quad 0x202c357225092032,0x347225202c327225,0x752e766f6d090a3b,0x2c36722509203233\n"
".quad 0x3536313334312d20,0x6d090a3b35363735,0x33752e69682e6c75,0x202c377225092032\n"
".quad 0x367225202c317225,0x752e726873090a3b,0x2c38722509203233,0x3b37202c37722520\n"
".quad 0x33752e747663090a,0x2509203631752e32,0x61746325202c3972,0x6d090a3b782e6469\n"
".quad 0x2e6f6c2e34326c75,0x3172250920323375,0x202c397225202c30,0x766f6d090a3b3631\n"
".quad 0x722509203233752e,0x3334312d202c3131,0x3b35363735353631,0x69682e6c756d090a\n"
".quad 0x722509203233752e,0x2c317225202c3231,0x090a3b3131722520,0x203233752e726873\n"
".quad 0x25202c3331722509,0x0a3b37202c323172,0x2e6f6c2e6c756d09,0x3172250920323375\n"
".quad 0x2c33317225202c34,0x73090a3b32393120,0x09203233752e6275,0x7225202c35317225\n"
".quad 0x3b34317225202c31,0x33752e646461090a,0x2c36317225092032,0x7225202c38722520\n"
".quad 0x6c756d090a3b3031,0x203233752e6f6c2e,0x25202c3731722509,0x323931202c363172\n"
".quad 0x752e646461090a3b,0x3831722509203233,0x202c35317225202c,0x6d090a3b37317225\n"
".quad 0x09203233732e766f,0x7225202c39317225,0x6c756d090a3b3831,0x203233752e6f6c2e\n"
".quad 0x25202c3032722509,0x32373033202c3972,0x752e646461090a3b,0x3132722509203233\n"
".quad 0x202c30327225202c,0x73090a3b32373033,0x752e656c2e707465,0x2c31702509203233\n"
".quad 0x25202c3132722520,0x2540090a3b383172,0x0920617262203170,0x36375f315f744c24\n"
".quad 0x766f6d090a3b3238,0x722509203436752e,0x64615264202c3164,0x090a3b6d75537869\n"
".quad 0x203436752e766f6d,0x73202c3264722509,0x6d75537869646152,0x752e627573090a3b\n"
".quad 0x3232722509203233,0x202c31327225202c,0x61090a3b38317225,0x09203233752e6464\n"
".quad 0x7225202c33327225,0x3b313931202c3232,0x33732e766f6d090a,0x2c34327225092032\n"
".quad 0x3536313334312d20,0x6d090a3b35363735,0x09203233732e766f,0x3b30202c35327225\n"
".quad 0x6c2e70746573090a,0x2509203233732e74,0x33327225202c3270,0x0a3b35327225202c\n"
".quad 0x3233732e73626109,0x202c363272250920,0x6d090a3b33327225,0x33752e69682e6c75\n"
".quad 0x2c37327225092032,0x25202c3632722520,0x6873090a3b343272,0x2509203233732e72\n"
".quad 0x327225202c383272,0x40090a3b37202c37,0x2e62757320327025,0x3272250920323373\n"
".quad 0x2c35327225202c38,0x090a3b3832722520,0x203233732e766f6d,0x25202c3932722509\n"
".quad 0x7663090a3b383272,0x33752e3436752e74,0x2c33647225092032,0x6d090a3b35722520\n"
".quad 0x2e656469772e6c75,0x6472250920323375,0x202c357225202c34,0x2e646461090a3b34\n"
".quad 0x6472250920343675,0x2c34647225202c35,0x090a3b3264722520,0x2e3436752e747663\n"
".quad 0x6472250920323375,0x3b38317225202c36,0x69772e6c756d090a,0x09203233752e6564\n"
".quad 0x7225202c37647225,0x090a3b34202c3831,0x203436752e646461,0x25202c3864722509\n"
".quad 0x647225202c316472,0x2e766f6d090a3b37,0x3372250920323373,0x3b39327225202c30\n"
".quad 0x385f315f744c240a,0x2f2f200a3a343931,0x4c203e706f6f6c3c,0x79646f6220706f6f\n"
".quad 0x363220656e696c20,0x697473656e202c39,0x687470656420676e,0x747365202c31203a\n"
".quad 0x6920646574616d69,0x6e6f697461726574,0x6f6e6b6e75203a73,0x636f6c2e090a6e77\n"
".quad 0x0934373209373109,0x6c672e646c090a30,0x3233752e6c61626f,0x202c313372250920\n"
".quad 0x5d302b386472255b,0x68732e7473090a3b,0x3233752e64657261,0x2b356472255b0920\n"
".quad 0x31337225202c5d30,0x09636f6c2e090a3b,0x3009353732093731,0x36752e646461090a\n"
".quad 0x2c35647225092034,0x38202c3564722520,0x646461090a3b3631,0x722509203233752e\n"
".quad 0x39317225202c3931,0x090a3b323931202c,0x203436752e646461,0x25202c3864722509\n"
".quad 0x383637202c386472,0x2e70746573090a3b,0x09203233752e7467,0x327225202c337025\n"
".quad 0x3b39317225202c31,0x622033702540090a,0x5f744c2409206172,0x0a3b343931385f31\n"
".quad 0x36375f315f744c24,0x766f6d090a3a3238,0x722509203436752e,0x64615264202c3164\n"
".quad 0x090a3b6d75537869,0x203436752e766f6d,0x73202c3264722509,0x6d75537869646152\n"
".quad 0x09636f6c2e090a3b,0x3009393732093731,0x79732e726162090a,0x090a3b300920636e\n"
".quad 0x09373109636f6c2e,0x6d090a3009333832,0x2e6f6c2e34326c75,0x3372250920323375\n"
".quad 0x202c317225202c32,0x766f6d090a3b3731,0x722509203233732e,0x32337225202c3333\n"
".quad 0x752e646461090a3b,0x3433722509203233,0x202c32337225202c,0x746573090a3b3631\n"
".quad 0x3233752e74672e70,0x25202c3470250920,0x337225202c343372,0x70252140090a3b32\n"
".quad 0x2409206172622034,0x3037385f315f744c,0x2e747663090a3b36,0x203233732e343673\n"
".quad 0x25202c3964722509,0x756d090a3b323372,0x732e656469772e6c,0x3164722509203233\n"
".quad 0x2c32337225202c30,0x646461090a3b3420,0x722509203436752e,0x647225202c313164\n"
".quad 0x3031647225202c32,0x752e766f6d090a3b,0x3533722509203233,0x744c240a3b30202c\n"
".quad 0x3a383132395f315f,0x6f6f6c3c2f2f200a,0x20706f6f4c203e70,0x6e696c2079646f62\n"
".quad 0x6e202c3338322065,0x6420676e69747365,0x2c31203a68747065,0x6974617265746920\n"
".quad 0x0a3631203a736e6f,0x373109636f6c2e09,0x090a300938383209,0x65726168732e646c\n"
".quad 0x2509203233752e64,0x72255b202c363372,0x0a3b5d302b313164,0x3233752e64646109\n"
".quad 0x202c353372250920,0x7225202c36337225,0x6f6c2e090a3b3533,0x3938320937310963\n"
".quad 0x732e7473090a3009,0x33752e6465726168,0x316472255b092032,0x7225202c5d302b31\n"
".quad 0x6f6c2e090a3b3533,0x3039320937310963,0x2e646461090a3009,0x3372250920323373\n"
".quad 0x2c33337225202c33,0x646461090a3b3120,0x722509203436752e,0x647225202c313164\n"
".quad 0x090a3b34202c3131,0x2e656e2e70746573,0x3570250920323375,0x202c33337225202c\n"
".quad 0x40090a3b34337225,0x2061726220357025,0x395f315f744c2409,0x744c240a3b383132\n"
".quad 0x3a363037385f315f,0x3109636f6c2e090a,0x0a30093239320937,0x6e79732e72616209\n"
".quad 0x2e090a3b30092063,0x3309373109636f6c,0x7663090a30093530,0x33732e3436732e74\n"
".quad 0x3231647225092032,0x0a3b32337225202c,0x6469772e6c756d09,0x2509203233732e65\n"
".quad 0x7225202c33316472,0x090a3b34202c3233,0x203436752e646461,0x202c343164722509\n"
".quad 0x7225202c32647225,0x646c090a3b333164,0x2e6465726168732e,0x3372250920323375\n"
".quad 0x316472255b202c37,0x090a3b5d30362b34,0x65726168732e7473,0x5b09203233752e64\n"
".quad 0x34362b3431647225,0x3b37337225202c5d,0x3109636f6c2e090a,0x0a30093630330937\n"
".quad 0x6e79732e72616209,0x6d090a3b30092063,0x09203233732e766f,0x3731202c38337225\n"
".quad 0x5f315f744c240a3b,0x200a3a3234323031,0x3e706f6f6c3c2f2f,0x6f6220706f6f4c20\n"
".quad 0x20656e696c207964,0x73656e202c363033,0x70656420676e6974,0x65202c31203a6874\n"
".quad 0x646574616d697473,0x6974617265746920,0x6b6e75203a736e6f,0x7573090a6e776f6e\n"
".quad 0x2509203233732e62,0x337225202c393372,0x3b38337225202c32,0x33732e646461090a\n"
".quad 0x2c30347225092032,0x31202c3933722520,0x2e766f6d090a3b36,0x3472250920323375\n"
".quad 0x73090a3b30202c31,0x732e656c2e707465,0x2c36702509203233,0x25202c3034722520\n"
".quad 0x2540090a3b313472,0x0920617262203670,0x30315f315f744c24,0x2f2f200a3b343537\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x303320656e696c20\n"
".quad 0x2064616568202c36,0x2064656c6562616c,0x30315f315f744c24,0x6f6c2e090a323432\n"
".quad 0x3231330937310963,0x2e747663090a3009,0x203233732e343673,0x202c353164722509\n"
".quad 0x6d090a3b39337225,0x2e656469772e6c75,0x6472250920323373,0x39337225202c3631\n"
".quad 0x6461090a3b34202c,0x2509203436752e64,0x7225202c37316472,0x31647225202c3264\n"
".quad 0x732e646c090a3b36,0x33752e6465726168,0x2c32347225092032,0x2b37316472255b20\n"
".quad 0x7262090a3b5d3436,0x240920696e752e61,0x3430315f315f744c,0x5f744c240a3b3839\n"
".quad 0x3a34353730315f31,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3630332065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a32343230315f31,0x3233752e766f6d09,0x202c323472250920,0x315f744c240a3b30\n"
".quad 0x0a3a38393430315f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c36303320,0x6c6562616c206461,0x315f744c24206465\n"
".quad 0x090a32343230315f,0x09373109636f6c2e,0x62090a3009333133,0x20636e79732e7261\n"
".quad 0x6f6c2e090a3b3009,0x3431330937310963,0x732e646c090a3009,0x33752e6465726168\n"
".quad 0x2c33347225092032,0x2b34316472255b20,0x6461090a3b5d3436,0x2509203233752e64\n"
".quad 0x347225202c343472,0x3b32347225202c33,0x6168732e7473090a,0x203233752e646572\n"
".quad 0x2b34316472255b09,0x347225202c5d3436,0x636f6c2e090a3b34,0x0935313309373109\n"
".quad 0x732e726162090a30,0x0a3b300920636e79,0x373109636f6c2e09,0x090a300936313309\n"
".quad 0x732e6f6c2e6c756d,0x3833722509203233,0x202c38337225202c,0x2e766f6d090a3b32\n"
".quad 0x3472250920323375,0x3b33363233202c35,0x6c2e70746573090a,0x2509203233732e65\n"
".quad 0x38337225202c3770,0x0a3b35347225202c,0x7262203770254009,0x315f744c24092061\n"
".quad 0x0a3b32343230315f,0x373109636f6c2e09,0x090a300935323309,0x203233732e766f6d\n"
".quad 0x25202c3333722509,0x7573090a3b323372,0x2509203233732e62,0x337225202c363472\n"
".quad 0x6d090a3b31202c32,0x09203233752e766f,0x3b30202c37347225,0x6c2e70746573090a\n"
".quad 0x2509203233732e65,0x36347225202c3870,0x0a3b37347225202c,0x7262203870254009\n"
".quad 0x315f744c24092061,0x0a3b32323531315f,0x373109636f6c2e09,0x090a300938323309\n"
".quad 0x65726168732e646c,0x2509203233752e64,0x72255b202c383472,0x3b5d342d2b343164\n"
".quad 0x6e752e617262090a,0x315f744c24092069,0x0a3b36363231315f,0x31315f315f744c24\n"
".quad 0x6f6d090a3a323235,0x2509203233752e76,0x0a3b30202c383472,0x31315f315f744c24\n"
".quad 0x2140090a3a363632,0x2061726220347025,0x315f315f744c2409,0x6d090a3b38373731\n"
".quad 0x09203436732e766f,0x25202c3131647225,0x4c240a3b34316472,0x393232315f315f74\n"
".quad 0x6c3c2f2f200a3a30,0x6f6f4c203e706f6f,0x6c2079646f622070,0x2c38323320656e69\n"
".quad 0x676e697473656e20,0x203a687470656420,0x6172657469202c31,0x31203a736e6f6974\n"
".quad 0x09636f6c2e090a36,0x3009313333093731,0x6168732e646c090a,0x203233752e646572\n"
".quad 0x5b202c3934722509,0x5d302b3131647225,0x752e646461090a3b,0x3035722509203233\n"
".quad 0x202c39347225202c,0x73090a3b38347225,0x6465726168732e74,0x255b09203233752e\n"
".quad 0x2c5d302b31316472,0x090a3b3035722520,0x09373109636f6c2e,0x61090a3009323333\n"
".quad 0x09203233732e6464,0x7225202c33337225,0x090a3b31202c3333,0x203436752e646461\n"
".quad 0x202c313164722509,0x34202c3131647225,0x2e70746573090a3b,0x09203233752e656e\n"
".quad 0x337225202c397025,0x3b34337225202c33,0x622039702540090a,0x5f744c2409206172\n"
".quad 0x3b30393232315f31,0x315f315f744c240a,0x2e090a3a38373731,0x3309373109636f6c\n"
".quad 0x6162090a30093433,0x0920636e79732e72,0x636f6c2e090a3b30,0x0935343309373109\n"
".quad 0x752e646461090a30,0x3135722509203233,0x202c38317225202c,0x2e766f6d090a3b31\n"
".quad 0x3172250920323373,0x3b31357225202c39,0x6f6c2e6c756d090a,0x722509203233752e\n"
".quad 0x2c397225202c3235,0x61090a3b36353220,0x09203233752e6464,0x7225202c33357225\n"
".quad 0x3b363532202c3235,0x33752e726873090a,0x2c34357225092032,0x34202c3335722520\n"
".quad 0x6c2e6c756d090a3b,0x2509203233752e6f,0x357225202c353572,0x0a3b323931202c34\n"
".quad 0x656c2e7074657309,0x702509203233752e,0x35357225202c3031,0x0a3b31357225202c\n"
".quad 0x6220303170254009,0x5f744c2409206172,0x3b32303832315f31,0x33752e627573090a\n"
".quad 0x2c36357225092032,0x25202c3535722520,0x6461090a3b313572,0x2509203233752e64\n"
".quad 0x357225202c373572,0x0a3b313931202c36,0x3233732e766f6d09,0x202c383572250920\n"
".quad 0x353536313334312d,0x6f6d090a3b353637,0x2509203233732e76,0x0a3b30202c393572\n"
".quad 0x746c2e7074657309,0x702509203233732e,0x37357225202c3131,0x0a3b39357225202c\n"
".quad 0x3233732e73626109,0x202c303672250920,0x6d090a3b37357225,0x33752e69682e6c75\n"
".quad 0x2c31367225092032,0x25202c3036722520,0x6873090a3b383572,0x2509203233732e72\n"
".quad 0x367225202c323672,0x40090a3b37202c31,0x6275732031317025,0x722509203233732e\n"
".quad 0x39357225202c3236,0x0a3b32367225202c,0x3233732e766f6d09,0x202c333672250920\n"
".quad 0x63090a3b32367225,0x752e3436752e7476,0x3164722509203233,0x0a3b357225202c38\n"
".quad 0x6469772e6c756d09,0x2509203233752e65,0x7225202c39316472,0x61090a3b34202c35\n"
".quad 0x09203436752e6464,0x7225202c35647225,0x647225202c393164,0x2e747663090a3b32\n"
".quad 0x203233752e343675,0x202c303264722509,0x6d090a3b31357225,0x2e656469772e6c75\n"
".quad 0x6472250920323375,0x31357225202c3132,0x6461090a3b34202c,0x2509203436752e64\n"
".quad 0x647225202c386472,0x3132647225202c31,0x732e766f6d090a3b,0x3436722509203233\n"
".quad 0x0a3b33367225202c,0x33315f315f744c24,0x2f2f200a3a343133,0x4c203e706f6f6c3c\n"
".quad 0x79646f6220706f6f,0x343320656e696c20,0x697473656e202c35,0x687470656420676e\n"
".quad 0x747365202c31203a,0x6920646574616d69,0x6e6f697461726574,0x6f6e6b6e75203a73\n"
".quad 0x636f6c2e090a6e77,0x0938343309373109,0x68732e646c090a30,0x3233752e64657261\n"
".quad 0x202c353672250920,0x5d302b356472255b,0x6c672e7473090a3b,0x3233752e6c61626f\n"
".quad 0x2b386472255b0920,0x35367225202c5d30,0x09636f6c2e090a3b,0x3009303533093731\n"
".quad 0x36752e646461090a,0x2c35647225092034,0x38202c3564722520,0x646461090a3b3631\n"
".quad 0x722509203233752e,0x39317225202c3931,0x090a3b323931202c,0x203436752e646461\n"
".quad 0x25202c3864722509,0x383637202c386472,0x2e70746573090a3b,0x09203233752e7467\n"
".quad 0x7225202c32317025,0x39317225202c3535,0x3231702540090a3b,0x4c24092061726220\n"
".quad 0x313333315f315f74,0x315f744c240a3b34,0x0a3a32303832315f,0x3233752e766f6d09\n"
".quad 0x202c363672250920,0x70746573090a3b30,0x203233752e656e2e,0x25202c3331702509\n"
".quad 0x36367225202c3172,0x3331702540090a3b,0x4c24092061726220,0x323833315f315f74\n"
".quad 0x636f6c2e090a3b36,0x0937353309373109,0x68732e646c090a30,0x3233752e64657261\n"
".quad 0x202c373672250920,0x537869646152735b,0x32353033312b6d75,0x2e766f6d090a3b5d\n"
".quad 0x6472250920343675,0x64615264202c3232,0x536b636f6c427869,0x747663090a3b6d75\n"
".quad 0x3233752e3436752e,0x2c33326472250920,0x6d090a3b39722520,0x2e656469772e6c75\n"
".quad 0x6472250920323375,0x2c397225202c3432,0x646461090a3b3420,0x722509203436752e\n"
".quad 0x647225202c353264,0x32647225202c3232,0x672e7473090a3b34,0x33752e6c61626f6c\n"
".quad 0x326472255b092032,0x7225202c5d302b35,0x6f6c2e090a3b3736,0x3835330937310963\n"
".quad 0x2e766f6d090a3009,0x3672250920323375,0x63090a3b30202c38,0x752e3436752e7476\n"
".quad 0x3264722509203233,0x3b30327225202c36,0x69772e6c756d090a,0x09203233752e6564\n"
".quad 0x25202c3732647225,0x0a3b34202c303272,0x3436752e64646109,0x2c38326472250920\n"
".quad 0x25202c3164722520,0x73090a3b37326472,0x6c61626f6c672e74,0x255b09203233752e\n"
".quad 0x2c5d302b38326472,0x240a3b3836722520,0x3833315f315f744c,0x6f6c2e090a3a3632\n"
".quad 0x3036330937310963,0x74697865090a3009,0x6e6557444c240a3b,0x615234315a5f5f64\n"
".quad 0x6966657250786964,0x090a3a766d755378,0x315a5f202f2f207d,0x7250786964615234\n"
".quad 0x766d755378696665,0x72746e652e090a0a,0x615235325a5f2079,0x664f646441786964\n"
".quad 0x646e417374657366,0x50656c6666756853,0x6c615679654b3231,0x3053726961506575\n"
".quad 0x090a2820696a6a5f,0x206d617261702e09,0x635f5f203436752e,0x5f6d726170616475\n"
".quad 0x6964615235325a5f,0x7366664f64644178,0x6853646e41737465,0x323150656c666675\n"
".quad 0x65756c615679654b,0x6a5f305372696150,0x2c637253705f696a,0x617261702e09090a\n"
".quad 0x5f203436752e206d,0x726170616475635f,0x615235325a5f5f6d,0x664f646441786964\n"
".quad 0x646e417374657366,0x50656c6666756853,0x6c615679654b3231,0x3053726961506575\n"
".quad 0x7344705f696a6a5f,0x61702e09090a2c74,0x3233752e206d6172,0x70616475635f5f20\n"
".quad 0x35325a5f5f6d7261,0x6464417869646152,0x417374657366664f,0x6c6666756853646e\n"
".quad 0x5679654b32315065,0x7269615065756c61,0x655f696a6a5f3053,0x2c73746e656d656c\n"
".quad 0x617261702e09090a,0x5f203233752e206d,0x726170616475635f,0x615235325a5f5f6d\n"
".quad 0x664f646441786964,0x646e417374657366,0x50656c6666756853,0x6c615679654b3231\n"
".quad 0x3053726961506575,0x656c655f696a6a5f,0x6f725f73746e656d,0x6f745f6465646e75\n"
".quad 0x090a2c323730335f,0x206d617261702e09,0x635f5f203233732e,0x5f6d726170616475\n"
".quad 0x6964615235325a5f,0x7366664f64644178,0x6853646e41737465,0x323150656c666675\n"
".quad 0x65756c615679654b,0x6a5f305372696150,0x74666968735f696a,0x722e090a7b090a29\n"
".quad 0x203233752e206765,0x3b3e3833323c7225,0x2e206765722e090a,0x3c64722520343675\n"
".quad 0x2e090a3b3e383031,0x6572702e20676572,0x3e35343c70252064,0x09636f6c2e090a3b\n"
".quad 0x3009343733093731,0x67656257444c240a,0x5235325a5f5f6e69,0x4f64644178696461\n"
".quad 0x6e41737465736666,0x656c666675685364,0x615679654b323150,0x537269615065756c\n"
".quad 0x090a3a696a6a5f30,0x2e3233752e747663,0x3172250920363175,0x782e64697425202c\n"
".quad 0x752e766f6d090a3b,0x2c32722509203233,0x746573090a3b3020,0x3233752e656e2e70\n"
".quad 0x25202c3170250920,0x3b327225202c3172,0x622031702540090a,0x5f744c2409206172\n"
".quad 0x3b30313833325f32,0x3109636f6c2e090a,0x0a30093837330937,0x3233752e766f6d09\n"
".quad 0x30202c3372250920,0x68732e7473090a3b,0x3233752e64657261,0x69646152735b0920\n"
".quad 0x3930342b6d755378,0x3b337225202c5d36,0x325f325f744c240a,0x6d090a3a30313833\n"
".quad 0x09203233752e766f,0x3b3431202c347225,0x672e70746573090a,0x2509203233752e74\n"
".quad 0x2c317225202c3270,0x40090a3b34722520,0x2061726220327025,0x325f325f744c2409\n"
".quad 0x2e090a3b32323334,0x3309373109636f6c,0x6f6d090a30093138,0x2509203436752e76\n"
".quad 0x615273202c316472,0x0a3b6d7553786964,0x3436752e74766309,0x722509203233752e\n"
".quad 0x3b317225202c3264,0x69772e6c756d090a,0x09203233752e6564,0x7225202c33647225\n"
".quad 0x6d090a3b34202c31,0x09203436752e766f,0x5264202c34647225,0x636f6c4278696461\n"
".quad 0x61090a3b6d75536b,0x09203436752e6464,0x7225202c35647225,0x34647225202c3364\n"
".quad 0x6c672e646c090a3b,0x3233752e6c61626f,0x5b202c3572250920,0x3b5d302b35647225\n"
".quad 0x36752e646461090a,0x2c36647225092034,0x25202c3364722520,0x7473090a3b316472\n"
".quad 0x2e6465726168732e,0x72255b0920323375,0x5d303031342b3664,0x240a3b357225202c\n"
".quad 0x3334325f325f744c,0x766f6d090a3a3232,0x722509203436752e,0x64615273202c3164\n"
".quad 0x090a3b6d75537869,0x09373109636f6c2e,0x62090a3009323833,0x20636e79732e7261\n"
".quad 0x766f6d090a3b3009,0x722509203233732e,0x090a3b3531202c36,0x2e656c2e70746573\n"
".quad 0x3370250920323373,0x25202c317225202c,0x6c6573090a3b3672,0x2509203233732e70\n"
".quad 0x30202c31202c3772,0x090a3b337025202c,0x203233732e766f6d,0x3b31202c38722509\n"
".quad 0x325f325f744c240a,0x2f200a3a36343335,0x203e706f6f6c3c2f,0x646f6220706f6f4c\n"
".quad 0x3320656e696c2079,0x7473656e202c3238,0x7470656420676e69,0x7365202c31203a68\n"
".quad 0x20646574616d6974,0x6f69746172657469,0x6e6b6e75203a736e,0x627573090a6e776f\n"
".quad 0x722509203233732e,0x202c317225202c39,0x6f6d090a3b387225,0x2509203233732e76\n"
".quad 0x0a3b30202c303172,0x2e65672e74657309,0x203233732e323375,0x25202c3131722509\n"
".quad 0x30317225202c3972,0x732e67656e090a3b,0x3231722509203233,0x0a3b31317225202c\n"
".quad 0x3233622e646e6109,0x202c333172250920,0x7225202c32317225,0x2e766f6d090a3b37\n"
".quad 0x3172250920323375,0x73090a3b30202c34,0x732e71652e707465,0x2c34702509203233\n"
".quad 0x25202c3331722520,0x2540090a3b343172,0x0920617262203470,0x35325f325f744c24\n"
".quad 0x2f2f200a3b383538,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x383320656e696c20,0x2064616568202c32,0x2064656c6562616c,0x35325f325f744c24\n"
".quad 0x6f6c2e090a363433,0x3039330937310963,0x2e747663090a3009,0x203233732e343673\n"
".quad 0x25202c3764722509,0x6c756d090a3b3972,0x33732e656469772e,0x2c38647225092032\n"
".quad 0x3b34202c39722520,0x36752e646461090a,0x2c39647225092034,0x25202c3164722520\n"
".quad 0x646c090a3b386472,0x2e6465726168732e,0x3172250920323375,0x396472255b202c35\n"
".quad 0x0a3b5d363930342b,0x696e752e61726209,0x5f325f744c240920,0x240a3b3230363532\n"
".quad 0x3835325f325f744c,0x3c2f2f200a3a3835,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x32383320656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3335325f325f744c,0x2e766f6d090a3634,0x3172250920323375,0x4c240a3b30202c35\n"
".quad 0x303635325f325f74,0x6c3c2f2f200a3a32,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c32383320656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x343335325f325f74,0x09636f6c2e090a36,0x3009313933093731,0x79732e726162090a\n"
".quad 0x090a3b300920636e,0x7262203370252140,0x325f744c24092061,0x0a3b34313136325f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c32383320,0x6c6562616c206461,0x325f744c24206465,0x090a36343335325f\n"
".quad 0x09373109636f6c2e,0x63090a3009333933,0x732e3436732e7476,0x3164722509203233\n"
".quad 0x0a3b317225202c30,0x6469772e6c756d09,0x2509203233732e65,0x7225202c31316472\n"
".quad 0x61090a3b34202c31,0x09203436752e6464,0x25202c3231647225,0x647225202c316472\n"
".quad 0x2e646c090a3b3131,0x752e646572616873,0x3631722509203233,0x32316472255b202c\n"
".quad 0x0a3b5d363930342b,0x3233752e64646109,0x202c373172250920,0x7225202c36317225\n"
".quad 0x2e7473090a3b3531,0x752e646572616873,0x6472255b09203233,0x5d363930342b3231\n"
".quad 0x0a3b37317225202c,0x36325f325f744c24,0x2f2f200a3a343131,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x383320656e696c20,0x2064616568202c32\n"
".quad 0x2064656c6562616c,0x35325f325f744c24,0x6f6c2e090a363433,0x3439330937310963\n"
".quad 0x2e726162090a3009,0x3b300920636e7973,0x3109636f6c2e090a,0x0a30093539330937\n"
".quad 0x2e6f6c2e6c756d09,0x3872250920323373,0x32202c387225202c,0x752e766f6d090a3b\n"
".quad 0x3831722509203233,0x73090a3b3531202c,0x732e656c2e707465,0x2c35702509203233\n"
".quad 0x7225202c38722520,0x702540090a3b3831,0x2409206172622035,0x3335325f325f744c\n"
".quad 0x6f6c2e090a3b3634,0x3930340937310963,0x2e646e61090a3009,0x3172250920323362\n"
".quad 0x202c317225202c39,0x2e726873090a3b33,0x3272250920323375,0x202c317225202c30\n"
".quad 0x2e747663090a3b32,0x203631752e323375,0x25202c3132722509,0x3b782e6469617463\n"
".quad 0x2e34326c756d090a,0x09203233752e6f6c,0x7225202c32327225,0x0a3b3834202c3032\n"
".quad 0x3233752e64646109,0x202c333272250920,0x7225202c31327225,0x6c756d090a3b3232\n"
".quad 0x203233752e6f6c2e,0x25202c3432722509,0x0a3b34202c333272,0x3233752e64646109\n"
".quad 0x202c353272250920,0x7225202c39317225,0x6c756d090a3b3432,0x33732e6f6c2e3432\n"
".quad 0x2c36327225092032,0x34202c3032722520,0x732e646461090a3b,0x3732722509203233\n"
".quad 0x202c36327225202c,0x6d090a3b39317225,0x09203233732e766f,0x7225202c38327225\n"
".quad 0x766f6d090a3b3732,0x722509203233752e,0x33323031202c3932,0x2e70746573090a3b\n"
".quad 0x09203233732e7467,0x327225202c367025,0x3b39327225202c37,0x622036702540090a\n"
".quad 0x5f744c2409206172,0x3b32383836325f32,0x33732e766f6d090a,0x2c30337225092032\n"
".quad 0x090a3b3738303120,0x203233732e627573,0x25202c3133722509,0x327225202c303372\n"
".quad 0x2e726873090a3b37,0x3372250920323373,0x2c31337225202c32,0x6f6d090a3b313320\n"
".quad 0x2509203233732e76,0x3b3336202c333372,0x33622e646e61090a,0x2c34337225092032\n"
".quad 0x25202c3233722520,0x6461090a3b333372,0x2509203233732e64,0x337225202c353372\n"
".quad 0x3b31337225202c34,0x33732e726873090a,0x2c36337225092032,0x36202c3533722520\n"
".quad 0x752e766f6d090a3b,0x3164722509203436,0x6964615264202c33,0x63090a3b6d755378\n"
".quad 0x732e3436732e7476,0x3164722509203233,0x3b35327225202c34,0x69772e6c756d090a\n"
".quad 0x09203233732e6564,0x25202c3531647225,0x0a3b34202c353272,0x3436752e64646109\n"
".quad 0x2c36316472250920,0x202c333164722520,0x090a3b3531647225,0x2e3436732e747663\n"
".quad 0x6472250920323373,0x37327225202c3731,0x772e6c756d090a3b,0x203233732e656469\n"
".quad 0x202c383164722509,0x3b34202c37327225,0x36752e646461090a,0x3931647225092034\n"
".quad 0x202c31647225202c,0x090a3b3831647225,0x203233732e766f6d,0x25202c3733722509\n"
".quad 0x744c240a3b363372,0x34393337325f325f,0x6f6c3c2f2f200a3a,0x706f6f4c203e706f\n"
".quad 0x696c2079646f6220,0x202c39303420656e,0x20676e697473656e,0x31203a6874706564\n"
".quad 0x616d69747365202c,0x7265746920646574,0x203a736e6f697461,0x0a6e776f6e6b6e75\n"
".quad 0x373109636f6c2e09,0x090a300932313409,0x61626f6c672e646c,0x2509203233752e6c\n"
".quad 0x72255b202c383372,0x0a3b5d302b363164,0x3233732e766f6d09,0x202c393372250920\n"
".quad 0x353536313334312d,0x6f6d090a3b353637,0x2509203233732e76,0x0a3b30202c303472\n"
".quad 0x746c2e7074657309,0x702509203233732e,0x2c35327225202c37,0x090a3b3034722520\n"
".quad 0x203233732e736261,0x25202c3134722509,0x756d090a3b353272,0x3233752e69682e6c\n"
".quad 0x202c323472250920,0x7225202c31347225,0x726873090a3b3933,0x722509203233732e\n"
".quad 0x32347225202c3334,0x40090a3b3131202c,0x2e62757320377025,0x3472250920323373\n"
".quad 0x2c30347225202c33,0x090a3b3334722520,0x203233732e766f6d,0x25202c3434722509\n"
".quad 0x7663090a3b333472,0x33732e3436732e74,0x3032647225092032,0x0a3b34347225202c\n"
".quad 0x6469772e6c756d09,0x2509203233732e65,0x7225202c31326472,0x090a3b34202c3434\n"
".quad 0x203436752e646461,0x202c323264722509,0x7225202c31647225,0x646c090a3b313264\n"
".quad 0x2e6465726168732e,0x3472250920323375,0x326472255b202c35,0x3b5d363930342b32\n"
".quad 0x33752e646461090a,0x2c36347225092032,0x25202c3833722520,0x7473090a3b353472\n"
".quad 0x2e6465726168732e,0x72255b0920323375,0x202c5d302b393164,0x2e090a3b36347225\n"
".quad 0x3409373109636f6c,0x6461090a30093431,0x2509203233732e64,0x327225202c353272\n"
".quad 0x3b32373033202c35,0x36752e646461090a,0x3631647225092034,0x2c3631647225202c\n"
".quad 0x0a3b383832323120,0x3233732e64646109,0x202c383272250920,0x3436202c38327225\n"
".quad 0x752e646461090a3b,0x3164722509203436,0x3931647225202c39,0x090a3b363532202c\n"
".quad 0x203233752e766f6d,0x31202c3734722509,0x6573090a3b333230,0x33732e656c2e7074\n"
".quad 0x202c387025092032,0x7225202c38327225,0x702540090a3b3734,0x2409206172622038\n"
".quad 0x3337325f325f744c,0x5f744c240a3b3439,0x3a32383836325f32,0x3109636f6c2e090a\n"
".quad 0x0a30093631340937,0x6e79732e72616209,0x2e090a3b30092063,0x3409373109636f6c\n"
".quad 0x6162090a30093133,0x0920636e79732e72,0x2e646e61090a3b30,0x3472250920323362\n"
".quad 0x202c317225202c38,0x726873090a3b3531,0x722509203233752e,0x2c317225202c3934\n"
".quad 0x6c756d090a3b3420,0x33752e6f6c2e3432,0x2c30357225092032,0x34202c3132722520\n"
".quad 0x61702e646c090a3b,0x203233752e6d6172,0x5b202c3135722509,0x6170616475635f5f\n"
".quad 0x5235325a5f5f6d72,0x4f64644178696461,0x6e41737465736666,0x656c666675685364\n"
".quad 0x615679654b323150,0x537269615065756c,0x6c655f696a6a5f30,0x725f73746e656d65\n"
".quad 0x745f6465646e756f,0x3b5d323730335f6f,0x33752e766f6d090a,0x2c32357225092032\n"
".quad 0x3536313334312d20,0x6d090a3b35363735,0x33752e69682e6c75,0x2c33357225092032\n"
".quad 0x25202c3135722520,0x6873090a3b323572,0x2509203233752e72,0x357225202c343572\n"
".quad 0x61090a3b37202c33,0x09203233752e6464,0x7225202c35357225,0x30357225202c3934\n"
".quad 0x6c2e6c756d090a3b,0x2509203233752e6f,0x357225202c363572,0x3b35357225202c34\n"
".quad 0x33732e646461090a,0x2c37357225092032,0x25202c3834722520,0x6f6d090a3b363572\n"
".quad 0x2509203233732e76,0x357225202c383572,0x2e646461090a3b37,0x3572250920323375\n"
".quad 0x2c34357225202c39,0x090a3b3635722520,0x2e65672e70746573,0x3970250920323375\n"
".quad 0x202c37357225202c,0x40090a3b39357225,0x2061726220397025,0x325f325f744c2409\n"
".quad 0x73090a3b36303937,0x09203233752e6275,0x7225202c30367225,0x38347225202c3435\n"
".quad 0x752e646461090a3b,0x3136722509203233,0x202c30367225202c,0x726873090a3b3531\n"
".quad 0x722509203233732e,0x31367225202c3236,0x6d090a3b3133202c,0x09203233732e766f\n"
".quad 0x3531202c33367225,0x622e646e61090a3b,0x3436722509203233,0x202c32367225202c\n"
".quad 0x61090a3b33367225,0x09203233732e6464,0x7225202c35367225,0x31367225202c3436\n"
".quad 0x732e726873090a3b,0x3636722509203233,0x202c35367225202c,0x2e766f6d090a3b34\n"
".quad 0x3672250920323373,0x73090a3b30202c37,0x732e71652e707465,0x3031702509203233\n"
".quad 0x202c38347225202c,0x6d090a3b37367225,0x09203233732e766f,0x3b31202c38367225\n"
".quad 0x652e70746573090a,0x2509203233732e71,0x347225202c313170,0x3b38367225202c38\n"
".quad 0x33732e766f6d090a,0x2c39367225092032,0x746573090a3b3220,0x3233732e71652e70\n"
".quad 0x202c323170250920,0x7225202c38347225,0x766f6d090a3b3936,0x722509203233732e\n"
".quad 0x090a3b33202c3037,0x2e71652e70746573,0x3170250920323373,0x2c38347225202c33\n"
".quad 0x090a3b3037722520,0x203233732e766f6d,0x34202c3137722509,0x2e70746573090a3b\n"
".quad 0x09203233732e7165,0x7225202c34317025,0x31377225202c3834,0x732e766f6d090a3b\n"
".quad 0x3237722509203233,0x6573090a3b35202c,0x33732e71652e7074,0x2c35317025092032\n"
".quad 0x25202c3834722520,0x6f6d090a3b323772,0x2509203233732e76,0x0a3b36202c333772\n"
".quad 0x71652e7074657309,0x702509203233732e,0x38347225202c3631,0x0a3b33377225202c\n"
".quad 0x3233732e766f6d09,0x202c343772250920,0x70746573090a3b37,0x203233732e71652e\n"
".quad 0x25202c3731702509,0x377225202c383472,0x2e766f6d090a3b34,0x3772250920323373\n"
".quad 0x73090a3b38202c35,0x732e71652e707465,0x3831702509203233,0x202c38347225202c\n"
".quad 0x6d090a3b35377225,0x09203233732e766f,0x3b39202c36377225,0x652e70746573090a\n"
".quad 0x2509203233732e71,0x347225202c393170,0x3b36377225202c38,0x33732e766f6d090a\n"
".quad 0x2c37377225092032,0x6573090a3b303120,0x33732e71652e7074,0x2c30327025092032\n"
".quad 0x25202c3834722520,0x6f6d090a3b373772,0x2509203233732e76,0x3b3131202c383772\n"
".quad 0x652e70746573090a,0x2509203233732e71,0x347225202c313270,0x3b38377225202c38\n"
".quad 0x33732e766f6d090a,0x2c39377225092032,0x6573090a3b323120,0x33732e71652e7074\n"
".quad 0x2c32327025092032,0x25202c3834722520,0x6f6d090a3b393772,0x2509203233732e76\n"
".quad 0x3b3331202c303872,0x652e70746573090a,0x2509203233732e71,0x347225202c333270\n"
".quad 0x3b30387225202c38,0x33732e766f6d090a,0x2c31387225092032,0x6573090a3b343120\n"
".quad 0x33732e71652e7074,0x2c34327025092032,0x25202c3834722520,0x6f6d090a3b313872\n"
".quad 0x2509203233732e76,0x3b3531202c323872,0x652e70746573090a,0x2509203233732e71\n"
".quad 0x347225202c353270,0x3b32387225202c38,0x732e706c6573090a,0x3338722509203233\n"
".quad 0x202c30202c31202c,0x73090a3b30317025,0x203233732e706c65,0x31202c3438722509\n"
".quad 0x317025202c30202c,0x706c6573090a3b31,0x722509203233732e,0x30202c31202c3538\n"
".quad 0x0a3b32317025202c,0x33732e706c657309,0x2c36387225092032,0x25202c30202c3120\n"
".quad 0x6573090a3b333170,0x09203233732e706c,0x2c31202c37387225,0x34317025202c3020\n"
".quad 0x2e706c6573090a3b,0x3872250920323373,0x2c30202c31202c38,0x090a3b3531702520\n"
".quad 0x3233732e706c6573,0x202c393872250920,0x7025202c30202c31,0x6c6573090a3b3631\n"
".quad 0x2509203233732e70,0x202c31202c303972,0x3b37317025202c30,0x732e706c6573090a\n"
".quad 0x3139722509203233,0x202c30202c31202c,0x73090a3b38317025,0x203233732e706c65\n"
".quad 0x31202c3239722509,0x317025202c30202c,0x706c6573090a3b39,0x722509203233732e\n"
".quad 0x30202c31202c3339,0x0a3b30327025202c,0x33732e706c657309,0x2c34397225092032\n"
".quad 0x25202c30202c3120,0x6573090a3b313270,0x09203233732e706c,0x2c31202c35397225\n"
".quad 0x32327025202c3020,0x2e706c6573090a3b,0x3972250920323373,0x2c30202c31202c36\n"
".quad 0x090a3b3332702520,0x3233732e706c6573,0x202c373972250920,0x7025202c30202c31\n"
".quad 0x6c6573090a3b3432,0x2509203233732e70,0x202c31202c383972,0x3b35327025202c30\n"
".quad 0x7261702e646c090a,0x09203233752e6d61,0x5f5b202c39397225,0x726170616475635f\n"
".quad 0x615235325a5f5f6d,0x664f646441786964,0x646e417374657366,0x50656c6666756853\n"
".quad 0x6c615679654b3231,0x3053726961506575,0x656c655f696a6a5f,0x0a3b5d73746e656d\n"
".quad 0x3233732e766f6d09,0x2c30303172250920,0x240a3b3636722520,0x3438325f325f744c\n"
".quad 0x3c2f2f200a3a3831,0x6f4c203e706f6f6c,0x2079646f6220706f,0x31333420656e696c\n"
".quad 0x6e697473656e202c,0x3a68747065642067,0x69747365202c3120,0x746920646574616d\n"
".quad 0x736e6f6974617265,0x776f6e6b6e75203a,0x2e70746573090a6e,0x09203233752e746c\n"
".quad 0x7225202c36327025,0x39397225202c3835,0x3270252140090a3b,0x2409206172622036\n"
".quad 0x3938325f325f744c,0x3c2f2f200a3b3033,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x31333420656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3438325f325f744c,0x636f6c2e090a3831,0x0930343409373109,0x6c2e6c756d090a30\n"
".quad 0x2509203233752e6f,0x7225202c31303172,0x090a3b38202c3835,0x2e3436752e747663\n"
".quad 0x6472250920323375,0x30317225202c3332,0x702e646c090a3b31,0x3436752e6d617261\n"
".quad 0x2c34326472250920,0x616475635f5f5b20,0x325a5f5f6d726170,0x6441786964615235\n"
".quad 0x7374657366664f64,0x6666756853646e41,0x79654b323150656c,0x69615065756c6156\n"
".quad 0x5f696a6a5f305372,0x090a3b5d63725370,0x203436752e646461,0x202c353264722509\n"
".quad 0x25202c3332647225,0x6c090a3b34326472,0x6c61626f6c672e64,0x203233752e32762e\n"
".quad 0x2c32303172257b09,0x202c7d3330317225,0x302b35326472255b,0x2e766f6d090a3b5d\n"
".quad 0x3172250920323373,0x30317225202c3430,0x2e617262090a3b33,0x744c240920696e75\n"
".quad 0x34373638325f325f,0x5f325f744c240a3b,0x200a3a3033393832,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c313334\n"
".quad 0x656c6562616c2064,0x5f325f744c242064,0x2e090a3831343832,0x3409373109636f6c\n"
".quad 0x6f6d090a30093334,0x2509203233752e76,0x3b30202c32303172,0x325f325f744c240a\n"
".quad 0x2f200a3a34373638,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3420656e696c2079,0x64616568202c3133,0x64656c6562616c20,0x325f325f744c2420\n"
".quad 0x6573090a38313438,0x09203233732e706c,0x31202c3530317225,0x327025202c30202c\n"
".quad 0x2e646e61090a3b36,0x3172250920323362,0x30317225202c3630,0x3b33387225202c35\n"
".quad 0x33752e766f6d090a,0x3730317225092032,0x6573090a3b30202c,0x33732e71652e7074\n"
".quad 0x2c37327025092032,0x202c363031722520,0x090a3b3730317225,0x7262203732702540\n"
".quad 0x325f744c24092061,0x0a3b36383139325f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c31333420,0x6c6562616c206461\n"
".quad 0x325f744c24206465,0x090a38313438325f,0x09373109636f6c2e,0x6c090a3009343734\n"
".quad 0x2e6d617261702e64,0x3172250920323373,0x635f5f5b202c3830,0x5f6d726170616475\n"
".quad 0x6964615235325a5f,0x7366664f64644178,0x6853646e41737465,0x323150656c666675\n"
".quad 0x65756c615679654b,0x6a5f305372696150,0x74666968735f696a,0x2e726873090a3b5d\n"
".quad 0x3172250920323375,0x30317225202c3930,0x3830317225202c32,0x622e646e61090a3b\n"
".quad 0x3131722509203233,0x3930317225202c30,0x090a3b353532202c,0x752e6f6c2e6c756d\n"
".quad 0x3131722509203233,0x3031317225202c31,0x6461090a3b34202c,0x2509203233752e64\n"
".quad 0x7225202c32313172,0x31317225202c3934,0x2e747663090a3b31,0x203233752e343675\n"
".quad 0x202c363264722509,0x090a3b3231317225,0x656469772e6c756d,0x722509203233752e\n"
".quad 0x317225202c373264,0x090a3b34202c3231,0x203436752e646461,0x202c383264722509\n"
".quad 0x7225202c31647225,0x646c090a3b373264,0x2e6465726168732e,0x3172250920323375\n"
".quad 0x6472255b202c3331,0x090a3b5d302b3832,0x203233752e646461,0x202c343131722509\n"
".quad 0x31202c3331317225,0x68732e7473090a3b,0x3233752e64657261,0x38326472255b0920\n"
".quad 0x317225202c5d302b,0x6f6c2e090a3b3431,0x3537340937310963,0x2e6c756d090a3009\n"
".quad 0x09203233752e6f6c,0x25202c3531317225,0x3b38202c33313172,0x36752e747663090a\n"
".quad 0x2509203233752e34,0x7225202c39326472,0x646c090a3b353131,0x752e6d617261702e\n"
".quad 0x3364722509203436,0x75635f5f5b202c30,0x5f5f6d7261706164,0x786964615235325a\n"
".quad 0x657366664f646441,0x756853646e417374,0x4b323150656c6666,0x5065756c61567965\n"
".quad 0x6a6a5f3053726961,0x3b5d747344705f69,0x36752e646461090a,0x3133647225092034\n"
".quad 0x2c3932647225202c,0x0a3b303364722520,0x3233732e766f6d09,0x2c36313172250920\n"
".quad 0x0a3b343031722520,0x626f6c672e747309,0x33752e32762e6c61,0x336472255b092032\n"
".quad 0x257b202c5d302b31,0x3172252c32303172,0x744c240a3b7d3631,0x36383139325f325f\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c31333420656e,0x62616c2064616568,0x744c242064656c65,0x38313438325f325f\n"
".quad 0x3109636f6c2e090a,0x0a30093737340937,0x6e79732e72616209,0x61090a3b30092063\n"
".quad 0x09203233622e646e,0x25202c3731317225,0x7225202c35303172,0x766f6d090a3b3438\n"
".quad 0x722509203233752e,0x0a3b30202c383131,0x71652e7074657309,0x702509203233732e\n"
".quad 0x31317225202c3832,0x3831317225202c37,0x3832702540090a3b,0x4c24092061726220\n"
".quad 0x393639325f325f74,0x6c3c2f2f200a3b38,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c31333420656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x313438325f325f74,0x09636f6c2e090a38,0x3009303834093731,0x7261702e646c090a\n"
".quad 0x09203233732e6d61,0x5b202c3931317225,0x6170616475635f5f,0x5235325a5f5f6d72\n"
".quad 0x4f64644178696461,0x6e41737465736666,0x656c666675685364,0x615679654b323150\n"
".quad 0x537269615065756c,0x68735f696a6a5f30,0x73090a3b5d746669,0x09203233752e7268\n"
".quad 0x25202c3930317225,0x7225202c32303172,0x6e61090a3b393131,0x2509203233622e64\n"
".quad 0x7225202c30313172,0x353532202c393031,0x6c2e6c756d090a3b,0x2509203233752e6f\n"
".quad 0x7225202c31313172,0x0a3b34202c303131,0x3233752e64646109,0x2c30323172250920\n"
".quad 0x25202c3934722520,0x63090a3b31313172,0x752e3436752e7476,0x3364722509203233\n"
".quad 0x3032317225202c32,0x772e6c756d090a3b,0x203233752e656469,0x202c333364722509\n"
".quad 0x34202c3032317225,0x752e646461090a3b,0x3264722509203436,0x2c31647225202c38\n"
".quad 0x0a3b333364722520,0x726168732e646c09,0x09203233752e6465,0x5b202c3132317225\n"
".quad 0x5d302b3832647225,0x752e646461090a3b,0x3231722509203233,0x3132317225202c32\n"
".quad 0x7473090a3b31202c,0x2e6465726168732e,0x72255b0920323375,0x202c5d302b383264\n"
".quad 0x090a3b3232317225,0x09373109636f6c2e,0x6d090a3009313834,0x33752e6f6c2e6c75\n"
".quad 0x3332317225092032,0x2c3132317225202c,0x747663090a3b3820,0x3233752e3436752e\n"
".quad 0x2c34336472250920,0x0a3b333231722520,0x617261702e646c09,0x2509203436752e6d\n"
".quad 0x5f5b202c35336472,0x726170616475635f,0x615235325a5f5f6d,0x664f646441786964\n"
".quad 0x646e417374657366,0x50656c6666756853,0x6c615679654b3231,0x3053726961506575\n"
".quad 0x7344705f696a6a5f,0x646461090a3b5d74,0x722509203436752e,0x647225202c363364\n"
".quad 0x33647225202c3433,0x2e766f6d090a3b35,0x3172250920323373,0x30317225202c3432\n"
".quad 0x672e7473090a3b34,0x32762e6c61626f6c,0x255b09203233752e,0x2c5d302b36336472\n"
".quad 0x2c32303172257b20,0x0a3b7d3432317225,0x39325f325f744c24,0x2f2f200a3a383936\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x333420656e696c20\n"
".quad 0x2064616568202c31,0x2064656c6562616c,0x38325f325f744c24,0x6f6c2e090a383134\n"
".quad 0x3338340937310963,0x2e726162090a3009,0x3b300920636e7973,0x33622e646e61090a\n"
".quad 0x3532317225092032,0x2c3530317225202c,0x090a3b3538722520,0x203233752e766f6d\n"
".quad 0x202c363231722509,0x70746573090a3b30,0x203233732e71652e,0x25202c3932702509\n"
".quad 0x7225202c35323172,0x2540090a3b363231,0x2061726220393270,0x335f325f744c2409\n"
".quad 0x2f200a3b30313230,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3420656e696c2079,0x64616568202c3133,0x64656c6562616c20,0x325f325f744c2420\n"
".quad 0x6c2e090a38313438,0x383409373109636f,0x2e646c090a300936,0x33732e6d61726170\n"
".quad 0x3732317225092032,0x6475635f5f5b202c,0x5a5f5f6d72617061,0x4178696461523532\n"
".quad 0x74657366664f6464,0x66756853646e4173,0x654b323150656c66,0x615065756c615679\n"
".quad 0x696a6a5f30537269,0x3b5d74666968735f,0x33752e726873090a,0x3930317225092032\n"
".quad 0x2c3230317225202c,0x0a3b373231722520,0x3233622e646e6109,0x2c30313172250920\n"
".quad 0x202c393031722520,0x756d090a3b353532,0x3233752e6f6c2e6c,0x2c31313172250920\n"
".quad 0x202c303131722520,0x2e646461090a3b34,0x3172250920323375,0x39347225202c3832\n"
".quad 0x3b3131317225202c,0x36752e747663090a,0x2509203233752e34,0x7225202c37336472\n"
".quad 0x756d090a3b383231,0x752e656469772e6c,0x3364722509203233,0x3832317225202c38\n"
".quad 0x6461090a3b34202c,0x2509203436752e64,0x7225202c38326472,0x33647225202c3164\n"
".quad 0x732e646c090a3b38,0x33752e6465726168,0x3932317225092032,0x38326472255b202c\n"
".quad 0x6461090a3b5d302b,0x2509203233752e64,0x7225202c30333172,0x0a3b31202c393231\n"
".quad 0x726168732e747309,0x09203233752e6465,0x302b38326472255b,0x3033317225202c5d\n"
".quad 0x09636f6c2e090a3b,0x3009373834093731,0x6f6c2e6c756d090a,0x722509203233752e\n"
".quad 0x317225202c313331,0x090a3b38202c3932,0x2e3436752e747663,0x6472250920323375\n"
".quad 0x33317225202c3933,0x702e646c090a3b31,0x3436752e6d617261,0x2c30346472250920\n"
".quad 0x616475635f5f5b20,0x325a5f5f6d726170,0x6441786964615235,0x7374657366664f64\n"
".quad 0x6666756853646e41,0x79654b323150656c,0x69615065756c6156,0x5f696a6a5f305372\n"
".quad 0x090a3b5d74734470,0x203436752e646461,0x202c313464722509,0x25202c3933647225\n"
".quad 0x6d090a3b30346472,0x09203233732e766f,0x25202c3233317225,0x73090a3b34303172\n"
".quad 0x6c61626f6c672e74,0x203233752e32762e,0x2b31346472255b09,0x3172257b202c5d30\n"
".quad 0x32333172252c3230,0x325f744c240a3b7d,0x0a3a30313230335f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c31333420\n"
".quad 0x6c6562616c206461,0x325f744c24206465,0x090a38313438325f,0x09373109636f6c2e\n"
".quad 0x62090a3009393834,0x20636e79732e7261,0x646e61090a3b3009,0x722509203233622e\n"
".quad 0x317225202c333331,0x36387225202c3530,0x752e766f6d090a3b,0x3331722509203233\n"
".quad 0x73090a3b30202c34,0x732e71652e707465,0x3033702509203233,0x2c3333317225202c\n"
".quad 0x0a3b343331722520,0x6220303370254009,0x5f744c2409206172,0x3b32323730335f32\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x68202c3133342065,0x6562616c20646165,0x5f744c242064656c,0x0a38313438325f32\n"
".quad 0x373109636f6c2e09,0x090a300932393409,0x6d617261702e646c,0x722509203233732e\n"
".quad 0x5f5f5b202c353331,0x6d72617061647563,0x64615235325a5f5f,0x66664f6464417869\n"
".quad 0x53646e4173746573,0x3150656c66667568,0x756c615679654b32,0x5f30537269615065\n"
".quad 0x666968735f696a6a,0x726873090a3b5d74,0x722509203233752e,0x317225202c393031\n"
".quad 0x33317225202c3230,0x2e646e61090a3b35,0x3172250920323362,0x30317225202c3031\n"
".quad 0x0a3b353532202c39,0x2e6f6c2e6c756d09,0x3172250920323375,0x31317225202c3131\n"
".quad 0x61090a3b34202c30,0x09203233752e6464,0x25202c3633317225,0x317225202c393472\n"
".quad 0x747663090a3b3131,0x3233752e3436752e,0x2c32346472250920,0x0a3b363331722520\n"
".quad 0x6469772e6c756d09,0x2509203233752e65,0x7225202c33346472,0x0a3b34202c363331\n"
".quad 0x3436752e64646109,0x2c38326472250920,0x25202c3164722520,0x6c090a3b33346472\n"
".quad 0x6465726168732e64,0x722509203233752e,0x72255b202c373331,0x0a3b5d302b383264\n"
".quad 0x3233752e64646109,0x2c38333172250920,0x202c373331722520,0x732e7473090a3b31\n"
".quad 0x33752e6465726168,0x326472255b092032,0x7225202c5d302b38,0x6c2e090a3b383331\n"
".quad 0x393409373109636f,0x6c756d090a300933,0x203233752e6f6c2e,0x202c393331722509\n"
".quad 0x38202c3733317225,0x752e747663090a3b,0x09203233752e3436,0x25202c3434647225\n"
".quad 0x6c090a3b39333172,0x2e6d617261702e64,0x6472250920343675,0x635f5f5b202c3534\n"
".quad 0x5f6d726170616475,0x6964615235325a5f,0x7366664f64644178,0x6853646e41737465\n"
".quad 0x323150656c666675,0x65756c615679654b,0x6a5f305372696150,0x5d747344705f696a\n"
".quad 0x752e646461090a3b,0x3464722509203436,0x3434647225202c36,0x3b3534647225202c\n"
".quad 0x33732e766f6d090a,0x3034317225092032,0x3b3430317225202c,0x6f6c672e7473090a\n"
".quad 0x752e32762e6c6162,0x6472255b09203233,0x7b202c5d302b3634,0x72252c3230317225\n"
".quad 0x4c240a3b7d303431,0x323730335f325f74,0x6c3c2f2f200a3a32,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c31333420656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x313438325f325f74,0x09636f6c2e090a38,0x3009353934093731\n"
".quad 0x79732e726162090a,0x090a3b300920636e,0x203233622e646e61,0x202c313431722509\n"
".quad 0x25202c3530317225,0x6f6d090a3b373872,0x2509203233752e76,0x3b30202c32343172\n"
".quad 0x652e70746573090a,0x2509203233732e71,0x317225202c313370,0x34317225202c3134\n"
".quad 0x33702540090a3b32,0x2409206172622031,0x3231335f325f744c,0x3c2f2f200a3b3433\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x31333420656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3438325f325f744c,0x636f6c2e090a3831\n"
".quad 0x0938393409373109,0x61702e646c090a30,0x203233732e6d6172,0x202c333431722509\n"
".quad 0x70616475635f5f5b,0x35325a5f5f6d7261,0x6464417869646152,0x417374657366664f\n"
".quad 0x6c6666756853646e,0x5679654b32315065,0x7269615065756c61,0x735f696a6a5f3053\n"
".quad 0x090a3b5d74666968,0x203233752e726873,0x202c393031722509,0x25202c3230317225\n"
".quad 0x61090a3b33343172,0x09203233622e646e,0x25202c3031317225,0x3532202c39303172\n"
".quad 0x2e6c756d090a3b35,0x09203233752e6f6c,0x25202c3131317225,0x3b34202c30313172\n"
".quad 0x33752e646461090a,0x3434317225092032,0x202c39347225202c,0x090a3b3131317225\n"
".quad 0x2e3436752e747663,0x6472250920323375,0x34317225202c3734,0x2e6c756d090a3b34\n"
".quad 0x3233752e65646977,0x2c38346472250920,0x202c343431722520,0x2e646461090a3b34\n"
".quad 0x6472250920343675,0x31647225202c3832,0x3b3834647225202c,0x6168732e646c090a\n"
".quad 0x203233752e646572,0x202c353431722509,0x302b38326472255b,0x2e646461090a3b5d\n"
".quad 0x3172250920323375,0x34317225202c3634,0x73090a3b31202c35,0x6465726168732e74\n"
".quad 0x255b09203233752e,0x2c5d302b38326472,0x0a3b363431722520,0x373109636f6c2e09\n"
".quad 0x090a300939393409,0x752e6f6c2e6c756d,0x3431722509203233,0x3534317225202c37\n"
".quad 0x7663090a3b38202c,0x33752e3436752e74,0x3934647225092032,0x3b3734317225202c\n"
".quad 0x7261702e646c090a,0x09203436752e6d61,0x5b202c3035647225,0x6170616475635f5f\n"
".quad 0x5235325a5f5f6d72,0x4f64644178696461,0x6e41737465736666,0x656c666675685364\n"
".quad 0x615679654b323150,0x537269615065756c,0x44705f696a6a5f30,0x6461090a3b5d7473\n"
".quad 0x2509203436752e64,0x7225202c31356472,0x647225202c393464,0x766f6d090a3b3035\n"
".quad 0x722509203233732e,0x317225202c383431,0x2e7473090a3b3430,0x762e6c61626f6c67\n"
".quad 0x5b09203233752e32,0x5d302b3135647225,0x32303172257b202c,0x3b7d38343172252c\n"
".quad 0x335f325f744c240a,0x2f200a3a34333231,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3420656e696c2079,0x64616568202c3133,0x64656c6562616c20\n"
".quad 0x325f325f744c2420,0x6c2e090a38313438,0x303509373109636f,0x726162090a300931\n"
".quad 0x300920636e79732e,0x622e646e61090a3b,0x3431722509203233,0x3530317225202c39\n"
".quad 0x0a3b38387225202c,0x3233752e766f6d09,0x2c30353172250920,0x746573090a3b3020\n"
".quad 0x3233732e71652e70,0x202c323370250920,0x25202c3934317225,0x40090a3b30353172\n"
".quad 0x6172622032337025,0x5f325f744c240920,0x200a3b3634373133,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c313334\n"
".quad 0x656c6562616c2064,0x5f325f744c242064,0x2e090a3831343832,0x3509373109636f6c\n"
".quad 0x646c090a30093430,0x732e6d617261702e,0x3531722509203233,0x75635f5f5b202c31\n"
".quad 0x5f5f6d7261706164,0x786964615235325a,0x657366664f646441,0x756853646e417374\n"
".quad 0x4b323150656c6666,0x5065756c61567965,0x6a6a5f3053726961,0x5d74666968735f69\n"
".quad 0x752e726873090a3b,0x3031722509203233,0x3230317225202c39,0x3b3135317225202c\n"
".quad 0x33622e646e61090a,0x3031317225092032,0x2c3930317225202c,0x6d090a3b35353220\n"
".quad 0x33752e6f6c2e6c75,0x3131317225092032,0x2c3031317225202c,0x646461090a3b3420\n"
".quad 0x722509203233752e,0x347225202c323531,0x3131317225202c39,0x752e747663090a3b\n"
".quad 0x09203233752e3436,0x25202c3235647225,0x6d090a3b32353172,0x2e656469772e6c75\n"
".quad 0x6472250920323375,0x35317225202c3335,0x61090a3b34202c32,0x09203436752e6464\n"
".quad 0x25202c3832647225,0x647225202c316472,0x2e646c090a3b3335,0x752e646572616873\n"
".quad 0x3531722509203233,0x326472255b202c33,0x61090a3b5d302b38,0x09203233752e6464\n"
".quad 0x25202c3435317225,0x3b31202c33353172,0x6168732e7473090a,0x203233752e646572\n"
".quad 0x2b38326472255b09,0x35317225202c5d30,0x636f6c2e090a3b34,0x0935303509373109\n"
".quad 0x6c2e6c756d090a30,0x2509203233752e6f,0x7225202c35353172,0x0a3b38202c333531\n"
".quad 0x3436752e74766309,0x722509203233752e,0x317225202c343564,0x2e646c090a3b3535\n"
".quad 0x36752e6d61726170,0x3535647225092034,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x4178696461523532,0x74657366664f6464,0x66756853646e4173,0x654b323150656c66\n"
".quad 0x615065756c615679,0x696a6a5f30537269,0x0a3b5d747344705f,0x3436752e64646109\n"
".quad 0x2c36356472250920,0x202c343564722520,0x090a3b3535647225,0x203233732e766f6d\n"
".quad 0x202c363531722509,0x090a3b3430317225,0x61626f6c672e7473,0x3233752e32762e6c\n"
".quad 0x36356472255b0920,0x72257b202c5d302b,0x353172252c323031,0x5f744c240a3b7d36\n"
".quad 0x3a36343731335f32,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3133342065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a38313438325f32,0x373109636f6c2e09,0x090a300937303509,0x636e79732e726162\n"
".quad 0x6e61090a3b300920,0x2509203233622e64,0x7225202c37353172,0x387225202c353031\n"
".quad 0x2e766f6d090a3b39,0x3172250920323375,0x090a3b30202c3835,0x2e71652e70746573\n"
".quad 0x3370250920323373,0x3735317225202c33,0x3b3835317225202c,0x203333702540090a\n"
".quad 0x744c240920617262,0x38353232335f325f,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c31333420656e,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x38313438325f325f,0x3109636f6c2e090a,0x0a30093031350937\n"
".quad 0x617261702e646c09,0x2509203233732e6d,0x5f5b202c39353172,0x726170616475635f\n"
".quad 0x615235325a5f5f6d,0x664f646441786964,0x646e417374657366,0x50656c6666756853\n"
".quad 0x6c615679654b3231,0x3053726961506575,0x6968735f696a6a5f,0x6873090a3b5d7466\n"
".quad 0x2509203233752e72,0x7225202c39303172,0x317225202c323031,0x646e61090a3b3935\n"
".quad 0x722509203233622e,0x317225202c303131,0x3b353532202c3930,0x6f6c2e6c756d090a\n"
".quad 0x722509203233752e,0x317225202c313131,0x090a3b34202c3031,0x203233752e646461\n"
".quad 0x202c303631722509,0x7225202c39347225,0x7663090a3b313131,0x33752e3436752e74\n"
".quad 0x3735647225092032,0x3b3036317225202c,0x69772e6c756d090a,0x09203233752e6564\n"
".quad 0x25202c3835647225,0x3b34202c30363172,0x36752e646461090a,0x3832647225092034\n"
".quad 0x202c31647225202c,0x090a3b3835647225,0x65726168732e646c,0x2509203233752e64\n"
".quad 0x255b202c31363172,0x3b5d302b38326472,0x33752e646461090a,0x3236317225092032\n"
".quad 0x2c3136317225202c,0x2e7473090a3b3120,0x752e646572616873,0x6472255b09203233\n"
".quad 0x25202c5d302b3832,0x2e090a3b32363172,0x3509373109636f6c,0x756d090a30093131\n"
".quad 0x3233752e6f6c2e6c,0x2c33363172250920,0x202c313631722520,0x2e747663090a3b38\n"
".quad 0x203233752e343675,0x202c393564722509,0x090a3b3336317225,0x6d617261702e646c\n"
".quad 0x722509203436752e,0x5f5f5b202c303664,0x6d72617061647563,0x64615235325a5f5f\n"
".quad 0x66664f6464417869,0x53646e4173746573,0x3150656c66667568,0x756c615679654b32\n"
".quad 0x5f30537269615065,0x747344705f696a6a,0x2e646461090a3b5d,0x6472250920343675\n"
".quad 0x35647225202c3136,0x3036647225202c39,0x732e766f6d090a3b,0x3631722509203233\n"
".quad 0x3430317225202c34,0x6c672e7473090a3b,0x2e32762e6c61626f,0x72255b0920323375\n"
".quad 0x202c5d302b313664,0x252c32303172257b,0x240a3b7d34363172,0x3232335f325f744c\n"
".quad 0x3c2f2f200a3a3835,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x31333420656e696c,0x6c2064616568202c,0x242064656c656261,0x3438325f325f744c\n"
".quad 0x636f6c2e090a3831,0x0933313509373109,0x732e726162090a30,0x0a3b300920636e79\n"
".quad 0x3233622e646e6109,0x2c35363172250920,0x202c353031722520,0x6d090a3b30397225\n"
".quad 0x09203233752e766f,0x30202c3636317225,0x2e70746573090a3b,0x09203233732e7165\n"
".quad 0x7225202c34337025,0x317225202c353631,0x702540090a3b3636,0x0920617262203433\n"
".quad 0x32335f325f744c24,0x2f2f200a3b303737,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x333420656e696c20,0x2064616568202c31,0x2064656c6562616c\n"
".quad 0x38325f325f744c24,0x6f6c2e090a383134,0x3631350937310963,0x702e646c090a3009\n"
".quad 0x3233732e6d617261,0x2c37363172250920,0x616475635f5f5b20,0x325a5f5f6d726170\n"
".quad 0x6441786964615235,0x7374657366664f64,0x6666756853646e41,0x79654b323150656c\n"
".quad 0x69615065756c6156,0x5f696a6a5f305372,0x0a3b5d7466696873,0x3233752e72687309\n"
".quad 0x2c39303172250920,0x202c323031722520,0x090a3b3736317225,0x203233622e646e61\n"
".quad 0x202c303131722509,0x32202c3930317225,0x6c756d090a3b3535,0x203233752e6f6c2e\n"
".quad 0x202c313131722509,0x34202c3031317225,0x752e646461090a3b,0x3631722509203233\n"
".quad 0x2c39347225202c38,0x0a3b313131722520,0x3436752e74766309,0x722509203233752e\n"
".quad 0x317225202c323664,0x6c756d090a3b3836,0x33752e656469772e,0x3336647225092032\n"
".quad 0x2c3836317225202c,0x646461090a3b3420,0x722509203436752e,0x647225202c383264\n"
".quad 0x3336647225202c31,0x68732e646c090a3b,0x3233752e64657261,0x2c39363172250920\n"
".quad 0x2b38326472255b20,0x646461090a3b5d30,0x722509203233752e,0x317225202c303731\n"
".quad 0x090a3b31202c3936,0x65726168732e7473,0x5b09203233752e64,0x5d302b3832647225\n"
".quad 0x3b3037317225202c,0x3109636f6c2e090a,0x0a30093731350937,0x2e6f6c2e6c756d09\n"
".quad 0x3172250920323375,0x36317225202c3137,0x63090a3b38202c39,0x752e3436752e7476\n"
".quad 0x3664722509203233,0x3137317225202c34,0x61702e646c090a3b,0x203436752e6d6172\n"
".quad 0x202c353664722509,0x70616475635f5f5b,0x35325a5f5f6d7261,0x6464417869646152\n"
".quad 0x417374657366664f,0x6c6666756853646e,0x5679654b32315065,0x7269615065756c61\n"
".quad 0x705f696a6a5f3053,0x61090a3b5d747344,0x09203436752e6464,0x25202c3636647225\n"
".quad 0x7225202c34366472,0x6f6d090a3b353664,0x2509203233732e76,0x7225202c32373172\n"
".quad 0x7473090a3b343031,0x2e6c61626f6c672e,0x09203233752e3276,0x302b36366472255b\n"
".quad 0x303172257b202c5d,0x7d32373172252c32,0x5f325f744c240a3b,0x200a3a3037373233\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c313334,0x656c6562616c2064,0x5f325f744c242064,0x2e090a3831343832\n"
".quad 0x3509373109636f6c,0x6162090a30093931,0x0920636e79732e72,0x2e646e61090a3b30\n"
".quad 0x3172250920323362,0x30317225202c3337,0x3b31397225202c35,0x33752e766f6d090a\n"
".quad 0x3437317225092032,0x6573090a3b30202c,0x33732e71652e7074,0x2c35337025092032\n"
".quad 0x202c333731722520,0x090a3b3437317225,0x7262203533702540,0x325f744c24092061\n"
".quad 0x0a3b32383233335f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c31333420,0x6c6562616c206461,0x325f744c24206465\n"
".quad 0x090a38313438325f,0x09373109636f6c2e,0x6c090a3009323235,0x2e6d617261702e64\n"
".quad 0x3172250920323373,0x635f5f5b202c3537,0x5f6d726170616475,0x6964615235325a5f\n"
".quad 0x7366664f64644178,0x6853646e41737465,0x323150656c666675,0x65756c615679654b\n"
".quad 0x6a5f305372696150,0x74666968735f696a,0x2e726873090a3b5d,0x3172250920323375\n"
".quad 0x30317225202c3930,0x3537317225202c32,0x622e646e61090a3b,0x3131722509203233\n"
".quad 0x3930317225202c30,0x090a3b353532202c,0x752e6f6c2e6c756d,0x3131722509203233\n"
".quad 0x3031317225202c31,0x6461090a3b34202c,0x2509203233752e64,0x7225202c36373172\n"
".quad 0x31317225202c3934,0x2e747663090a3b31,0x203233752e343675,0x202c373664722509\n"
".quad 0x090a3b3637317225,0x656469772e6c756d,0x722509203233752e,0x317225202c383664\n"
".quad 0x090a3b34202c3637,0x203436752e646461,0x202c383264722509,0x7225202c31647225\n"
".quad 0x646c090a3b383664,0x2e6465726168732e,0x3172250920323375,0x6472255b202c3737\n"
".quad 0x090a3b5d302b3832,0x203233752e646461,0x202c383731722509,0x31202c3737317225\n"
".quad 0x68732e7473090a3b,0x3233752e64657261,0x38326472255b0920,0x317225202c5d302b\n"
".quad 0x6f6c2e090a3b3837,0x3332350937310963,0x2e6c756d090a3009,0x09203233752e6f6c\n"
".quad 0x25202c3937317225,0x3b38202c37373172,0x36752e747663090a,0x2509203233752e34\n"
".quad 0x7225202c39366472,0x646c090a3b393731,0x752e6d617261702e,0x3764722509203436\n"
".quad 0x75635f5f5b202c30,0x5f5f6d7261706164,0x786964615235325a,0x657366664f646441\n"
".quad 0x756853646e417374,0x4b323150656c6666,0x5065756c61567965,0x6a6a5f3053726961\n"
".quad 0x3b5d747344705f69,0x36752e646461090a,0x3137647225092034,0x2c3936647225202c\n"
".quad 0x0a3b303764722520,0x3233732e766f6d09,0x2c30383172250920,0x0a3b343031722520\n"
".quad 0x626f6c672e747309,0x33752e32762e6c61,0x376472255b092032,0x257b202c5d302b31\n"
".quad 0x3172252c32303172,0x744c240a3b7d3038,0x32383233335f325f,0x6f6c3c2f2f200a3a\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c31333420656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x38313438325f325f,0x3109636f6c2e090a\n"
".quad 0x0a30093532350937,0x6e79732e72616209,0x61090a3b30092063,0x09203233622e646e\n"
".quad 0x25202c3138317225,0x7225202c35303172,0x766f6d090a3b3239,0x722509203233752e\n"
".quad 0x0a3b30202c323831,0x71652e7074657309,0x702509203233732e,0x38317225202c3633\n"
".quad 0x3238317225202c31,0x3633702540090a3b,0x4c24092061726220,0x393733335f325f74\n"
".quad 0x6c3c2f2f200a3b34,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x2c31333420656e69,0x616c206461656820,0x4c242064656c6562,0x313438325f325f74\n"
".quad 0x09636f6c2e090a38,0x3009383235093731,0x7261702e646c090a,0x09203233732e6d61\n"
".quad 0x5b202c3338317225,0x6170616475635f5f,0x5235325a5f5f6d72,0x4f64644178696461\n"
".quad 0x6e41737465736666,0x656c666675685364,0x615679654b323150,0x537269615065756c\n"
".quad 0x68735f696a6a5f30,0x73090a3b5d746669,0x09203233752e7268,0x25202c3930317225\n"
".quad 0x7225202c32303172,0x6e61090a3b333831,0x2509203233622e64,0x7225202c30313172\n"
".quad 0x353532202c393031,0x6c2e6c756d090a3b,0x2509203233752e6f,0x7225202c31313172\n"
".quad 0x0a3b34202c303131,0x3233752e64646109,0x2c34383172250920,0x25202c3934722520\n"
".quad 0x63090a3b31313172,0x752e3436752e7476,0x3764722509203233,0x3438317225202c32\n"
".quad 0x772e6c756d090a3b,0x203233752e656469,0x202c333764722509,0x34202c3438317225\n"
".quad 0x752e646461090a3b,0x3264722509203436,0x2c31647225202c38,0x0a3b333764722520\n"
".quad 0x726168732e646c09,0x09203233752e6465,0x5b202c3538317225,0x5d302b3832647225\n"
".quad 0x752e646461090a3b,0x3831722509203233,0x3538317225202c36,0x7473090a3b31202c\n"
".quad 0x2e6465726168732e,0x72255b0920323375,0x202c5d302b383264,0x090a3b3638317225\n"
".quad 0x09373109636f6c2e,0x6d090a3009393235,0x33752e6f6c2e6c75,0x3738317225092032\n"
".quad 0x2c3538317225202c,0x747663090a3b3820,0x3233752e3436752e,0x2c34376472250920\n"
".quad 0x0a3b373831722520,0x617261702e646c09,0x2509203436752e6d,0x5f5b202c35376472\n"
".quad 0x726170616475635f,0x615235325a5f5f6d,0x664f646441786964,0x646e417374657366\n"
".quad 0x50656c6666756853,0x6c615679654b3231,0x3053726961506575,0x7344705f696a6a5f\n"
".quad 0x646461090a3b5d74,0x722509203436752e,0x647225202c363764,0x37647225202c3437\n"
".quad 0x2e766f6d090a3b35,0x3172250920323373,0x30317225202c3838,0x672e7473090a3b34\n"
".quad 0x32762e6c61626f6c,0x255b09203233752e,0x2c5d302b36376472,0x2c32303172257b20\n"
".quad 0x0a3b7d3838317225,0x33335f325f744c24,0x2f2f200a3a343937,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x333420656e696c20,0x2064616568202c31\n"
".quad 0x2064656c6562616c,0x38325f325f744c24,0x6f6c2e090a383134,0x3133350937310963\n"
".quad 0x2e726162090a3009,0x3b300920636e7973,0x33622e646e61090a,0x3938317225092032\n"
".quad 0x2c3530317225202c,0x090a3b3339722520,0x203233752e766f6d,0x202c303931722509\n"
".quad 0x70746573090a3b30,0x203233732e71652e,0x25202c3733702509,0x7225202c39383172\n"
".quad 0x2540090a3b303931,0x2061726220373370,0x335f325f744c2409,0x2f200a3b36303334\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3420656e696c2079\n"
".quad 0x64616568202c3133,0x64656c6562616c20,0x325f325f744c2420,0x6c2e090a38313438\n"
".quad 0x333509373109636f,0x2e646c090a300934,0x33732e6d61726170,0x3139317225092032\n"
".quad 0x6475635f5f5b202c,0x5a5f5f6d72617061,0x4178696461523532,0x74657366664f6464\n"
".quad 0x66756853646e4173,0x654b323150656c66,0x615065756c615679,0x696a6a5f30537269\n"
".quad 0x3b5d74666968735f,0x33752e726873090a,0x3930317225092032,0x2c3230317225202c\n"
".quad 0x0a3b313931722520,0x3233622e646e6109,0x2c30313172250920,0x202c393031722520\n"
".quad 0x756d090a3b353532,0x3233752e6f6c2e6c,0x2c31313172250920,0x202c303131722520\n"
".quad 0x2e646461090a3b34,0x3172250920323375,0x39347225202c3239,0x3b3131317225202c\n"
".quad 0x36752e747663090a,0x2509203233752e34,0x7225202c37376472,0x756d090a3b323931\n"
".quad 0x752e656469772e6c,0x3764722509203233,0x3239317225202c38,0x6461090a3b34202c\n"
".quad 0x2509203436752e64,0x7225202c38326472,0x37647225202c3164,0x732e646c090a3b38\n"
".quad 0x33752e6465726168,0x3339317225092032,0x38326472255b202c,0x6461090a3b5d302b\n"
".quad 0x2509203233752e64,0x7225202c34393172,0x0a3b31202c333931,0x726168732e747309\n"
".quad 0x09203233752e6465,0x302b38326472255b,0x3439317225202c5d,0x09636f6c2e090a3b\n"
".quad 0x3009353335093731,0x6f6c2e6c756d090a,0x722509203233752e,0x317225202c353931\n"
".quad 0x090a3b38202c3339,0x2e3436752e747663,0x6472250920323375,0x39317225202c3937\n"
".quad 0x702e646c090a3b35,0x3436752e6d617261,0x2c30386472250920,0x616475635f5f5b20\n"
".quad 0x325a5f5f6d726170,0x6441786964615235,0x7374657366664f64,0x6666756853646e41\n"
".quad 0x79654b323150656c,0x69615065756c6156,0x5f696a6a5f305372,0x090a3b5d74734470\n"
".quad 0x203436752e646461,0x202c313864722509,0x25202c3937647225,0x6d090a3b30386472\n"
".quad 0x09203233732e766f,0x25202c3639317225,0x73090a3b34303172,0x6c61626f6c672e74\n"
".quad 0x203233752e32762e,0x2b31386472255b09,0x3172257b202c5d30,0x36393172252c3230\n"
".quad 0x325f744c240a3b7d,0x0a3a36303334335f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c31333420,0x6c6562616c206461\n"
".quad 0x325f744c24206465,0x090a38313438325f,0x09373109636f6c2e,0x62090a3009373335\n"
".quad 0x20636e79732e7261,0x646e61090a3b3009,0x722509203233622e,0x317225202c373931\n"
".quad 0x34397225202c3530,0x752e766f6d090a3b,0x3931722509203233,0x73090a3b30202c38\n"
".quad 0x732e71652e707465,0x3833702509203233,0x2c3739317225202c,0x0a3b383931722520\n"
".quad 0x6220383370254009,0x5f744c2409206172,0x3b38313834335f32,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3133342065\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x0a38313438325f32,0x373109636f6c2e09\n"
".quad 0x090a300930343509,0x6d617261702e646c,0x722509203233732e,0x5f5f5b202c393931\n"
".quad 0x6d72617061647563,0x64615235325a5f5f,0x66664f6464417869,0x53646e4173746573\n"
".quad 0x3150656c66667568,0x756c615679654b32,0x5f30537269615065,0x666968735f696a6a\n"
".quad 0x726873090a3b5d74,0x722509203233752e,0x317225202c393031,0x39317225202c3230\n"
".quad 0x2e646e61090a3b39,0x3172250920323362,0x30317225202c3031,0x0a3b353532202c39\n"
".quad 0x2e6f6c2e6c756d09,0x3172250920323375,0x31317225202c3131,0x61090a3b34202c30\n"
".quad 0x09203233752e6464,0x25202c3030327225,0x317225202c393472,0x747663090a3b3131\n"
".quad 0x3233752e3436752e,0x2c32386472250920,0x0a3b303032722520,0x6469772e6c756d09\n"
".quad 0x2509203233752e65,0x7225202c33386472,0x0a3b34202c303032,0x3436752e64646109\n"
".quad 0x2c38326472250920,0x25202c3164722520,0x6c090a3b33386472,0x6465726168732e64\n"
".quad 0x722509203233752e,0x72255b202c313032,0x0a3b5d302b383264,0x3233752e64646109\n"
".quad 0x2c32303272250920,0x202c313032722520,0x732e7473090a3b31,0x33752e6465726168\n"
".quad 0x326472255b092032,0x7225202c5d302b38,0x6c2e090a3b323032,0x343509373109636f\n"
".quad 0x6c756d090a300931,0x203233752e6f6c2e,0x202c333032722509,0x38202c3130327225\n"
".quad 0x752e747663090a3b,0x09203233752e3436,0x25202c3438647225,0x6c090a3b33303272\n"
".quad 0x2e6d617261702e64,0x6472250920343675,0x635f5f5b202c3538,0x5f6d726170616475\n"
".quad 0x6964615235325a5f,0x7366664f64644178,0x6853646e41737465,0x323150656c666675\n"
".quad 0x65756c615679654b,0x6a5f305372696150,0x5d747344705f696a,0x752e646461090a3b\n"
".quad 0x3864722509203436,0x3438647225202c36,0x3b3538647225202c,0x33732e766f6d090a\n"
".quad 0x3430327225092032,0x3b3430317225202c,0x6f6c672e7473090a,0x752e32762e6c6162\n"
".quad 0x6472255b09203233,0x7b202c5d302b3638,0x72252c3230317225,0x4c240a3b7d343032\n"
".quad 0x313834335f325f74,0x6c3c2f2f200a3a38,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c31333420656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x313438325f325f74,0x09636f6c2e090a38,0x3009333435093731,0x79732e726162090a\n"
".quad 0x090a3b300920636e,0x203233622e646e61,0x202c353032722509,0x25202c3530317225\n"
".quad 0x6f6d090a3b353972,0x2509203233752e76,0x3b30202c36303272,0x652e70746573090a\n"
".quad 0x2509203233732e71,0x327225202c393370,0x30327225202c3530,0x33702540090a3b36\n"
".quad 0x2409206172622039,0x3335335f325f744c,0x3c2f2f200a3b3033,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x31333420656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3438325f325f744c,0x636f6c2e090a3831,0x0936343509373109\n"
".quad 0x61702e646c090a30,0x203233732e6d6172,0x202c373032722509,0x70616475635f5f5b\n"
".quad 0x35325a5f5f6d7261,0x6464417869646152,0x417374657366664f,0x6c6666756853646e\n"
".quad 0x5679654b32315065,0x7269615065756c61,0x735f696a6a5f3053,0x090a3b5d74666968\n"
".quad 0x203233752e726873,0x202c393031722509,0x25202c3230317225,0x61090a3b37303272\n"
".quad 0x09203233622e646e,0x25202c3031317225,0x3532202c39303172,0x2e6c756d090a3b35\n"
".quad 0x09203233752e6f6c,0x25202c3131317225,0x3b34202c30313172,0x33752e646461090a\n"
".quad 0x3830327225092032,0x202c39347225202c,0x090a3b3131317225,0x2e3436752e747663\n"
".quad 0x6472250920323375,0x30327225202c3738,0x2e6c756d090a3b38,0x3233752e65646977\n"
".quad 0x2c38386472250920,0x202c383032722520,0x2e646461090a3b34,0x6472250920343675\n"
".quad 0x31647225202c3832,0x3b3838647225202c,0x6168732e646c090a,0x203233752e646572\n"
".quad 0x202c393032722509,0x302b38326472255b,0x2e646461090a3b5d,0x3272250920323375\n"
".quad 0x30327225202c3031,0x73090a3b31202c39,0x6465726168732e74,0x255b09203233752e\n"
".quad 0x2c5d302b38326472,0x0a3b303132722520,0x373109636f6c2e09,0x090a300937343509\n"
".quad 0x752e6f6c2e6c756d,0x3132722509203233,0x3930327225202c31,0x7663090a3b38202c\n"
".quad 0x33752e3436752e74,0x3938647225092032,0x3b3131327225202c,0x7261702e646c090a\n"
".quad 0x09203436752e6d61,0x5b202c3039647225,0x6170616475635f5f,0x5235325a5f5f6d72\n"
".quad 0x4f64644178696461,0x6e41737465736666,0x656c666675685364,0x615679654b323150\n"
".quad 0x537269615065756c,0x44705f696a6a5f30,0x6461090a3b5d7473,0x2509203436752e64\n"
".quad 0x7225202c31396472,0x647225202c393864,0x766f6d090a3b3039,0x722509203233732e\n"
".quad 0x317225202c323132,0x2e7473090a3b3430,0x762e6c61626f6c67,0x5b09203233752e32\n"
".quad 0x5d302b3139647225,0x32303172257b202c,0x3b7d32313272252c,0x335f325f744c240a\n"
".quad 0x2f200a3a30333335,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3420656e696c2079,0x64616568202c3133,0x64656c6562616c20,0x325f325f744c2420\n"
".quad 0x6c2e090a38313438,0x343509373109636f,0x726162090a300939,0x300920636e79732e\n"
".quad 0x622e646e61090a3b,0x3132722509203233,0x3530317225202c33,0x0a3b36397225202c\n"
".quad 0x3233752e766f6d09,0x2c34313272250920,0x746573090a3b3020,0x3233732e71652e70\n"
".quad 0x202c303470250920,0x25202c3331327225,0x40090a3b34313272,0x6172622030347025\n"
".quad 0x5f325f744c240920,0x200a3b3234383533,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c313334,0x656c6562616c2064\n"
".quad 0x5f325f744c242064,0x2e090a3831343832,0x3509373109636f6c,0x646c090a30093235\n"
".quad 0x732e6d617261702e,0x3132722509203233,0x75635f5f5b202c35,0x5f5f6d7261706164\n"
".quad 0x786964615235325a,0x657366664f646441,0x756853646e417374,0x4b323150656c6666\n"
".quad 0x5065756c61567965,0x6a6a5f3053726961,0x5d74666968735f69,0x752e726873090a3b\n"
".quad 0x3031722509203233,0x3230317225202c39,0x3b3531327225202c,0x33622e646e61090a\n"
".quad 0x3031317225092032,0x2c3930317225202c,0x6d090a3b35353220,0x33752e6f6c2e6c75\n"
".quad 0x3131317225092032,0x2c3031317225202c,0x646461090a3b3420,0x722509203233752e\n"
".quad 0x347225202c363132,0x3131317225202c39,0x752e747663090a3b,0x09203233752e3436\n"
".quad 0x25202c3239647225,0x6d090a3b36313272,0x2e656469772e6c75,0x6472250920323375\n"
".quad 0x31327225202c3339,0x61090a3b34202c36,0x09203436752e6464,0x25202c3832647225\n"
".quad 0x647225202c316472,0x2e646c090a3b3339,0x752e646572616873,0x3132722509203233\n"
".quad 0x326472255b202c37,0x61090a3b5d302b38,0x09203233752e6464,0x25202c3831327225\n"
".quad 0x3b31202c37313272,0x6168732e7473090a,0x203233752e646572,0x2b38326472255b09\n"
".quad 0x31327225202c5d30,0x636f6c2e090a3b38,0x0933353509373109,0x6c2e6c756d090a30\n"
".quad 0x2509203233752e6f,0x7225202c39313272,0x0a3b38202c373132,0x3436752e74766309\n"
".quad 0x722509203233752e,0x327225202c343964,0x2e646c090a3b3931,0x36752e6d61726170\n"
".quad 0x3539647225092034,0x6475635f5f5b202c,0x5a5f5f6d72617061,0x4178696461523532\n"
".quad 0x74657366664f6464,0x66756853646e4173,0x654b323150656c66,0x615065756c615679\n"
".quad 0x696a6a5f30537269,0x0a3b5d747344705f,0x3436752e64646109,0x2c36396472250920\n"
".quad 0x202c343964722520,0x090a3b3539647225,0x203233732e766f6d,0x202c303232722509\n"
".quad 0x090a3b3430317225,0x61626f6c672e7473,0x3233752e32762e6c,0x36396472255b0920\n"
".quad 0x72257b202c5d302b,0x323272252c323031,0x5f744c240a3b7d30,0x3a32343835335f32\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x68202c3133342065,0x6562616c20646165,0x5f744c242064656c,0x0a38313438325f32\n"
".quad 0x373109636f6c2e09,0x090a300935353509,0x636e79732e726162,0x6e61090a3b300920\n"
".quad 0x2509203233622e64,0x7225202c31323272,0x397225202c353031,0x2e766f6d090a3b37\n"
".quad 0x3272250920323375,0x090a3b30202c3232,0x2e71652e70746573,0x3470250920323373\n"
".quad 0x3132327225202c31,0x3b3232327225202c,0x203134702540090a,0x744c240920617262\n"
".quad 0x34353336335f325f,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c31333420656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x38313438325f325f,0x3109636f6c2e090a,0x0a30093835350937,0x617261702e646c09\n"
".quad 0x2509203233732e6d,0x5f5b202c33323272,0x726170616475635f,0x615235325a5f5f6d\n"
".quad 0x664f646441786964,0x646e417374657366,0x50656c6666756853,0x6c615679654b3231\n"
".quad 0x3053726961506575,0x6968735f696a6a5f,0x6873090a3b5d7466,0x2509203233752e72\n"
".quad 0x7225202c39303172,0x327225202c323031,0x646e61090a3b3332,0x722509203233622e\n"
".quad 0x317225202c303131,0x3b353532202c3930,0x6f6c2e6c756d090a,0x722509203233752e\n"
".quad 0x317225202c313131,0x090a3b34202c3031,0x203233752e646461,0x202c343232722509\n"
".quad 0x7225202c39347225,0x7663090a3b313131,0x33752e3436752e74,0x3739647225092032\n"
".quad 0x3b3432327225202c,0x69772e6c756d090a,0x09203233752e6564,0x25202c3839647225\n"
".quad 0x3b34202c34323272,0x36752e646461090a,0x3832647225092034,0x202c31647225202c\n"
".quad 0x090a3b3839647225,0x65726168732e646c,0x2509203233752e64,0x255b202c35323272\n"
".quad 0x3b5d302b38326472,0x33752e646461090a,0x3632327225092032,0x2c3532327225202c\n"
".quad 0x2e7473090a3b3120,0x752e646572616873,0x6472255b09203233,0x25202c5d302b3832\n"
".quad 0x2e090a3b36323272,0x3509373109636f6c,0x756d090a30093935,0x3233752e6f6c2e6c\n"
".quad 0x2c37323272250920,0x202c353232722520,0x2e747663090a3b38,0x203233752e343675\n"
".quad 0x202c393964722509,0x090a3b3732327225,0x6d617261702e646c,0x722509203436752e\n"
".quad 0x5f5b202c30303164,0x726170616475635f,0x615235325a5f5f6d,0x664f646441786964\n"
".quad 0x646e417374657366,0x50656c6666756853,0x6c615679654b3231,0x3053726961506575\n"
".quad 0x7344705f696a6a5f,0x646461090a3b5d74,0x722509203436752e,0x7225202c31303164\n"
".quad 0x647225202c393964,0x6f6d090a3b303031,0x2509203233732e76,0x7225202c38323272\n"
".quad 0x7473090a3b343031,0x2e6c61626f6c672e,0x09203233752e3276,0x2b3130316472255b\n"
".quad 0x3172257b202c5d30,0x38323272252c3230,0x325f744c240a3b7d,0x0a3a34353336335f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c31333420,0x6c6562616c206461,0x325f744c24206465,0x090a38313438325f\n"
".quad 0x09373109636f6c2e,0x62090a3009313635,0x20636e79732e7261,0x646e61090a3b3009\n"
".quad 0x722509203233622e,0x317225202c393232,0x38397225202c3530,0x752e766f6d090a3b\n"
".quad 0x3332722509203233,0x73090a3b30202c30,0x732e71652e707465,0x3234702509203233\n"
".quad 0x2c3932327225202c,0x0a3b303332722520,0x6220323470254009,0x5f744c2409206172\n"
".quad 0x3b36363836335f32,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3133342065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a38313438325f32,0x373109636f6c2e09,0x090a300934363509,0x6d617261702e646c\n"
".quad 0x722509203233732e,0x5f5f5b202c313332,0x6d72617061647563,0x64615235325a5f5f\n"
".quad 0x66664f6464417869,0x53646e4173746573,0x3150656c66667568,0x756c615679654b32\n"
".quad 0x5f30537269615065,0x666968735f696a6a,0x726873090a3b5d74,0x722509203233752e\n"
".quad 0x317225202c393031,0x33327225202c3230,0x2e646e61090a3b31,0x3172250920323362\n"
".quad 0x30317225202c3031,0x0a3b353532202c39,0x2e6f6c2e6c756d09,0x3172250920323375\n"
".quad 0x31317225202c3131,0x61090a3b34202c30,0x09203233752e6464,0x25202c3233327225\n"
".quad 0x317225202c393472,0x747663090a3b3131,0x3233752e3436752e,0x3230316472250920\n"
".quad 0x3b3233327225202c,0x69772e6c756d090a,0x09203233752e6564,0x202c333031647225\n"
".quad 0x34202c3233327225,0x752e646461090a3b,0x3264722509203436,0x2c31647225202c38\n"
".quad 0x3b33303164722520,0x6168732e646c090a,0x203233752e646572,0x202c333332722509\n"
".quad 0x302b38326472255b,0x2e646461090a3b5d,0x3272250920323375,0x33327225202c3433\n"
".quad 0x73090a3b31202c33,0x6465726168732e74,0x255b09203233752e,0x2c5d302b38326472\n"
".quad 0x0a3b343332722520,0x373109636f6c2e09,0x090a300935363509,0x752e6f6c2e6c756d\n"
".quad 0x3332722509203233,0x3333327225202c35,0x7663090a3b38202c,0x33752e3436752e74\n"
".quad 0x3031647225092032,0x3533327225202c34,0x61702e646c090a3b,0x203436752e6d6172\n"
".quad 0x2c35303164722509,0x616475635f5f5b20,0x325a5f5f6d726170,0x6441786964615235\n"
".quad 0x7374657366664f64,0x6666756853646e41,0x79654b323150656c,0x69615065756c6156\n"
".quad 0x5f696a6a5f305372,0x090a3b5d74734470,0x203436752e646461,0x2c36303164722509\n"
".quad 0x2c34303164722520,0x3b35303164722520,0x33732e766f6d090a,0x3633327225092032\n"
".quad 0x3b3430317225202c,0x6f6c672e7473090a,0x752e32762e6c6162,0x6472255b09203233\n"
".quad 0x202c5d302b363031,0x252c32303172257b,0x240a3b7d36333272,0x3836335f325f744c\n"
".quad 0x3c2f2f200a3a3636,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x31333420656e696c,0x6c2064616568202c,0x242064656c656261,0x3438325f325f744c\n"
".quad 0x636f6c2e090a3831,0x0937363509373109,0x732e726162090a30,0x0a3b300920636e79\n"
".quad 0x3233732e64646109,0x202c383572250920,0x3631202c38357225,0x2e70746573090a3b\n"
".quad 0x09203233752e746c,0x7225202c33347025,0x39357225202c3835,0x3334702540090a3b\n"
".quad 0x4c24092061726220,0x313438325f325f74,0x325f744c240a3b38,0x0a3a36303937325f\n"
".quad 0x373109636f6c2e09,0x090a300933373509,0x4c240a3b74697865,0x5a5f5f646e655744\n"
".quad 0x4178696461523532,0x74657366664f6464,0x66756853646e4173,0x654b323150656c66\n"
".quad 0x615065756c615679,0x696a6a5f30537269,0x202f2f207d090a3a,0x6964615235325a5f\n"
".quad 0x7366664f64644178,0x6853646e41737465,0x323150656c666675,0x65756c615679654b\n"
".quad 0x6a5f305372696150,0x000000000a0a696a\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_10$[5794];

}

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_10$:\n"
".quad 0x33010102464c457f,0x0000000000000002,0x0000000100be0002,0x0000000000000000\n"
".quad 0x0000000000002638,0x0000000000000040,0x00380040000a010a,0x0001001300400009\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000500\n"
".quad 0x0000000000000264,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x0000000000000764\n"
".quad 0x000000000000007f,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x00000000000007e3\n"
".quad 0x0000000000000258,0x0000001400000002,0x0000000000000001,0x0000000000000018\n"
".quad 0x00000001000000e2,0x0000000000100006,0x0000000000000000,0x0000000000000a3b\n"
".quad 0x0000000000000980,0x1800000a00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000216,0x0000000000000002,0x0000000000000000,0x00000000000013bb\n"
".quad 0x0000000000000050,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000106,0x0000000000000002,0x0000000000000000,0x000000000000140b\n"
".quad 0x0000000000000064,0x0000000400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x00000008000001ed,0x0000000000000003,0x0000000000000000,0x000000000000146f\n"
".quad 0x0000000000000030,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000ab,0x0000000000100006,0x0000000000000000,0x000000000000146f\n"
".quad 0x0000000000000400,0x0a00000800000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000001cb,0x0000000000000002,0x0000000000000000,0x000000000000186f\n"
".quad 0x0000000000000014,0x0000000800000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000c5,0x0000000000000002,0x0000000000000000,0x0000000000001883\n"
".quad 0x000000000000000c,0x0000000800000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x00000008000001ac,0x0000000000000003,0x0000000000000000,0x000000000000188f\n"
".quad 0x0000000000000010,0x0000000800000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000036,0x0000000000100006,0x0000000000000000,0x000000000000188f\n"
".quad 0x0000000000000cb8,0x1900000600000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000016b,0x0000000000000002,0x0000000000000000,0x0000000000002547\n"
".quad 0x0000000000000050,0x0000000c00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000006f,0x0000000000000002,0x0000000000000000,0x0000000000002597\n"
".quad 0x0000000000000078,0x0000000c00000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x000000080000012d,0x0000000000000003,0x0000000000000000,0x000000000000260f\n"
".quad 0x0000000000000030,0x0000000c00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000242,0x0000000000000002,0x0000000000000000,0x000000000000260f\n"
".quad 0x0000000000000008,0x0000000000000000,0x0000000000000008,0x0000000000000000\n"
".quad 0x0000000900000251,0x0000000000000000,0x0000000000000000,0x0000000000002617\n"
".quad 0x0000000000000020,0x0000001000000003,0x0000000000000004,0x0000000000000010\n"
".quad 0x000000080000002b,0x0000000000000003,0x0000000000000000,0x0000000000002637\n"
".quad 0x0000000000030040,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261\n"
".quad 0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x35325a5f2e747865\n"
".quad 0x6464417869646152,0x417374657366664f,0x6c6666756853646e,0x5679654b32315065\n"
".quad 0x7269615065756c61,0x2e00696a6a5f3053,0x2e6f666e692e766e,0x6964615235325a5f\n"
".quad 0x7366664f64644178,0x6853646e41737465,0x323150656c666675,0x65756c615679654b\n"
".quad 0x6a5f305372696150,0x747865742e00696a,0x64615234315a5f2e,0x7869666572507869\n"
".quad 0x766e2e00766d7553,0x5a5f2e6f666e692e,0x5078696461523431,0x6d75537869666572\n"
".quad 0x2e747865742e0076,0x7869646152385a5f,0x654b3231506d7553,0x615065756c615679\n"
".quad 0x6e2e006a6a6a7269,0x5f2e6f666e692e76,0x537869646152385a,0x79654b3231506d75\n"
".quad 0x69615065756c6156,0x766e2e006a6a6a72,0x2e6465726168732e,0x6964615235325a5f\n"
".quad 0x7366664f64644178,0x6853646e41737465,0x323150656c666675,0x65756c615679654b\n"
".quad 0x6a5f305372696150,0x632e766e2e00696a,0x31746e6174736e6f,0x64615235325a5f2e\n"
".quad 0x66664f6464417869,0x53646e4173746573,0x3150656c66667568,0x756c615679654b32\n"
".quad 0x5f30537269615065,0x2e766e2e00696a6a,0x5f2e646572616873,0x786964615234315a\n"
".quad 0x7553786966657250,0x632e766e2e00766d,0x31746e6174736e6f,0x64615234315a5f2e\n"
".quad 0x7869666572507869,0x766e2e00766d7553,0x2e6465726168732e,0x7869646152385a5f\n"
".quad 0x654b3231506d7553,0x615065756c615679,0x6e2e006a6a6a7269,0x6174736e6f632e76\n"
".quad 0x52385a5f2e31746e,0x506d755378696461,0x6c615679654b3231,0x6a6a726961506575\n"
".quad 0x6f632e766e2e006a,0x3431746e6174736e,0x766e2e6c65722e00,0x6e6174736e6f632e\n"
".quad 0x325a5f0000343174,0x6441786964615235,0x7374657366664f64,0x6666756853646e41\n"
".quad 0x79654b323150656c,0x69615065756c6156,0x00696a6a5f305372,0x6964615234315a5f\n"
".quad 0x5378696665725078,0x52385a5f00766d75,0x506d755378696461,0x6c615679654b3231\n"
".quad 0x6a6a726961506575,0x786964615264006a,0x6d75536b636f6c42,0x5378696461526400\n"
".quad 0x0000000000006d75,0x0000000000000000,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000000100,0x0000000000000000,0x0300000000000000,0x0000000000000200\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000300,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000000,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000001200,0x0000000000000000,0x0300000000000000,0x0000000000000c00\n"
".quad 0x0000000cb8000000,0x0300000000000000,0x0000000000000e00,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000800,0x0000000400000000,0x0300000000000000\n"
".quad 0x0000000000000a00,0x0000000000000000,0x0300000000000000,0x0000000000000400\n"
".quad 0x0000000980000000,0x0300000000000000,0x0000000000000600,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000f00,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000000d00,0x0000000000000000,0x0300000000000000,0x0000000000000b00\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000900,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000700,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000000500,0x0000000000000000,0x0300000000000000,0x0000000000001000\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000001100,0x0000000000000000\n"
".quad 0x1200000001000000,0x0000000000000c10,0x0000000000000000,0x1200000034000000\n"
".quad 0x0000000000000810,0x0000000000000000,0x1200000048000000,0x0000000000000410\n"
".quad 0x0000000000000000,0x1100000066000000,0x0000000000001200,0x0000000040000000\n"
".quad 0x1100000075000000,0x0000000040001200,0x0000030000000000,0x80a0000005000000\n"
".quad 0xc8308003fd040007,0x00a000b003644107,0x8010000201000000,0x801000b0030403c7\n"
".quad 0x03200c8009000002,0x8000020405000000,0x0720008205c00007,0x8006008001000000\n"
".quad 0xc8308003fde43f07,0x80100070036440c7,0x02f0000001000002,0x00861ffe03e00000\n"
".quad 0x801000ce09000000,0xab102b80150423c7,0x80400b08050aaaaa,0xc0600a0a05000007\n"
".quad 0x8030100211000047,0x803010020dc41007,0xd8600a09fde41007,0x802100060d000107\n"
".quad 0x8030040011044088,0x0341042c05e41007,0x80600b0a09000000,0x80200008150c00d7\n"
".quad 0x803007040d040047,0x80400b0c09e41007,0x80600a0e09000007,0x8030100409000087\n"
".quad 0x80600a0c15c41007,0x80d0810009000087,0x1420038a18044007,0xc830060bfd200584\n"
".quad 0x00a011e003640187,0x801011e003000000,0x80307c041d000002,0x8030830421640087\n"
".quad 0x8030840425644087,0x8030850429644087,0x803086042d644087,0x8030870431644087\n"
".quad 0x8030880435644087,0x8030890439644087,0x80308a043d644087,0x80308b0441644087\n"
".quad 0x80308c0445644087,0x80308d0449644087,0x80308e044d644087,0x80308f0451644087\n"
".quad 0x803090040d644087,0x8030810409644087,0x80d0830e1d644087,0x80d0831021044007\n"
".quad 0x80d0831225044007,0x80d0831429044007,0x80d083162d044007,0x80d0831831044007\n"
".quad 0x80d0831a35044007,0x80d0831c39044007,0x80d0831e3d044007,0x80d0832041044007\n"
".quad 0x80d0832245044007,0x80d0832449044007,0x80d083264d044007,0x80d0832851044007\n"
".quad 0x80d0830655044007,0x80d0830459044007,0xd03005cc09044007,0xc8a00005fd642107\n"
".quad 0x8030030a090c0147,0x802000c809c41016,0x80d00e045d042096,0x001000f85d80c016\n"
".quad 0x801000f8090403d1,0x80100006090403c7,0xc8d00705fd2440c2,0x00a0056003040007\n"
".quad 0x0010056003000000,0x801000d00d000001,0x8030032e0d0423c7,0x80d091060de40007\n"
".quad 0x803002060d044007,0x802000080dc41007,0x80000206050400c7,0x032501f80dc00007\n"
".quad 0x8004001801000000,0x02f0000001e420c7,0x00861ffe03e00000,0xc8d00805fd000000\n"
".quad 0x00a0063003040007,0x0010063003000000,0x801000d00d000001,0x8030032e0d0423c7\n"
".quad 0x80d091060de40007,0x803002060d044007,0x802000080dc41007,0x80000206050400c7\n"
".quad 0x032501f80dc00007,0x8004001801000000,0x02f0000001e420c7,0x00861ffe03e00000\n"
".quad 0xc8d00905fd000000,0x00a0070003040007,0x0010070003000000,0x801000d00d000001\n"
".quad 0x8030032e0d0423c7,0x80d091060de40007,0x803002060d044007,0x802000080dc41007\n"
".quad 0x80000206050400c7,0x032501f80dc00007,0x8004001801000000,0x02f0000001e420c7\n"
".quad 0x00861ffe03e00000,0xc8d00a05fd000000,0x00a007d003040007,0x001007d003000000\n"
".quad 0x801000d00d000001,0x8030032e0d0423c7,0x80d091060de40007,0x803002060d044007\n"
".quad 0x802000080dc41007,0x80000206050400c7,0x032501f80dc00007,0x8004001801000000\n"
".quad 0x02f0000001e420c7,0x00861ffe03e00000,0xc8d00b05fd000000,0x00a008a003040007\n"
".quad 0x001008a003000000,0x801000d00d000001,0x8030032e0d0423c7,0x80d091060de40007\n"
".quad 0x803002060d044007,0x802000080dc41007,0x80000206050400c7,0x032501f80dc00007\n"
".quad 0x8004001801000000,0x02f0000001e420c7,0x00861ffe03e00000,0xc8d00c05fd000000\n"
".quad 0x00a0097003040007,0x0010097003000000,0x801000d00d000001,0x8030032e0d0423c7\n"
".quad 0x80d091060de40007,0x803002060d044007,0x802000080dc41007,0x80000206050400c7\n"
".quad 0x032501f80dc00007,0x8004001801000000,0x02f0000001e420c7,0x00861ffe03e00000\n"
".quad 0xc8d00d05fd000000,0x00a00a4003040007,0x00100a4003000000,0x801000d00d000001\n"
".quad 0x8030032e0d0423c7,0x80d091060de40007,0x803002060d044007,0x802000080dc41007\n"
".quad 0x80000206050400c7,0x032501f80dc00007,0x8004001801000000,0x02f0000001e420c7\n"
".quad 0x00861ffe03e00000,0xc8d00e05fd000000,0x00a00b1003040007,0x00100b1003000000\n"
".quad 0x801000d00d000001,0x8030032e0d0423c7,0x80d091060de40007,0x803002060d044007\n"
".quad 0x802000080dc41007,0x80000206050400c7,0x032501f80dc00007,0x8004001801000000\n"
".quad 0x02f0000001e420c7,0x00861ffe03e00000,0xc8d00f05fd000000,0x00a00be003040007\n"
".quad 0x00100be003000000,0x801000d00d000001,0x8030032e0d0423c7,0x80d091060de40007\n"
".quad 0x803002060d044007,0x802000080dc41007,0x80000206050400c7,0x032501f80dc00007\n"
".quad 0x8004001801000000,0x02f0000001e420c7,0x00861ffe03e00000,0xc8d01005fd000000\n"
".quad 0x00a00cb003040007,0x00100cb003000000,0x801000d00d000001,0x8030032e0d0423c7\n"
".quad 0x80d091060de40007,0x803002060d044007,0x802000080dc41007,0x80000206050400c7\n"
".quad 0x032501f80dc00007,0x8004001801000000,0x02f0000001e420c7,0x00861ffe03e00000\n"
".quad 0xc8d01105fd000000,0x00a00d8003040007,0x00100d8003000000,0x801000d00d000001\n"
".quad 0x8030032e0d0423c7,0x80d091060de40007,0x803002060d044007,0x802000080dc41007\n"
".quad 0x80000206050400c7,0x032501f80dc00007,0x8004001801000000,0x02f0000001e420c7\n"
".quad 0x00861ffe03e00000,0xc8d01205fd000000,0x00a00e5003040007,0x00100e5003000000\n"
".quad 0x801000d00d000001,0x8030032e0d0423c7,0x80d091060de40007,0x803002060d044007\n"
".quad 0x802000080dc41007,0x80000206050400c7,0x032501f80dc00007,0x8004001801000000\n"
".quad 0x02f0000001e420c7,0x00861ffe03e00000,0xc8d01305fd000000,0x00a00f2003040007\n"
".quad 0x00100f2003000000,0x801000d00d000001,0x8030032e0d0423c7,0x80d091060de40007\n"
".quad 0x803002060d044007,0x802000080dc41007,0x80000206050400c7,0x032501f80dc00007\n"
".quad 0x8004001801000000,0x02f0000001e420c7,0x00861ffe03e00000,0xc8d01405fd000000\n"
".quad 0x00a00ff003040007,0x00100ff003000000,0x801000d00d000001,0x8030032e0d0423c7\n"
".quad 0x80d091060de40007,0x803002060d044007,0x802000080dc41007,0x80000206050400c7\n"
".quad 0x032501f80dc00007,0x8004001801000000,0x02f0000001e420c7,0x00861ffe03e00000\n"
".quad 0xc8d01505fd000000,0x00a010c003040007,0x001010c003000000,0x801000d00d000001\n"
".quad 0x8030032e0d0423c7,0x80d091060de40007,0x803002060d044007,0x802000080dc41007\n"
".quad 0x80000206050400c7,0x032501f80dc00007,0x8004001801000000,0x02f0000001e420c7\n"
".quad 0x00861ffe03e00000,0xc8d01605fd000000,0x00a0119003040007,0x0010119003000000\n"
".quad 0x801000d009000001,0x8030022e090423c7,0x80d0910409e40007,0x8030020409044007\n"
".quad 0x8020000809c41007,0x8000020405040087,0x032501f809c00007,0x8004001801000000\n"
".quad 0x02f0000001e42087,0x00861ffe03e00000,0x0320108a15000000,0xc830050dfd000000\n"
".quad 0x8010043003640107,0x8230020009000002,0xc8309105fde41007,0x8030000003644107\n"
".quad 0x803002040d000002,0x80d0850001c41007,0x8060920405044007,0x0420008608604047\n"
".quad 0x8000020405200180,0x8030020209c00007,0x072000860dc41007,0x801400d801000000\n"
".quad 0x80210004090423c7,0xc8309307fd078007,0x80d00e04016440c7,0xc320008205a0c007\n"
".quad 0x80d4020005000000,0x8010126003200007,0x01f0000001000002,0x0f000003ffe00000\n"
".quad 0x0100010000000000,0x0300000002000000,0x0500000004000000,0x0700000006000000\n"
".quad 0x0900000008000000,0x0b0000000a000000,0x0d0000000c000000,0xff0000000e000000\n"
".quad 0xfc000000c0000000,0x0000100b04000003,0x0c00000008000000,0x0300000010000000\n"
".quad 0xff000c1704001418,0x0000100003ffffff,0xff000c17040013f0,0x00000c0002ffffff\n"
".quad 0xff000c17040013f0,0x0000080001ffffff,0xff000c17040013f0,0x0000000000ffffff\n"
".quad 0x1000080d040023f0,0x0500000020002201,0x0d0aaaaaab102b80,0x0104000780a00000\n"
".quad 0x0900000780400606,0x01c4100780301000,0xfde4100780301000,0xfd000087d8600605\n"
".quad 0x15000087c8600605,0x0504200780a0004c,0x01041f1780304000,0x11041f0780304000\n"
".quad 0x09c410078030040a,0x05e4100780300702,0x09e4100780300700,0x0104010780200004\n"
".quad 0x0504400780d08200,0x11c4100780300602,0x09c4100780300704,0x01c4100780300604\n"
".quad 0x1904004780200000,0x1dc4100780300b0a,0x04c4100780300a0a,0x1820408600200288\n"
".quad 0x012001800820078c,0x1104400780d08106,0x05000000c320008c,0xfde4100780300406\n"
".quad 0x016400c7c8300209,0x0360400780608002,0x0500000000a00290,0x030403c780100004\n"
".quad 0x2100000280100290,0x1d00000003200480,0x05c4100780300202,0x1dc0000780000210\n"
".quad 0x210780078021000e,0x0980c00780d00e0e,0x010000000f200084,0xfde4220780060198\n"
".quad 0x1d640107c8300209,0x030000003320008e,0x0100000280100230,0x03e0000002f00000\n"
".quad 0x1100000000861ffe,0x1d00000003405106,0x0900000003201088,0xfd640107d030040e\n"
".quad 0x030c0147c8a00005,0x0900000000a003a0,0x030403c780100008,0x21000011001003a0\n"
".quad 0x0500000003200484,0x21c0000780000210,0x210403c7801000f8,0x11042207802400c0\n"
".quad 0x0100000003200188,0xfde4220780060002,0x03640147d8300709,0x0100001280100350\n"
".quad 0x03e0000002f00000,0x0900000000861ffe,0x21c0000780000204,0x1100000003200484\n"
".quad 0x050423c7801800e6,0x01c0000780000210,0x03e4210780080028,0x2100000000861ffe\n"
".quad 0x1100000003101180,0x2504020780204004,0xfd00000003201088,0x096c00c7d8307c13\n"
".quad 0x11c0000780000208,0x110423d5001800e8,0x030403d2801000f8,0x1100000000861ffe\n"
".quad 0x01042107802400e0,0x03e4210780040020,0x2100000000861ffe,0xfdc4100780300110\n"
".quad 0x036c40c7d8308311,0x1100001280100430,0xfd0fffffff203f84,0x116c00c7d8307c09\n"
".quad 0x1140001500040000,0x0904411500210008,0x11c0001500000008,0x110423d5001800c0\n"
".quad 0x030403d2801000f8,0x0300000000a005e0,0x21000001001005e0,0x09042107802400c0\n"
".quad 0x0100000003200184,0xfde4220780060002,0x03640147c8300705,0x0100000280100590\n"
".quad 0x03e0000002f00000,0x0900000000861ffe,0x09c410078030080a,0x0900000013200084\n"
".quad 0x11e4100780300404,0x09c4100780300704,0x09c4100780300604,0x0504008780200008\n"
".quad 0xfd00000003200182,0x036400c7c8300105,0x0300000000a00750,0x1100000280100750\n"
".quad 0x0100000003200480,0x05c4100780300202,0x11c0000780000208,0x0107800780210000\n"
".quad 0x050423c7801400c0,0x010000000f200082,0xfda0c00780d00e08,0x05640107c8300105\n"
".quad 0x1120000780d40660,0x0300000033200088,0xfd000002801006e0,0x03640147ca307c07\n"
".quad 0x0100000280300000,0x05c410078030020a,0x0920000780d06618,0x0107804780210000\n"
".quad 0x050423c7801400c0,0x01c410078030020c,0x09a0c00780d00e04,0x0100000003100080\n"
".quad 0x0907800780210002,0x11a0c00781d00e00,0x800000000f000000,0xfc00000cbfffffff\n"
".quad 0x0800080d04ffffff,0x1100000020002101,0x01040007c0a00000,0xfde43f0500000818\n"
".quad 0x01644107c8308009,0x01c4100500300208,0x0107804500210000,0x0580c00500d00e00\n"
".quad 0x01c0000500000208,0x03e420050004081a,0x0100000000861ffe,0x0d6c40c7c0308108\n"
".quad 0x0900000003100180,0x0104400780d08200,0x150400c780204008,0x156c018780307c00\n"
".quad 0xfd2c014780a0000a,0x05040007d8d0020b,0x05c0000780000200,0x0120001680d42060\n"
".quad 0x010423d6801400c0,0x030403d1001000f8,0x0500000000861ffe,0x09c0000680000208\n"
".quad 0x0120000680d42060,0x01042006802800c0,0x03e4200680040818,0x0d00000000861ffe\n"
".quad 0xfdc4100780300106,0x036c40c7d8308107,0x09000012801000c0,0x01e4100780300208\n"
".quad 0x1504200780a0004c,0x1904400780d08308,0x0d04400780d08508,0x0960400780608404\n"
".quad 0x0d0401878020000a,0xfdc4100780300206,0x0d6c4107c8308605,0x030400c78020000a\n"
".quad 0x0300000000a00430,0x1500000280100430,0x1900000003200c84,0x05c4100780300206\n"
".quad 0x15c000078000020a,0x1d0780078021000c,0x2180c00780d00e0a,0x2504114780a00006\n"
".quad 0x190aaaaaab102b80,0x1900000780401320,0x29000187c0601222,0x19c410078030100c\n"
".quad 0xfde410078030100c,0x19000287d8601221,0x190441c88021000c,0x190c019780601322\n"
".quad 0xfdec100780300b0c,0x216c0047c8307c07,0x190000000330008c,0x090403c280100010\n"
".quad 0x09c000078000020c,0x1920000780d82060,0x090421c7802800c0,0x0100000007200084\n"
".quad 0xfde4218780060080,0x0d6c40c7c8308605,0x15000000c3200086,0x030000030320008a\n"
".quad 0x01000002801002c0,0x03e0000002f00000,0x0300000000861ffe,0x0900000000861ffe\n"
".quad 0x190423c7801000d2,0x0d0aaaaaab102b80,0x0d00000780400d08,0x150000c7c0600c0a\n"
".quad 0x0dc4100780301006,0xfde4100780301006,0x0d000147d8600c09,0x1d0441c880210006\n"
".quad 0x15c4100780300200,0x01e4100780300408,0x0d0c00d780600d0a,0x090401c78020000a\n"
".quad 0x01e4100780300700,0x0100000780400708,0x010000078060060a,0x0dc4100780301000\n"
".quad 0x0100000780600608,0x1804400780d08108,0xfd20038010200286,0x03640187c8300609\n"
".quad 0x1d00000280300000,0x216c008780307c00,0x256c408780308200,0x296c408780308800\n"
".quad 0x2d6c408780308300,0x316c408780308900,0x356c408780308a00,0x396c408780308b00\n"
".quad 0x3d6c408780308c00,0x416c408780308d00,0x456c408780308e00,0x496c408780308f00\n"
".quad 0x4d6c408780309000,0x0d6c408780309100,0x096c408780309200,0x016c408780308000\n"
".quad 0x1d6c408780308100,0x2104400780d0820e,0x2504400780d08210,0x2904400780d08212\n"
".quad 0x2d04400780d08214,0x3104400780d08216,0x3504400780d08218,0x3904400780d0821a\n"
".quad 0x3d04400780d0821c,0x4104400780d0821e,0x4504400780d08220,0x4904400780d08222\n"
".quad 0x4d04400780d08224,0x5104400780d08226,0x5504400780d08206,0x5904400780d08204\n"
".quad 0x0104400780d08200,0xfd642107d03004d0,0x090c0147c8a00001,0x09c4101680300308\n"
".quad 0x01042096802000c8,0x0180801680d00e04,0x5d0403d1001000f8,0x5d0403c7801000f8\n"
".quad 0xfd2440c280100004,0x03040007c8d0072f,0x0300000000a00920,0x0900000100100920\n"
".quad 0x090423c7801000d4,0x09e4000780300200,0x0904400780d09304,0x09c4100780300204\n"
".quad 0x050400878020000a,0x09c0000780000204,0x61000000032501f8,0x01c43007803403d8\n"
".quad 0x08e4208780040018,0x611000820c100080,0x09042607802000cc,0x01a0800780d00e30\n"
".quad 0x03e0000002f00000,0xfd00000000861ffe,0x03040007c8d0082f,0x0300000000a00a30\n"
".quad 0x0900000100100a30,0x090423c7801000d4,0x09e4000780300200,0x0904400780d09304\n"
".quad 0x09c4100780300204,0x050400878020000a,0x09c0000780000204,0x61000000032501f8\n"
".quad 0x01c43007803403d8,0x08e4208780040018,0x611000820c100080,0x09042607802000cc\n"
".quad 0x01a0800780d00e30,0x03e0000002f00000,0xfd00000000861ffe,0x03040007c8d0092f\n"
".quad 0x0300000000a00b40,0x0900000100100b40,0x090423c7801000d4,0x09e4000780300200\n"
".quad 0x0904400780d09304,0x09c4100780300204,0x050400878020000a,0x09c0000780000204\n"
".quad 0x61000000032501f8,0x01c43007803403d8,0x08e4208780040018,0x611000820c100080\n"
".quad 0x09042607802000cc,0x01a0800780d00e30,0x03e0000002f00000,0xfd00000000861ffe\n"
".quad 0x03040007c8d00a2f,0x0300000000a00c50,0x0900000100100c50,0x090423c7801000d4\n"
".quad 0x09e4000780300200,0x0904400780d09304,0x09c4100780300204,0x050400878020000a\n"
".quad 0x09c0000780000204,0x61000000032501f8,0x01c43007803403d8,0x08e4208780040018\n"
".quad 0x611000820c100080,0x09042607802000cc,0x01a0800780d00e30,0x03e0000002f00000\n"
".quad 0xfd00000000861ffe,0x03040007c8d00b2f,0x0300000000a00d60,0x0900000100100d60\n"
".quad 0x090423c7801000d4,0x09e4000780300200,0x0904400780d09304,0x09c4100780300204\n"
".quad 0x050400878020000a,0x09c0000780000204,0x61000000032501f8,0x01c43007803403d8\n"
".quad 0x08e4208780040018,0x611000820c100080,0x09042607802000cc,0x01a0800780d00e30\n"
".quad 0x03e0000002f00000,0xfd00000000861ffe,0x03040007c8d00c2f,0x0300000000a00e70\n"
".quad 0x0900000100100e70,0x090423c7801000d4,0x09e4000780300200,0x0904400780d09304\n"
".quad 0x09c4100780300204,0x050400878020000a,0x09c0000780000204,0x61000000032501f8\n"
".quad 0x01c43007803403d8,0x08e4208780040018,0x611000820c100080,0x09042607802000cc\n"
".quad 0x01a0800780d00e30,0x03e0000002f00000,0xfd00000000861ffe,0x03040007c8d00d2f\n"
".quad 0x0300000000a00f80,0x0900000100100f80,0x090423c7801000d4,0x09e4000780300200\n"
".quad 0x0904400780d09304,0x09c4100780300204,0x050400878020000a,0x09c0000780000204\n"
".quad 0x61000000032501f8,0x01c43007803403d8,0x08e4208780040018,0x611000820c100080\n"
".quad 0x09042607802000cc,0x01a0800780d00e30,0x03e0000002f00000,0xfd00000000861ffe\n"
".quad 0x03040007c8d00e2f,0x0300000000a01090,0x0900000100101090,0x090423c7801000d4\n"
".quad 0x09e4000780300200,0x0904400780d09304,0x09c4100780300204,0x050400878020000a\n"
".quad 0x09c0000780000204,0x61000000032501f8,0x01c43007803403d8,0x08e4208780040018\n"
".quad 0x611000820c100080,0x09042607802000cc,0x01a0800780d00e30,0x03e0000002f00000\n"
".quad 0xfd00000000861ffe,0x03040007c8d00f2f,0x0300000000a011a0,0x09000001001011a0\n"
".quad 0x090423c7801000d4,0x09e4000780300200,0x0904400780d09304,0x09c4100780300204\n"
".quad 0x050400878020000a,0x09c0000780000204,0x61000000032501f8,0x01c43007803403d8\n"
".quad 0x08e4208780040018,0x611000820c100080,0x09042607802000cc,0x01a0800780d00e30\n"
".quad 0x03e0000002f00000,0xfd00000000861ffe,0x03040007c8d0102f,0x0300000000a012b0\n"
".quad 0x09000001001012b0,0x090423c7801000d4,0x09e4000780300200,0x0904400780d09304\n"
".quad 0x09c4100780300204,0x050400878020000a,0x09c0000780000204,0x61000000032501f8\n"
".quad 0x01c43007803403d8,0x08e4208780040018,0x611000820c100080,0x09042607802000cc\n"
".quad 0x01a0800780d00e30,0x03e0000002f00000,0xfd00000000861ffe,0x03040007c8d0112f\n"
".quad 0x0300000000a013c0,0x09000001001013c0,0x090423c7801000d4,0x09e4000780300200\n"
".quad 0x0904400780d09304,0x09c4100780300204,0x050400878020000a,0x09c0000780000204\n"
".quad 0x61000000032501f8,0x01c43007803403d8,0x08e4208780040018,0x611000820c100080\n"
".quad 0x09042607802000cc,0x01a0800780d00e30,0x03e0000002f00000,0xfd00000000861ffe\n"
".quad 0x03040007c8d0122f,0x0300000000a014d0,0x09000001001014d0,0x090423c7801000d4\n"
".quad 0x09e4000780300200,0x0904400780d09304,0x09c4100780300204,0x050400878020000a\n"
".quad 0x09c0000780000204,0x61000000032501f8,0x01c43007803403d8,0x08e4208780040018\n"
".quad 0x611000820c100080,0x09042607802000cc,0x01a0800780d00e30,0x03e0000002f00000\n"
".quad 0xfd00000000861ffe,0x03040007c8d0132f,0x0300000000a015e0,0x09000001001015e0\n"
".quad 0x090423c7801000d4,0x09e4000780300200,0x0904400780d09304,0x09c4100780300204\n"
".quad 0x050400878020000a,0x09c0000780000204,0x61000000032501f8,0x01c43007803403d8\n"
".quad 0x08e4208780040018,0x611000820c100080,0x09042607802000cc,0x01a0800780d00e30\n"
".quad 0x03e0000002f00000,0xfd00000000861ffe,0x03040007c8d0142f,0x0300000000a016f0\n"
".quad 0x09000001001016f0,0x090423c7801000d4,0x09e4000780300200,0x0904400780d09304\n"
".quad 0x09c4100780300204,0x050400878020000a,0x09c0000780000204,0x61000000032501f8\n"
".quad 0x01c43007803403d8,0x08e4208780040018,0x611000820c100080,0x09042607802000cc\n"
".quad 0x01a0800780d00e30,0x03e0000002f00000,0xfd00000000861ffe,0x03040007c8d0152f\n"
".quad 0x0300000000a01800,0x0900000100101800,0x090423c7801000d4,0x09e4000780300200\n"
".quad 0x0904400780d09304,0x09c4100780300204,0x050400878020000a,0x09c0000780000204\n"
".quad 0x61000000032501f8,0x01c43007803403d8,0x08e4208780040018,0x611000820c100080\n"
".quad 0x09042607802000cc,0x01a0800780d00e30,0x03e0000002f00000,0xfd00000000861ffe\n"
".quad 0x03040007c8d0162f,0x0300000000a01910,0x0900000100101910,0x090423c7801000d4\n"
".quad 0x09e4000780300200,0x0904400780d09304,0x09c4100780300204,0x050400878020000a\n"
".quad 0x0dc0000780000204,0x09000000032501f8,0x01c43007803403d8,0x0ce420c780040018\n"
".quad 0x092102ec5c100082,0x090403c780100000,0x01a0800780d00e2e,0x03e0000002f00000\n"
".quad 0x1100000000861ffe,0xfd00000003201088,0x03640047c8300609,0x01000002801007b0\n"
".quad 0x0ee0000001f00000,0x010000000f000000,0x3000000003000000,0xfffffffffc000000\n"
".quad 0x0200010000000003,0x0500000004000000,0x0700000006000000,0x0900000008000000\n"
".quad 0x0b0000000a000000,0x0d0000000c000000,0x04000000ff000000,0x080000000000140b\n"
".quad 0x1400000010000000,0x0300000018000000,0xff000c1704001c18,0x0000180004ffffff\n"
".quad 0xff000c17040013f0,0x0000140003ffffff,0xff000c17040013f0,0x0000100002ffffff\n"
".quad 0xff000c17040013f0,0x0000080001ffffff,0xff000c17040023f0,0x0000000000ffffff\n"
".quad 0x0800080d040023f0,0x0000000020002101,0x0000000000000000,0x0100000000000000\n"
".quad 0x0400000018000000,0x0100000000000000,0x0000000017000000,0x0000000500000006\n"
".quad 0x0000000000002638,0x0000000000000000,0x0000000000000000,0x00000000000001f8\n"
".quad 0x00000000000001f8,0x0000000000000004,0x0000160560000000,0x0000000000000a3b\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000a34,0x0000000000000a34\n"
".quad 0x0000000000000004,0x0000160660000000,0x000000000000146f,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000030,0x0000000000000004\n"
".quad 0x0000150560000000,0x000000000000146f,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000420,0x0000000000000420,0x0000000000000004,0x0000150660000000\n"
".quad 0x000000000000188f,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000010,0x0000000000000004,0x0000140560000000,0x000000000000188f\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000d80,0x0000000000000d80\n"
".quad 0x0000000000000004,0x0000140660000000,0x000000000000260f,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000030,0x0000000000000004\n"
".quad 0x0000000500000001,0x000000000000260f,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000028,0x0000000000000028,0x0000000000000004,0x0000000600000001\n"
".quad 0x0000000000002637,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000030040,0x0000000000000004,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_10$[1287];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_10",(char*)__deviceText_$compute_10$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_10", (char*)__deviceText_$sm_10$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_10$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0xa14f518d,(char*)"efd473318abd0e82",(char*)"/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0xb0b39487,&__elfEntries1};
# 3 "/tmp/tmpxft_00000c41_00000000-1_radixsort_kernel.cudafe1.stub.c" 2
struct __T20 {KeyValuePair *__par0;uint __par1;uint __par2;uint __par3;int __dummy_field;};
struct __T21 {KeyValuePair *__par0;KeyValuePair *__par1;uint __par2;uint __par3;int __par4;int __dummy_field;};
extern void __device_stub__Z8RadixSumP12KeyValuePairjjj(KeyValuePair *, uint, uint, uint);
extern void __device_stub__Z14RadixPrefixSumv(void);
extern void __device_stub__Z25RadixAddOffsetsAndShuffleP12KeyValuePairS0_jji(KeyValuePair *, KeyValuePair *, uint, uint, int);
static void __sti____cudaRegisterAll_51_tmpxft_00000c41_00000000_4_radixsort_kernel_cpp1_ii_3d289150(void) __attribute__((__constructor__));
void __device_stub__Z8RadixSumP12KeyValuePairjjj(KeyValuePair *__par0, uint __par1, uint __par2, uint __par3){ struct __T20 *__T22 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T22->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T22->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T22->__par2) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T22->__par3) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(KeyValuePair *, uint, uint, uint))RadixSum)); (void)cudaLaunch(((char *)((void ( *)(KeyValuePair *, uint, uint, uint))RadixSum))); };}
void RadixSum( KeyValuePair *__cuda_0,uint __cuda_1,uint __cuda_2,uint __cuda_3)
# 102 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
{__device_stub__Z8RadixSumP12KeyValuePairjjj( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 244 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
}
# 1 "/tmp/tmpxft_00000c41_00000000-1_radixsort_kernel.cudafe1.stub.c"
void __device_stub__Z14RadixPrefixSumv(void) {
{ volatile static char *__f; __f = ((char *)((void ( *)(void))RadixPrefixSum)); (void)cudaLaunch(((char *)((void ( *)(void))RadixPrefixSum))); }; }
void RadixPrefixSum(void)
# 252 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
{__device_stub__Z14RadixPrefixSumv();
# 360 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
}
# 1 "/tmp/tmpxft_00000c41_00000000-1_radixsort_kernel.cudafe1.stub.c"
void __device_stub__Z25RadixAddOffsetsAndShuffleP12KeyValuePairS0_jji( KeyValuePair *__par0, KeyValuePair *__par1, uint __par2, uint __par3, int __par4) { struct __T21 *__T23 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T23->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T23->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T23->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T23->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T23->__par4) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(KeyValuePair *, KeyValuePair *, uint, uint, int))RadixAddOffsetsAndShuffle)); (void)cudaLaunch(((char *)((void ( *)(KeyValuePair *, KeyValuePair *, uint, uint, int))RadixAddOffsetsAndShuffle))); }; }
void RadixAddOffsetsAndShuffle( KeyValuePair *__cuda_0,KeyValuePair *__cuda_1,uint __cuda_2,uint __cuda_3,int __cuda_4)
# 375 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
{__device_stub__Z25RadixAddOffsetsAndShuffleP12KeyValuePairS0_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 573 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/particles/radixsort_kernel.cu"
}
# 1 "/tmp/tmpxft_00000c41_00000000-1_radixsort_kernel.cudafe1.stub.c"
static void __sti____cudaRegisterAll_51_tmpxft_00000c41_00000000_4_radixsort_kernel_cpp1_ii_3d289150(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(KeyValuePair *, KeyValuePair *, uint, uint, int))RadixAddOffsetsAndShuffle), (char*)"_Z25RadixAddOffsetsAndShuffleP12KeyValuePairS0_jji", "_Z25RadixAddOffsetsAndShuffleP12KeyValuePairS0_jji", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(void))RadixPrefixSum), (char*)"_Z14RadixPrefixSumv", "_Z14RadixPrefixSumv", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(KeyValuePair *, uint, uint, uint))RadixSum), (char*)"_Z8RadixSumP12KeyValuePairjjj", "_Z8RadixSumP12KeyValuePairjjj", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&dRadixSum, (char*)"dRadixSum", "dRadixSum", 0, 196608, 0, 0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&dRadixBlockSum, (char*)"dRadixBlockSum", "dRadixBlockSum", 0, 64, 0, 0); }
# 1 "/tmp/tmpxft_00000c41_00000000-1_radixsort_kernel.cudafe1.stub.c" 2