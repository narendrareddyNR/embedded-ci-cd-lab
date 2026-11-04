#include <stdio.h>
#include "gpio.h"

int main(void)
{
    printf("Embedded CI/CD Lab\n");

    gpio_init();

    while (1)
    {
        gpio_toggle();
        break;
    }

    return 0;
}
