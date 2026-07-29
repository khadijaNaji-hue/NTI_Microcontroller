/************************************************/
/********* Author: Khadija Naji *****************/
/********* Date  : 29/07/2026   *****************/
/********* File: Program File  *****************/
/************************************************/

#include "7_SEGMENT_int.h"
#include "7_SEGMENT_private.h"
#include "7_SEGMENT_config.h"
#include "STD_Types.h"

u8 _7SEGMENT_u8DecTo7segConvert (u8 decimalNo , u8 testLED_state)
{
	u8 noIn7SEG[10]= {126,48,109,121,51,91,95,112,127,123};
	if ( testLED_state== ON )
	{ SET_BIT((noIn7SEG[decimalNo] , 7);}
	return (noIn7SEG[decimalNo]);
}