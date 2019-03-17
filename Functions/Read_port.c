#include "stdint.h"
#include "tm4c123gh6pm.h"
#include "MCAL.h"

int DIO_ReadPort(uint8_t port_index, uint8_t pins_mask){
	if (port_index == 0) // Port A
	{
	   pins_level = GPIO_PORTA_DATA_R & pins_mask;
	}
	else if (port_index == 1) // Port B
	{
		pins_level = GPIO_PORTB_DATA_R & pins_mask;
	}
	else if (port_index == 2) // Port C
	{
		pins_level = GPIO_PORTC_DATA_R & pins_mask;
	}
	else if (port_index == 3) // Port D
	{
		pins_level = GPIO_PORTD_DATA_R & pins_mask;
	}
	else if (port_index == 4) // Port E
	{
		pins_level = GPIO_PORTE_DATA_R & pins_mask;
	}
	else if (port_index == 5) // Port f
	{
		pins_level = GPIO_PORTF_DATA_R & pins_mask;
	}
	return pins_level;
}