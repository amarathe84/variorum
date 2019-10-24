#ifndef POWER9_H_INCLUDE
#define POWER9_H_INCLUDE

#include <sys/types.h>

int p9_get_power();
int p9_get_power_limits();
int p9_set_power_limit(int pcap_new);
int p9_set_and_verify_power_limit(int pcap_new);

#endif
