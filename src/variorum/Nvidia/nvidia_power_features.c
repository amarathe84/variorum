#include <stdio.h>
#include <stdlib.h>

#include <nvidia_power_features.h>
#include <variorum_error.h>
#include <nvidia_core.h>

void dump_power_data(FILE *writedest)
{
    unsigned int power;
    int m_num_package = 2;
    int gpus_per_socket = m_total_unit_devices / m_num_package;
    double value = 0.0;
    int device_index=1;

    //Iterate over all GPU device handles populated at init and print power
    for(device_index = 0; device_index < 2; device_index++) {
        for(int d = device_index * gpus_per_socket;
                d < (device_index + 1) * gpus_per_socket;
                ++d) {
            nvmlDeviceGetPowerUsage(m_unit_devices_file_desc[d], &power);
            value = 0.0f;
            value += (double)power * 0.001;
            sprintf(writedest, "Socket:%d, Device ID: %d, Power: %lf\n", device_index, d, value);
        }
    }
}
