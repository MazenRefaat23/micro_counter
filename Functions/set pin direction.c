#include "stdint.h"
#include "tm4c123gh6pm.h"
#include "MCAL.h"
void Port_SetPinDirection (uint8_t port_index, uint8_t pins_mask, Port_PinDirectionType pins_direction )
{
	
	if(port_index == 0) // Port A
	{
if(pins_direction == PORT_PIN_IN)
{
GPIO_PORTA_DIR_R &= ~(pins_mask);
}
else if(pins_direction == PORT_PIN_OUT)
{
	GPIO_PORTA_DIR_R |= pins_mask;
}
	}
	
  else if(port_index == 1) // Port B
	{
if(pins_direction == PORT_PIN_IN)
{
GPIO_PORTB_DIR_R &= ~(pins_mask);
}
else if(pins_direction == PORT_PIN_OUT)
{
	GPIO_PORTB_DIR_R |= pins_mask;
}
	}
	
	else if(port_index == 2) // Port C
	{
if(pins_direction == PORT_PIN_IN)
{
GPIO_PORTC_DIR_R &= ~(pins_mask);
}
else if(pins_direction == PORT_PIN_OUT)
{
	GPIO_PORTC_DIR_R |= pins_mask;
}
	}
	
		else if(port_index == 3) // Port D
	{
if(pins_direction == PORT_PIN_IN)
{
GPIO_PORTD_DIR_R &= ~(pins_mask);
}
else if(pins_direction == PORT_PIN_OUT)
{
	GPIO_PORTD_DIR_R |= pins_mask;
}
	}

		else if(port_index == 4) // Port E
	{
if(pins_direction == PORT_PIN_IN)
{
GPIO_PORTE_DIR_R &= ~(pins_mask);
}
else if(pins_direction == PORT_PIN_OUT)
{
	GPIO_PORTE_DIR_R |= pins_mask;
}
	}
	
		else if(port_index == 5) // Port F
	{
if(pins_direction == PORT_PIN_IN)
{
GPIO_PORTF_DIR_R &= ~(pins_mask);
}
else if(pins_direction == PORT_PIN_OUT)
{
	GPIO_PORTF_DIR_R |= pins_mask;
}
	}	
}
int main ()
{
	return 0;
}
