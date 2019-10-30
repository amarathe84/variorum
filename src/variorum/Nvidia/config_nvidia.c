#include <stdio.h>
#include <stdlib.h>

#include <config_nvidia.h>
#include <config_architecture.h>
#include <Volta.h>
#include <variorum_error.h>

uint64_t *detect_gpu_arch(void)
{
    uint64_t *model =  (uint64_t *) malloc(sizeof(uint64_t));
    *model = 0;
    return model;
}

int set_nvidia_func_ptrs(void)
{
    int err = 0;
    //fprintf(stdout, "Entered %s\n", __FUNCTION__);

    if (*g_platform.ibm_arch == VOLTA)
    {
        g_platform.dump_power = volta_get_power;
    }
    else
    {
        return VARIORUM_ERROR_UNSUPPORTED_PLATFORM;
    }

    return err;
}
