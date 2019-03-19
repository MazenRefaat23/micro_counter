#include "stdint.h"
#include "tm4c123gh6pm.h"
#include "MCAL.h"

	
	
// delay milli n secounds
void delay (int n){
	int i, j;
	for(i=0;i<n;i++)
	for(j=0;j<3180;j++)
	{}
}

void pin_writer (uint8_t count1, uint8_t count2, uint8_t count3) {
	DIO_WritePort(1, count1 , STD_HIGH);  //output pins for 1st 7 segmant [port A]
	DIO_WritePort(3, count2 , STD_HIGH);  //output pins for 2nd 7 segmant [port B]
	DIO_WritePort(4, count3 , STD_HIGH);  //output pins for 3rd 7 segmant [port D]
	DIO_WritePort(1, ~count1 , STD_LOW);  //output pins for 1st 7 segmant [port A]
	DIO_WritePort(3, ~count2 , STD_LOW);  //output pins for 2nd 7 segmant [port B]
	DIO_WritePort(4, ~count3 , STD_LOW);  //output pins for 3rd 7 segmant [port D]
}


	
void initial() {

	Port_Init(1);  //init for port B
	Port_Init(3);  //init for port D
	Port_Init(4);  //init for port E
	
	Port_SetPinDirection (1, 0x0F, PORT_PIN_OUT);  //pin 7 6 set output for 1st 7 segmant [port A]
	Port_SetPinDirection (3, 0x0F, PORT_PIN_OUT);  //pin 0 1 set output for 1st 7 segmant [port B] pin 4 5 6 7 for 2nd 7 segment 
	Port_SetPinDirection (4, 0x0F, PORT_PIN_OUT);  //pin 0 1 2 3 set output for 3rd 7 segmant [port D]

	Port_SetPinDirection (1, 0x70, PORT_PIN_IN);	
	
	Port_SetPinPullUp (1, 0x70, 1);
	
	

}
	
	int main()
	{
				
		uint8_t count_1 ;
		uint8_t count_2 ;
		uint8_t count_3 ;
		uint8_t dummy ;
		
		uint8_t button_up;
		uint8_t button_down ;
		uint8_t reset  ;
		
		initial();
		
		count_1 = 0;
		count_2 = 0;
		count_3 = 0;
		
pin_writer (count_1, count_2, count_3);

	
		
		while(1)
		{
			reset = DIO_ReadPort(1, 0x40);
			delay(20);
			
			button_up = DIO_ReadPort(1, 0x10);
			delay(20);
			button_down = DIO_ReadPort(1, 0x20);
			delay(20);
			
			if (reset == 0){
				count_1 = 0;
				count_2 = 0;
				count_3 = 0;
				pin_writer (count_1, count_2, count_3);	
				while (reset == 0){reset = DIO_ReadPort(1, 0x40);delay(20);}
			}
			
			else {
			
			 if (button_up == 0){
				if (count_1==9){
					if(count_2==9) {
						if(count_3==9) {count_1=0; count_2=0; count_3=0;}
						else {
							count_3++;
							count_2=0;
							pin_writer (count_1, count_2, count_3);
							delay(200);
						}
					}
					else {
						count_2++;
						count_1=0;
						pin_writer (count_1, count_2, count_3);
						delay(200);
					}
				}
				else {
					count_1++;
					pin_writer (count_1, count_2, count_3);
					delay(200);
				}
							
			}
			
			else if (button_down == 0){
				
				if (count_1==0){
						if (count_2==0){
							if (count_3==0) {count_3=9;count_2=9;count_1=9;}
							else { 
										count_3--;
										count_2=9;
										pin_writer (count_1, count_2, count_3);								
							}
						}
						else {
							count_2--;
							count_1=9;
							pin_writer (count_1, count_2, count_3);
						}
					}
				else {
					count_1--;
					pin_writer (count_1, count_2, count_3);
				}
			while (button_down == 0){button_down = DIO_ReadPort(1, 0x20);delay(20);}
			}
		}
			
		}
		
	}
