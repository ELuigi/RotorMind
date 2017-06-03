/*
 * PWM.c
 *
 *  Created on: 21 mai 2017
 *      Author: eluigi5685
 */

#include "PWM.h"
#include <stdio.h>
#include "stm32f1xx.h"

void PWM_Init()
{
	// Structures for configuration
	GPIO_InitTypeDef            GPIO_InitStructure;
	TIM_Base_InitTypeDef     TIM_TimeBaseStructure;
	TIM_OC_InitTypeDef           TIM_OCInitStructure;

	__HAL_RCC_TIM3_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();

	GPIO_InitStructure.Pin = GPIO_PIN_9;
	GPIO_InitStructure.Mode   = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStructure.Pull   = GPIO_NOPULL;
	GPIO_InitStructure.Speed  = GPIO_SPEED_FREQ_HIGH;

	HAL_GPIO_Init(GPIOB,&GPIO_InitStructure);
}



