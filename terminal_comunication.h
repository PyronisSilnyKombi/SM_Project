#ifndef INC_TERMINAL_COMUNICATION_H_
#define INC_TERMINAL_COMUNICATION_H_



#endif /* INC_TERMINAL_COMUNICATION_H_ */
#include "usart.h"
#include "tim.h"

char rx_buffer[15];
int received_val;

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void terminal_message(int lux_int);
