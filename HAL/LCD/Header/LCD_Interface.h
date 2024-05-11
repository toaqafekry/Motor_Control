/*
 * LCD_Interface.h
 *
 *  Created on: Apr 25, 2024
 *      Author: Toa Fekry
 */

#ifndef HAL_LCD_HEADER_LCD_INTERFACE_H_
#define HAL_LCD_HEADER_LCD_INTERFACE_H_

void Lcd_SendCommand(u8 Command);

void Lcd_SendData(u8 Data);

void Lcd_SendInit();

void Lcd_SendString(u8 *String);

#endif /* HAL_LCD_HEADER_LCD_INTERFACE_H_ */
