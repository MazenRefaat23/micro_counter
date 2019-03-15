#ifndef MCAL
#define MCAL
#include "MCAL.h"
#include "stdint.h"

typedef enum {PORT_PIN_IN = 0, PORT_PIN_OUT = 1} Port_PinDirectionType;

/*MCAL Drivers*/

void Port_Init( uint8_t  port_index);
void Port_SetPinDirection (uint8_t port_index, uint8_t pins_mask, Port_PinDirectionType pins_direction );
void Port_SetPinPullUp (uint8_t port_index,uint8_t pins_mask,uint8_t enable);
void Port_SetPinPullDown (uint8_t port_index, uint8_t pins_mask, uint8_t enable);

#endif