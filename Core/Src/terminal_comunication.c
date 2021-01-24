#include "terminal_comunication.h"



void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){
	if (huart->Instance == USART3){
			if(rx_buffer[0] == 'V' && rx_buffer[1] == 'A' && rx_buffer[2] == 'L'){
				char liczba[5];
				for (int i=0; i<5; i++)
					liczba[i] = rx_buffer[i+3];
				received_val = (int) strtol(liczba, NULL, 10);
				char tx_buffer[25];
				int n = sprintf(tx_buffer, "SETPOINT : %d [lux] ", received_val);
				HAL_UART_Transmit(&huart3, (uint8_t*)tx_buffer, n, 1000);
				user_val_terminal=received_val;
				flag=1;
			}
		}
}

void terminal_message(int lux_int){
	if(trial_transmission==100){
	char tx_buffer[25];
	int n = sprintf(tx_buffer, "LIGHT INTENSITY: %d [lux]", lux_int);
	HAL_UART_Transmit(&huart3, (uint8_t*)tx_buffer, n, 1000);
	trial_transmission=0;
	}
}

int terminal_value(){
	if(flag==1){
		flag=0;
		return user_val_terminal;
	}
	else{
		return 0;
	}
}
