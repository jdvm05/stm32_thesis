/*
 * adc.h
 *
 *  Created on: 28 dic 2022
 *      Author: Juan
 */

#ifndef ADC_H_
#define ADC_H_

#include <stdint.h>


void pa1_adc_init(void);
void start_conversion(void);
uint32_t adc_read(void);
void pa1_adc_interrupt_init(void);


#define SR_EOC		(1U<<1)


#endif /* ADC_H_ */
