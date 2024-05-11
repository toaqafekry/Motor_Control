/*
 * DC_Program.c
 *
 *  Created on: Apr 25, 2024
 *      Author: Toa Fekry
 */
#include <util/delay.h>
#include "../../../MCAL/DIO/Header/DIO_Interface.h"
#include "../Header/DC_Interface.h"

void DCMotor_Init(u8 GroupName,u8 OutputState)
{
	DIO_SetDirectionForGroup(DIO_GroupB,0x0f);

}
	void DC_Motor_ONCW(u8 GroupName,u8 PinNumber,u8 OutputState)
	{
	//*ON Cloclwise*//

	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin0,DIO_High);
	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin1,DIO_Low);
	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin2,DIO_High);
	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin3,DIO_Low);
	_delay_ms(1000);
	}
	void DC_Motor_ONCCW(u8 GroupName,u8 PinNumber,u8 OutputState)
	{
	//*ON AntiCloclwise*//
	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin0,DIO_Low);
	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin1,DIO_High);
	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin2,DIO_Low);
	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin3,DIO_High);
	_delay_ms(1000);
	}
	void DC_Motor_OFF(u8 GroupName,u8 PinNumber,u8 OutputState)
	{
	//*Motor OFF*//
	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin0,DIO_Low);
	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin1,DIO_Low);
	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin2,DIO_Low);
	DIO_SetOutputForPin(DIO_GroupB,DIO_Pin3,DIO_Low);

	_delay_ms(1000);
}


