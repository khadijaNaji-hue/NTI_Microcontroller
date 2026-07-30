

#include "STD_Types.h"
#include "Bit_Math.h"
#include "DIO_int.h"
#include "LCD_int.h"
#include "DIO_config.h"
//#include "avr/delay.h"
#include <util/delay.h>

int main(void)
{
	DIO_voidInitialization();
	LCD_voidLCDintializatin();

	while(1)
	{
	LCD_voidWriteString((u8*)"We there KHADIJA" , 0);
	_delay_ms(1000000);
	}
	return 0;
}
