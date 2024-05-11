/*
 * LED_Program.c
 *
 *  Created on: Apr 25, 2024
 *      Author: Toa Fekry
 */


/*
 * Led_Program.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Toa Fekry
 */



#include "../../../Common/Std_Type.h"
#include "../../../Common/BitMath.h"
#include "../../../MCAL/DIO/Header/DIO_Interface.h"
#include "../Header/LED_Private.h"
#include "../Header/LED_Interface.h"
#include <util/delay.h>

//*Set The Direction*//
void Led_Init(u8 LedGroup,u8 LedNumber)
{
	DIO_SetDirectionForPin(LedGroup,LedNumber,1);   //*as outputdirection==1*//
}

//*Set The Output*//
void Led_On(u8 LedGroup,u8 LedNumber)
{
	DIO_SetOutputForPin(LedGroup,LedNumber,1);    //*as outputport==1*//
}

void Led_Off(u8 LedGroup,u8 LedNumber)
{
	DIO_SetOutputForPin(LedGroup,LedNumber,0);    //*as outputport==0*//
}

//*Set The Toggle*//
void Led_Toggle(u8 LedGroup,u8 LedNumber,u8 Time)

{
	Led_On(LedGroup,LedNumber);
	_delay_ms(200);
	Led_Off(LedGroup,LedNumber);
		_delay_ms(200);

}
