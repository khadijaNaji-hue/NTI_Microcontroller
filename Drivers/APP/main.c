#include "DIO_prog.c"
#include "7_SEGMENT_prog.c"
#include "avr/delay.h"
#include "STD_Types.h"

int main(void)
{
	for (int i=0 ;1; i++)
	{
		PORTA = _7SEGMENT_u8DecTo7segConvert (i, ON);
		_delay_ms(500);
		if(i==9)
			i=0;
	}
	return 0;
}
