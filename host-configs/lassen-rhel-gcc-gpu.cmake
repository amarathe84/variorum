# c compiler
#set(CMAKE_C_COMPILER "/usr/tce/packages/clang/clang-coral-2018.08.08/bin/clang" CACHE PATH "")
set(CMAKE_C_COMPILER "gcc" CACHE PATH "")

# cpp compiler
#set(CMAKE_CXX_COMPILER "/usr/tce/packages/clang/clang-coral-2018.08.08/bin/clang++" CACHE PATH "")
set(CMAKE_CXX_COMPILER "g++" CACHE PATH "")

set(BUILD_DOCS OFF CACHE BOOL "")
set(BUILD_TESTS OFF CACHE BOOL "")

set(VARIORUM_WITH_AMD OFF CACHE BOOL "")
set(VARIORUM_WITH_NVIDIA ON CACHE BOOL "")
set(VARIORUM_WITH_IBM OFF CACHE BOOL "")
set(VARIORUM_WITH_INTEL OFF CACHE BOOL "")

# You need to load CUDA 9.2.* to build this on Lassen
# because hwloc was built with CUDA 9.2.* and not the default CUDA version (10.1.*)
set(CMAKE_SHARED_LINKER_FLAGS "-L/usr/tce/packages/cuda/cuda-10.1.243/nvidia/targets/ppc64le-linux/lib/stubs/ -lnvidia-ml" CACHE PATH "")

# This may need to be in a FindNVCC.cmake file in the future for 
# linking with applications that compile with nvcc.
#set(NVCC_COMPILER "/usr/tce/packages/cuda/cuda-10.1.168/bin/nvcc" CACHE PATH "")

# path to global hwloc install
set(HWLOC_DIR "/usr/global/tools/hwloc/blueos_3_ppc64le_ib/hwloc-1.11.10-cuda/" CACHE PATH "")
