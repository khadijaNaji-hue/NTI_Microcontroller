/************************************************/
/************** Author: Khadija Naji ************/
/************** Date  : 02/08/2026   ************/
/************** File  : Program File  ***********/
/********* Last Update: 02/08/2026   ************/
/************************************************/

#include "Bit_Math.h"
#include "STD_Types.h"

#include "ADC_int.h"
#include "ADC_config.h"
#include "ADC_private.h"



// SET PIN CHANNAL TO INPUT IN DIO

void ADC_voidInitialization (void)
{
/**
 0- SET PIN CHANNAL TO INPUT IN DIO
 1- set defult channal // #define ADC_DEFAULT_CHANNAL  CHANNAL0_SINGLE OR DIFFRITIAL   --->  ADMUX BIT4-->0
 2- SET DEFAULT LEFT/RIGHT ADJUST  // #define ADC_DEFAULT_ADJUST --->  ADMUX BIT5
 3- SET DEFAULT REFRANCE SOURCE     --->  ADMUX BIT7 , 6
 4- SET CONVERSION TRIGGER IF FREE (AUTO / START )
 5- SET TRIIGER TYPE (FREE / EXTERNAL )
 6- CLEAR INTERRUPT
 7- CLEAR FLAG
 8- DEFAULT FREQ
 */

/**	void ADC_voidInit(void);
	//Disable ADC
	//Disable Start Conveerion
	//Disable Auto Trigger
	//Clear Interrupt Flag
	//Disable ADC Interrupt
	//Select Left or Right Adlustment
	// Slect ADC Channel
	// Select Clock Prescaller
	 *
*/
	//Disable ADC
CLR_BIT(ADCSRA,ADC_ENABLE_BIT);
}


















































/**
//Set ADC Pin Is Enable in DIO Configure






u16 ADC_u16Read(void)
{
	#if REG_ADJ == LEFT_ADJUSTMEN
		//read ADCH;
	#elif REG_ADJ == RIGHT_ADJUSTMEN
	// read ADCH##ADCL;
	#endif
}


10bit ---> u16 x =ADC_u16Read();
8bit -->  u8 y = (uint8)ADC_u16Read()


void ADC_voidStartConverstion(void)



void ADC_voidAutoTrigger(void)
//Set auto Trigger Enable
//set the source of auto Trigger



void ADC_voidInterruptEnable()

pf ADC_CallBack;

void ADC_voidSetCallBack(pf FunctionAddress)
{
	ADC_CallBack = FunctionAddress;
}


void __vector_20(void)  __attribute__((signal, used));
void __vector_20(void)
{
	ADC_CallBack();
}
*/
