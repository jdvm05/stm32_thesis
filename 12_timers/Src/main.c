#include <stdio.h>
#include <stdint.h>
#include "stm32f4xx.h"
#include "uart.h"
#include "adc.h"
#include "systick.h"
#include "tim.h"

#define GPIOAEN		(1U<<0)
#define PIN5		(1U<<5)
#define LED_PIN		PIN5

uint32_t sensor_value;

int main(void)
{
	//Enable clock access to GPIOA
	RCC->AHB1ENR |=GPIOAEN;

	//Set PA5 as output pin
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &= ~(1U<<11);

	uart2_tx_init();
	tim2_1hz_init();


	while(1)
	{
		//Wait for UIF
		while (!(TIM2->SR & SR_UIF)){}

		//Clear UIF
		TIM2->SR &= ~(SR_UIF);

		printf("A second passed with timer!! \n\r");
		GPIOA->ODR ^= LED_PIN;
	}
}



