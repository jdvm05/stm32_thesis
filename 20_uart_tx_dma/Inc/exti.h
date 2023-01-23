/*
 * exti.h
 *
 *  Created on: 3 ene 2023
 *      Author: Juan
 */

#ifndef EXTI_H_
#define EXTI_H_

#include "stm32f4xx.h"

void pc13_exti_init(void);

#define	LINE13	(1U<<13)

#endif /* EXTI_H_ */
