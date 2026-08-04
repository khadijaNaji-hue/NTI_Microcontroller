
#include "STD_Types.h"
#include "Bit_Math.h"
#include "DIO_int.h"
//#include "LCD_int.h"
//#include "KEYPAD_int.h"
#include "GIE_int.h"
#include "EXT0_int.h"
#include "TIM0_int.h"
//#include "avr/delay.h"
#include <util/delay.h>
void OVCALLBACKFUN (void);
int main(void)
{
	DIO_voidInitialization();
	//LCD_voidIntialization();
	//KEYPAD_voidInitializaton();
	EXT0_voidInitilaization();
	TIM0_voidInitialization();


	GIE_voidEnable();
	TIM0_voidOVSetCallBack( OVCALLBACKFUN );
	TIM0_voidEnableOVInterrupt();
	TIM0_voidSetOVReg(155);
	DIO_voidSetPinValue (PORTAID ,PIN0, 1);
	while(1)
	{
	}
	return 0;
}
void OVCALLBACKFUN (void)
{
	static u8 count=0 ;
	count++;
	TIM0_voidSetOVReg(0);
	if(count==123)
	{
		DIO_voidTogglePin (PORTAID ,PIN0);
		 count=0;
		 TIM0_voidSetOVReg(155);
	}

}//SHOULD SET CODE FREQ TO 8MHZ
// AND SET MC AT PROUTOS TO 8MHZ FROM (CKSEL Fuses)

// TICK TIME = PRESCALLER / SYSTEM CLOCK = 256 / 8M = 0.000032
// 1 SEC = TICK TIME * COUNT
// COUNT = 1 SEC  / 0.000032 = 31,250
// RESOLUTION = 8
// OVERFLOW AT 255
// 31,250 / 255 = 123 WHIH START AT 155
