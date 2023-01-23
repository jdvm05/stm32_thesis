/*
 * tim.h
 *
 *  Created on: 28 dic 2022
 *      Author: Juan
 */

#ifndef TIM_H_
#define TIM_H_

void tim2_1hz_init(void);
void tim2_1hz_interrupt_init(void);

#define SR_UIF		(1U<<0)

#endif /* TIM_H_ */
