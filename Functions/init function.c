#include "stdint.h"
#include "tm4c123gh6pm.h"
#include "MCAL.h"
 
void Port_Init (uint8_t  port_index)
{
	if (port_index == 0) // Port A
	{
		uint32_t delay;
	  SYSCTL_RCGCGPIO_R |= 0x01;
		delay = 1; //dummy variable
		GPIO_PORTA_LOCK_R = 0x4C4F434B;
		GPIO_PORTA_CR_R = 0xFF;
		GPIO_PORTA_AFSEL_R = 0;
		GPIO_PORTA_PCTL_R = 0;
		GPIO_PORTA_AMSEL_R = 0;
		GPIO_PORTA_DEN_R = 0xFF;
	}
	
	else if (port_index == 1) // Port B
	{
		uint32_t delay;
	  SYSCTL_RCGCGPIO_R |= 0x02;
		delay = 1; //dummy variable
		GPIO_PORTB_LOCK_R = 0x4C4F434B;
		GPIO_PORTB_CR_R = 0xFF;
		GPIO_PORTB_AFSEL_R = 0;
		GPIO_PORTB_PCTL_R = 0;
		GPIO_PORTB_AMSEL_R = 0;
		GPIO_PORTB_DEN_R = 0xFF;
	}
	else if (port_index == 2) // Port C
	{
		uint32_t delay;
	  SYSCTL_RCGCGPIO_R |= 0x04;
		delay = 1; //dummy variable
		GPIO_PORTC_LOCK_R = 0x4C4F434B;
		GPIO_PORTC_CR_R = 0xFF;
		GPIO_PORTC_AFSEL_R = 0;
		GPIO_PORTC_PCTL_R = 0;
		GPIO_PORTC_AMSEL_R = 0;
		GPIO_PORTC_DEN_R = 0xFF;
	}
	else if (port_index == 3) // Port D
	{
	  uint32_t delay;
	  SYSCTL_RCGCGPIO_R |= 0x08;
		delay = 1; //dummy variable
		GPIO_PORTD_LOCK_R = 0x4C4F434B;
		GPIO_PORTD_CR_R = 0xFF;
		GPIO_PORTD_AFSEL_R = 0;
		GPIO_PORTD_PCTL_R = 0;
		GPIO_PORTD_AMSEL_R = 0;
		GPIO_PORTD_DEN_R = 0xFF;
	}
	else if (port_index == 4) // Port E
	{
		uint32_t delay;
	  SYSCTL_RCGCGPIO_R |= 0x10;
		delay = 1; //dummy variable
		GPIO_PORTE_LOCK_R = 0x4C4F434B;
		GPIO_PORTE_CR_R = 0x3F;
		GPIO_PORTE_AFSEL_R = 0;
		GPIO_PORTE_PCTL_R = 0;
		GPIO_PORTE_AMSEL_R = 0;
		GPIO_PORTE_DEN_R = 0x3F;
	}
	else if (port_index == 5) // Port F
	{
		uint32_t delay;
	  SYSCTL_RCGCGPIO_R |= 0x20;
		delay = 1; //dummy variable
		GPIO_PORTF_LOCK_R = 0x4C4F434B;
		GPIO_PORTF_CR_R = 0x1F;
		GPIO_PORTF_AFSEL_R = 0;
		GPIO_PORTF_PCTL_R = 0;
		GPIO_PORTF_AMSEL_R = 0;
		GPIO_PORTF_DEN_R = 0x1F;
	}
}
