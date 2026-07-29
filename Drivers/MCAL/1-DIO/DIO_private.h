/************************************************/
/********* Author: Khadija Naji *****************/
/********* Date  : 29/07/2026   *****************/
/********* File  : Private File  **************/
/************************************************/

#ifdef  DIO_PRIVATE_H
#define DIO_PRIVATE_H

/**define ddrs , parts , pins  address*/
/**PORTA Registers*/
#define DDRA   *((volatile u8 *)0x3A)
#define PARTA  *((volatile u8 *)0x3B)
#define PINA   *((volatile u8 *)0x39)

/**PORTB Registers*/
#define DDRB   *((volatile u8 *)0x37)
#define PARTB  *((volatile u8 *)0x38)
#define PINB   *((volatile u8 *)0x36)

/**PORTC Registers*/
#define DDRC   *((volatile u8 *)0x34)
#define PARTC  *((volatile u8 *)0x35)
#define PINC   *((volatile u8 *)0x33)

/**PORTD Registers*/
#define DDRD   *((volatile u8 *)0x31)
#define PARTD  *((volatile u8 *)0x32)
#define PIND   *((volatile u8 *)0x30)

#enfif
