#include "stdint.h"
#include "tm4c123gh6pm.h"
#include "MCAL.h"

void DIO_WritePort(uint8_t port_index, uint8_t pins_mask, Dio_levelType pins_level){
	if (port_index == 0) // Port A
	{
	   GPIO_PORTA_DATA_R & pins_mask =  pins_level;
	}
	else if (port_index == 1) // Port B
	{
		GPIO_PORTB_DATA_R & pins_mask =  pins_level;
	}
	else if (port_index == 2) // Port C
	{
		GPIO_PORTC_DATA_R & pins_mask =  pins_level;
	}
	else if (port_index == 3) // Port D
	{
		GPIO_PORTD_DATA_R & pins_mask =  pins_level;
	}
	else if (port_index == 4) // Port E
	{
		GPIO_PORTE_DATA_R & pins_mask =  pins_level;
	}
	else if (port_index == 5) // Port f
	{
		GPIO_PORTF_DATA_R & pins_mask =  pins_level;
	}
}