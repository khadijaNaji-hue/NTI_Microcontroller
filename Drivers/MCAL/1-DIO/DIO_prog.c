/************************************************/
/********* Author: Khadija Naji *****************/
/********* Date  : 29/07/2026   *****************/
/********* File: Program File  *****************/
/********* File: Program File  *****************/
/************************************************/
#include "STD_Types.h"
#include "Bit_Math.h"

#include "DIO_int.h"
#include "DIO_private.h"
#include "DIO_config.h"


void DIO_voidInitialization(void)
{
	DDRA = DIO_PORTA_DIRECTIONS ;
	DDRB = DIO_PORTB_DIRECTIONS ;
	DDRC = DIO_PORTC_DIRECTIONS ;
	DRRD = DIO_PORTD_DIRECTIONS ;
}
/** mode set*/
void DIO_voidSetPinDirection (u8 PortID, u8 PinID, u8 Direction)
{
	if(PinID <10 && PortID < 4)
	{
		if (Direction == OUTPUT)
    {
        switch (PortID)
        {
             case PORTA: SET_BIT(DDRA ,PinID); break;
             case PORTB: SET_BIT(DDRB ,PinID); break;
             case PORTC: SET_BIT(DDRC ,PinID); break;
             case PORTD: SET_BIT(DDRD ,PinID); break;
             
        }
    }
    else if 
    {
        switch (PortID)
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
	}else
	{
		//NO CODE
	}
		
    
}

/** output mode*/
void DIO_voidSetPinValue     (u8 PortID , u8 PinID , u8 Value)
{
	if(PinID <10 && PortID < 4)
	{
	if(Value == HIGH)
	{
		switch(PortID)
		{
			 case PORTA: SET_BIT(PORTA ,PinID); break;
             case PORTB: SET_BIT(PORTB ,PinID); break;
             case PORTC: SET_BIT(PORTC ,PinID); break;
             case PORTD: SET_BIT(PORTD ,PinID); break;
		}	
	}if else
	{
        switch (PortID)
        {
             case PORTA: CLR_BIT(PORTA ,PinID); break;
             case PORTB: CLR_BIT(PORTB ,PinID); break;
             case PORTC: CLR_BIT(PORTC ,PinID); break;
             case PORTD: CLR_BIT(PORTD ,PinID); break;
        }
	}else
	{
		//NO CODE
	}
	}else
	{
		//NO CODE
	}
	
}
/** output mode*/
void DIO_voidTogglePin(u8 PortID, u8 PinID)
{
	if(PinID <10 && PortID < 4)
	{
		switch(PortID)
		{
			 case PORTA: TOG_BIT(PORTA ,PinID); break;
             case PORTB: TOG_BIT(PORTB ,PinID); break;
             case PORTC: TOG_BIT(PORTC ,PinID); break;
             case PORTD: TOG_BIT(PORTD ,PinID); break;
		}	
	}else
	{
		//NO CODE
	}
	
}
/** output - input*/
void DIO_voidSetPortDirection(u8 PortID, u8 Direction)
{
	if( PortID < 4)
	{
    
        switch (PortID)
        {
             case PORTA: SET_BYTE(DDRA ,Direction); break;
             case PORTB: SET_BYTE(DDRB ,Direction); break;
             case PORTC: SET_BYTE(DDRC ,Direction); break;
             case PORTD: SET_BYTE(DDRD ,Direction); break;
             
        }
	}else
	{
		//NO CODE
	}
}

/** Input Mode*/
u8 DIO_u8GetPinValue(u8 PortID, u8 PinID)
{
	if( PortID < 4 && PinID < 10 )
	{
        switch (PortID)
        {
             case PORTA: return Get_Bit(PINA ,PinID); 
             case PORTB: return Get_Bit(PINB ,PinID);
             case PORTC: return Get_Bit(PINC ,PinID);
             case PORTD: return Get_Bit(PIND ,PinID);
             
        }
	}else
	{
		//NO CODE
	}
	
}
/** High - Low*/
void DIO_voidSetPortValue(u8 PortID, u8 Value)
{
	if(PortID < 4)
	{
		switch(PortID)
		{
			 case PORTA: SET_BYTE(PORTA ,Value); break;
             case PORTB: SET_BYTE(PORTB ,Value); break;
             case PORTC: SET_BYTE(PORTC ,Value); break;
             case PORTD: SET_BYTE(PORTD ,Value); break;
		}	
	}else
	{
		//NO CODE
	}
	
	
}

