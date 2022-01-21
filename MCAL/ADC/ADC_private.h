#ifndef _ADC_PRIVATE_H_
#define _ADC_PRIVATE_H_

/*defines some choices of reference selection*/
#define ADC_AREF	1
#define ADC_AVCC	2

/*defines some choices of using 8 or 10 bits to read result*/
#define LEFT_ADJUST		1
#define RIGHT_ADJUST	2

/*defines some choices of ADC channel*/
#define ADC0	0
#define ADC1    1
#define ADC2    2
#define ADC3    3
#define ADC4    4
#define ADC5    5
#define ADC6    6
#define ADC7    7

/*defines some choices of prescalar*/
#define DIV_2		1
#define DIV_4		2
#define DIV_8		3
#define DIV_16		4
#define DIV_32		5
#define DIV_64		6
#define DIV_128		7

#define PRESC_BIT_MASK	0b11111000
#define MUX_BIT_MASK	0b11100000
#endif
