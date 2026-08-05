
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
	EXT0_voidInterruptEnable();
	DIO_voidSetPinValue (PORTCID ,PIN1, 1);
	DIO_voidSetPinValue (PORTCID ,PIN2, 1);
	EXT0_voidSetSignalCritera(ANY_LOGICAL_CHANGE_MODE);
	EXT0_voidSetCallBack (OVCALLBACKFUN);
	while(1)
	{//d3  --> c2
		if(DIO_u8GetPinValue(PORTDID , PIN3))
		{
			DIO_voidSetPinValue (PORTCID ,PIN2, 1);
		}else
		{
			DIO_voidSetPinValue (PORTCID ,PIN2, 0);
		}
	}
	return 0;
}
void OVCALLBACKFUN (void)
{
	        if(DIO_u8GetPinValue(PORTDID , PIN2))
			{
				DIO_voidSetPinValue (PORTCID ,PIN1, 1);
			}else
			{
				DIO_voidSetPinValue (PORTCID ,PIN1, 0);
			}
}
