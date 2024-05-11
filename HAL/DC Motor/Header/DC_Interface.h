/*
 * DC_Interface.h
 *
 *  Created on: Apr 25, 2024
 *      Author: Toa Fekry
 */

#ifndef HAL_DC_MOTOR_HEADER_DC_INTERFACE_H_
#define HAL_DC_MOTOR_HEADER_DC_INTERFACE_H_

#include "../../../MCAL/DIO/Header/DIO_Interface.h"

void DCMotor_Init(u8 GroupName,u8 OutputState);
void DC_Motor_ONCW(u8 GroupName,u8 PinNumber,u8 OutputState);
void DC_Motor_ONCCW(u8 GroupName,u8 PinNumber,u8 OutputState);
void DC_Motor_OFF(u8 GroupName,u8 PinNumber,u8 OutputState);

#endif /* HAL_DC_MOTOR_HEADER_DC_INTERFACE_H_ */
