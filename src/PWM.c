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


}



