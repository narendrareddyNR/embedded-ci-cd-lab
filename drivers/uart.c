#include <stdio.h>
#include "uart.h"

void uart_init(void)
{
    printf("UART initialized\n");
}

void uart_transmit(const char *data)
{
    printf("UART TX: %s\n", data);
}
