# c compiler
set(CMAKE_C_COMPILER "gcc" CACHE PATH "")

# cpp compiler
set(CMAKE_CXX_COMPILER "g++" CACHE PATH "")

# fortran compiler
set(CMAKE_Fortran_COMPILER  "gfortran" CACHE PATH "")

set(BUILD_DOCS OFF CACHE BOOL "")
set(BUILD_TESTS ON CACHE BOOL "")

set(VARIORUM_WITH_AMD OFF CACHE BOOL "")
set(VARIORUM_WITH_GPU OFF CACHE BOOL "")
set(VARIORUM_WITH_IBM ON CACHE BOOL "")
set(VARIORUM_WITH_INTEL OFF CACHE BOOL "")

set(NVCC_COMPILER "nvcc" CACHE PATH "")

# path to global hwloc install
set(HWLOC_DIR "/g/g92/marathe1/software/build" CACHE PATH "")
