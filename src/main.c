#include <stdio.h>
#include "gpio.h"
#include "uart.h"

int main(void)
{
    printf("Embedded CI/CD Lab\n");
    printf("Firmware Version: 1.0\n");

    gpio_init();
    gpio_toggle();

    uart_init();

    uart_transmit("Hello from Developer B");

    printf("UART TX Count: %u\n", uart_get_tx_count());

    return 0;
}
