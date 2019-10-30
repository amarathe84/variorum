#ifndef CONFIG_NVIDIA_H_INCLUDE
#define CONFIG_NVIDIA_H_INCLUDE

#include <inttypes.h>

uint64_t *detect_nvidia_arch(void);

int set_nvidia_func_ptrs(void);

#endif
