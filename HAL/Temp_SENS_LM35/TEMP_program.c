#include "../../APP/STD_TYPES.h"

#include "../../MCAL/ADC/ADC_interface.h"

#include "TEMP_private.h"
#include "TEMP_config.h"
#include "TEMP_interface.h"

void TEMP_init(void)
{
	/*Set temp sensor pin direction as input*/
	DIO_SETpinDir(DIO_PORTA,ADC_Channel,DIO_INPUT);
	/*ADC initialization*/
	ADC_init();
}

uint8_t TEMP_u8GetReading(void)
{
	uint8_t local_u8TEMP;//A local variable to save a sensor reading
	unint16_t local_u16MiliVolt;//temperature in milli volts
	unint16_t local_u8ADC_Read;//A local variable to save a temp sensor digital value
	/*Read the temperature sensor*/
	ADC_u8StartConversionSynch(ADC_Channel,&local_u8ADC_Read);
	/*Convert the digital value into milli volts*/
	local_u16MiliVolt=(unint16_t)(((uint32_t)local_u8ADC_Read*Vref)/TWO_P_RESOLUTION);
	/*Convert volts to temperature*/
	local_u8TEMP=local_u16MiliVolt/10;
	return local_u8TEMP;

}
