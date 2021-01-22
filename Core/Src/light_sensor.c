#include "light_sensor.h"


void sensor_init(HAL_StatusTypeDef status, const uint8_t x1, const uint8_t x2, const uint8_t x3){
	uint8_t command = x1;
	status = HAL_I2C_Master_Transmit(&hi2c1, x3, &command, 1, 100);
	command = x2;
	status = HAL_I2C_Master_Transmit(&hi2c1, x3, &command, 1, 100);
return;
}

