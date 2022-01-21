#ifndef _ADC_INTERFACE_H_
#define _ADC_INTERFACE_H_

/*ADC initialization function*/
void ADC_init(void);

/*ADC start conversion using pooling*/
uint8_t ADC_u8StartConversionSynch(uint8_t ADC_Channel,unint16_t* u8_Reading);

/*ADC start conversion using interrupt*/
uint8_t ADC_u8StartConversionASynch(uint8_t ADC_Channel,uint8_t* u8_Reading,void(*NotificFunc)(void));

#endif
