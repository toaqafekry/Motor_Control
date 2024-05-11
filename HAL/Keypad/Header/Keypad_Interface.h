/*
 * Keypad_Interface.h
 *
 *  Created on: Apr 25, 2024
 *      Author: Toa Fekry
 */

#ifndef HAL_KEYPAD_KEYPAD_INTERFACE_H_
#define HAL_KEYPAD_KEYPAD_INTERFACE_H_

#include "Keypad_Config.h"
#include "Keypad_Private.h"


void KeyPad_Init();
u8 KeyPad_ReadBtnValue();

#endif /* HAL_KEYPAD_KEYPAD_INTERFACE_H_ */
