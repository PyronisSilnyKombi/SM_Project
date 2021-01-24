#include "encoder.h"

int encoder_count(int count)
{


	if(count!=old_count){
	user_val_encoder=1+count*250;
	}
	else
	{
		user_val_encoder=0;
	}

	old_count=count;

	return user_val_encoder;
}

