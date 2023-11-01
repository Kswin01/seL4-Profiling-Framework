#pragma once

#define UDP_ECHO_PORT 1235
#define UTILIZATION_PORT 1236

#define LINK_SPEED 1000000000 // Gigabit
#define ETHER_MTU 1500
#define NUM_BUFFERS 512
#define BUF_SIZE 2048

int setup_utilization_socket(void);