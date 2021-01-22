
#ifndef INC_LIGHT_SENSOR_H_
#define INC_LIGHT_SENSOR_H_



#endif /* INC_LIGHT_SENSOR_H_ */

#include "i2c.h"

#define BH1700_ADDRESS_L (0x23 << 1)
#define BH1700_ADDRESS_H (0x5C << 1)
#define BH1750_POWER_DOWN 				0x00
#define BH1750_POWER_ON 				0x01
#define BH1750_RESET 					0x07
#define BH1750_CONTIONIUS_H_RES_MODE 	0x10
#define BH1750_CONTIONIUS_H_RES_MODE2	0x11
#define BH1750_CONTIONIUS_L_RES_MODE 	0x13
#define BH1750_ONE_TIME_H_RES_MODE 		0x20
#define BH1750_ONE_TIME_H_RES_MODE2		0x21
#define BH1750_ONE_TIME_L_RES_MODE		0x23
HAL_StatusTypeDef  BH1750_Status;

int lux_int;
uint8_t data[2];

HAL_StatusTypeDef sensor_init();

HAL_StatusTypeDef sensor_read();
