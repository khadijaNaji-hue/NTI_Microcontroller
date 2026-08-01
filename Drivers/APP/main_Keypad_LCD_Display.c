

#include "STD_Types.h"
#include "Bit_Math.h"
#include "DIO_int.h"
#include "LCD_int.h"
#include "KEYPAD_int.h"
//#include "avr/delay.h"
#include <util/delay.h>

int main(void)
{
	DIO_voidInitialization();
	LCD_voidIntialization();
	KEYPAD_voidInitializaton();
	u8 pressedKey = 0xFF;

	while(1)
	{
		pressedKey = KEYPAD_u8GetPressedKey();
		if (pressedKey != 0xFF)
		{
			LCD_voidWriteString((u8*)"PRESSED IS : " , 0);
			LCD_voidSendData (pressedKey);
		}
	}

	return 0;
}
