#include <stdio.h>
#include <stdlib.h>

#include <nvidia_core.h>

void initNVML(void)
{
    /* Initialize GPU reading */
    nvmlReturn_t result = nvmlInit();
    nvmlDeviceGetCount(&m_total_unit_devices);
    m_unit_devices_file_desc = (nvmlDevice_t*) malloc(sizeof(nvmlDevice_t) * m_total_unit_devices);

    /* get handles to all devices */
    for(unsigned int d = 0; d < m_total_unit_devices; ++d) {
        int power;

        result = nvmlDeviceGetHandleByIndex(d, &m_unit_devices_file_desc[d]);
        if (result != NVML_SUCCESS) {
            printf("Error: Could not get GPU device handle.\n");
        }

        /* check to see whether we can read power */
        result = nvmlDeviceGetPowerUsage(m_unit_devices_file_desc[d], (unsigned int *)&power);
        if (result != NVML_SUCCESS) {
            //This needs to print an error with diagnostics and exit, but for now
            // it just prints an error and proceeds
            printf("Error: could not read power/initialize NVML\n");
        }
    }
}

void shutdownNVML(void)
{
    nvmlShutdown();
}

