#ifndef MCAL_H
#define MCAL_H

#include "typedefs.h"

typedef enum {PORT_PIN_IN = 0, PORT_PIN_OUT = 1} Port_PinDirectionType; 

/*MCAL Drivers*/
void Port_Init(uint8 port_index);
void Pin_Init(uint8 port_index, uint8 Pin_Mask);
void Port_SetPinDirection(uint8 port_index, uint8 pins_mask, Port_PinDirectionType pins_direction);
void Port_SetPinPullUp(uint8 port_index, uint8 pins_mask, uint8 enable);
void Port_SetPinPulldown(uint8 port_index, uint8 pins_mask, uint8 enable);

#endif
