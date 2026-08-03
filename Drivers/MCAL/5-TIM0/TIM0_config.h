/************************************************/
/************** Author: Khadija Naji ************/
/************** Date  : 03/08/2026   ************/
/************** File  : Configuration File  *****/
/********* Last Update: 03/08/2026   ************/
/************************************************/

#define TIM0_CONFIG_H
#ifdef  TIM0_CONFIG_H

#define TIM0_MODE         TIM0_CTC // TIM0_NORMAL , TIM0_PWM ,TIM0_CTC, TIM0_FAST_PWM
#define TIM0_PRESCALLER   TIM0_NO_CLK
#define TIM0_NO_CLK                        0
#define TIM0_CLK_by_1                      1
#define TIM0_CLK_by_8                      2
#define TIM0_CLK_by_64                     3
#define TIM0_CLK_by_256                    4
#define TIM0_CLK_by_1024                   5
#define TIM0_EXT_CLK_ON_T0_FALLINGEDGE     6
#define TIM0_EXT_CLK_ON_T0_RISINGEDGE      7


#endif


