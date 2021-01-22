#include "light_sensor.h"

HAL_StatusTypeDef sensor_init(){
	HAL_StatusTypeDef BH1750_Status1, BH1750_Status2;
	uint8_t command = BH1750_POWER_ON;
	BH1750_Status1 = HAL_I2C_Master_Transmit(&hi2c1, BH1700_ADDRESS_L, &command, 1, 100);
	command = BH1750_CONTIONIUS_H_RES_MODE;
	BH1750_Status2 = HAL_I2C_Master_Transmit(&hi2c1, BH1700_ADDRESS_L, &command, 1, 100);
	if(BH1750_Status1 == HAL_OK && BH1750_Status2 == HAL_OK)
		return HAL_OK;
	else
		 return HAL_ERROR;
}

HAL_StatusTypeDef sensor_read(){
	HAL_StatusTypeDef tmp = HAL_ERROR;
	tmp = HAL_I2C_Master_Receive(&hi2c1, BH1700_ADDRESS_L, data, 2, 100);
	lux_int = ((data[0] << 8) | data[1]) / 1.2;
	return tmp;
}
