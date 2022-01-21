#include "STD_TYPES.h"

#include "../MCAL/PORT/PORT_interface.h"
#include "../MCAL/DIO/DIO_interface.h"
#include "../MCAL/ADC/ADC_interface.h"

#include "../HAL/Temp_SENS_LM35/TEMP_interface.h"
#include "../HAL/LCD/LCD_interface.h"

#include<util/delay.h>

void APP_init(void)
{
	PORT_INIT();
	TEMP_init();
	LCD_init();
}

void APP_prog(void)
{
	uint8_t local_u8TempRead;
	while(1)
	{
		LCD_GoToXY(0,0);
		LCD_sendStrData("Current Tem:");
		LCD_GoToXY(1,0);
		local_u8TempRead=TEMP_u8GetReading();
		LCD_WriteNumber(local_u8TempRead);
		_delay_ms(100);
		LCD_CLR();
	}
}
