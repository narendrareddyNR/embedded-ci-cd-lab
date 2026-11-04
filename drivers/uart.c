#include <stdio.h>
#include <stddef.h>
#include "uart.h"

static unsigned int uart_tx_count = 0;

void uart_init(void)
{
    uart_tx_count = 0;
    printf("UART initialized\n");
}

void uart_transmit(const char *data)
{
    if (data == NULL)
    {
        return;
    }

    printf("UART TX: %s\n", data);
    uart_tx_count++;
}

unsigned int uart_get_tx_count(void)
{
    return uart_tx_count;
}
