#include "Std_Types.h"
#include "Bit_Math.h"

#include "DIO_int.h"
#include "DIO_private.h"

void DIO_voidSetPinDirection (u8 portID, u8 pinID, u8 Direction)
{
    if (Direction == OUTPUT)
    {
        switch (portID)
        {
             case PORTA: SET_BIT(DDRA ,PinID); break;
             case PORTB: SET_BIT(DDRB ,PinID); break;
             case PORTC: SET_BIT(DDRC ,PinID); break;
             case PORTD: SET_BIT(DDRD ,PinID); break;
             
        }
    }
    else if 
    {
        switch (portID)
        {
             case PORTA: CLR_BIT(DDRA ,PinID); break;
             case PORTB: CLR_BIT(DDRB ,PinID); break;
             case PORTC: CLR_BIT(DDRC ,PinID); break;
             case PORTD: CLR_BIT(DDRD ,PinID); break;
        }
    }else
    {
      //NO CODE  
    }
}

void DIO_voidSetPinValue     (u8 portID , u8 pinID , u8 value)
{
	if(Value == HIGH)
	{
		switch(portID)
		{
			 case PORTA: SET_BIT(PORTA ,PinID); break;
             case PORTB: SET_BIT(PORTB ,PinID); break;
             case PORTC: SET_BIT(PORTC ,PinID); break;
             case PORTD: SET_BIT(PORTD ,PinID); break;
		}	
	}if else
	{
        switch (portID)
        {
             case PORTA: CLR_BIT(PORTA ,PinID); break;
             case PORTB: CLR_BIT(PORTB ,PinID); break;
             case PORTC: CLR_BIT(PORTC ,PinID); break;
             case PORTD: CLR_BIT(PORTD ,PinID); break;
        }
	}
	
}