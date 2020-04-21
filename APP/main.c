/*
 * main.c
 *
 *  Created on : Apr 2, 2020
 *  Version    : 1.0.1
 *  Author     : Ahmed El-Gaafarwy
 */
#include "../LIBRARY/stdTypes.h"
#include "../LIBRARY/BIT_MATH.h"
#include "../LIBRARY/errorStates.h"

#include "../LIBRARY/AVR_REG.h"
#include "../MCAL/DIO_int.h"

#include "../HAL/LCD_int.h"

int main(void)
{
	DDRD=0xff;
	LCD_enuInit();
	LCD_enuSendSpecialNumber(0);
	LCD_enuGoToPosition(2,1);
	PORTD_REG=LCD_enuSendString("Ahmed");
	while(1);
	return 0;
}

