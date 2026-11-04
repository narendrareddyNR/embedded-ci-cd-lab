#ifndef UART_H
#define UART_H

void uart_init(void);
void uart_transmit(const char *data);
unsigned int uart_get_tx_count(void);

#endif
