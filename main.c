/*
 * main.c
 *
 *  Created on: Apr 25, 2024
 *      Author: Toa Fekry
 */
#include <util/delay.h>
#include "Common/BitMath.h"
#include "MCAL/DIO/Header/DIO_Interface.h"
#include "HAL/DC Motor/Header/DC_Interface.h"
#include "HAL/Keypad/Header/Keypad_Interface.h"
#include "HAL/LCD/Header/LCD_Interface.h"
#include "HAL/LED/Header/LED_Interface.h"

void main()

{
	Led_Init(DIO_GroupB,Led2);
	 Lcd_SendInit();
	 KeyPad_Init();
	 Lcd_SendString("Welcome Sir");
	 _delay_ms(1000);
	 Lcd_SendString("Enter Your Password");
	 _delay_us(1000);
	 while(1)
	 {
       u8 Press = KeyPad_ReadBtnValue();
       if(Press=='*')
       {
    	   Lcd_SendCommand(0X01);
    	   _delay_ms(100);
       }

       if (Press==1234)
       {
    	   Led_On(DIO_GroupB,DIO_Pin1);
    	   Lcd_SendString("Logged");
    	   _delay_ms(2);
    	   DC_Motor_ONCW(DIO_GroupB,DIO_Pin0,DIO_High);
    	   _delay_ms(1000);
    	   DC_Motor_OFF(DIO_GroupB,DIO_Pin0,DIO_Low);
    	   _delay_ms(1000);
    	   Control_Steper(90);
    	   _delay_ms(1000);
       }
       if(Press!=1234)
       {
    	   Led_On(DIO_GroupB,DIO_Pin1);
    	   Led_Toggle(DIO_GroupB,DIO_Pin2,200);
       }
	 }



}
