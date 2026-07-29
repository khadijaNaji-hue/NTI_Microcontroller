#ifndef BIT_MATH_H_
#define BIT_MATH_H_
  
#define SET_BIT(REG,BIT_NUM)     REG |=(1<<BIT_NUM)
#define CLR_BIT(REG,BIT_NUM)     REG &= ~ (1<<BIT_NUM)
#define TOG_BIT(REG,BIT_NUM)     REG ^=   (1<<BIT_NUM)
#define Get_Bit(REG,BIT_NUM)    (REG>>BIT_NUM)&(0X01)
#define SET_BYTE(REG)            REG  =   (0xFF)
#define CLR_BYTE(REG)            REG  =   (0x00)

#endif
