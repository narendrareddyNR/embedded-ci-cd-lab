#include <stdio.h>
#include "gpio.h"

void gpio_init(void)
{
    printf("GPIO initialized\n");
}

void gpio_toggle(void)
{
    printf("GPIO toggled\n");
}

void gpio_set_high(void)
{
    printf("GPIO HIGH\n");
}

void gpio_set_low(void)
{
    printf("GPIO LOW\n");
}
