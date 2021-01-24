#ifndef INC_TERMINAL_COMUNICATION_H_
#define INC_TERMINAL_COMUNICATION_H_



#endif /* INC_TERMINAL_COMUNICATION_H_ */
#include "usart.h"
#include "tim.h"

char rx_buffer[15];
int received_val;
int trial_transmission;
int user_val_terminal;
_Bool flag;

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void terminal_message(int lux_int);
int terminal_value();
