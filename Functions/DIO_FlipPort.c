#include "MCAL.h"
#include "stdint.h"

void DIO_FlipPort(uint8_t port_index, uint8_t pins_mask)
{
	port_index ^= pins_mask; //toggle the value of the pins selected by pins_masks in the port selected by port_index
}
