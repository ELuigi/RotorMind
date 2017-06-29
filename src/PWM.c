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

	//__TIM3_CLK_ENABLE();

	    /**TIM3 GPIO Configuration
	    PA6     ------> TIM3_CH1
	    */
	/*
	GPIO_InitStruct.Pin = GPIO_PIN_6;
	GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

	htim3.Instance = TIM3;
	htim3.Init.Prescaler = 499;
	htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
	htim3.Init.Period = 999;
	htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;

	HAL_TIM_PWM_Init(&htim3);

	OcConfig.OCMode = TIM_OCMODE_PWM1;
	OcConfig.Pulse = 0;
	OcConfig.OCPolarity = TIM_OCPOLARITY_HIGH;
	OcConfig.OCFastMode = TIM_OCFAST_DISABLE;
	HAL_TIM_PWM_ConfigChannel(&htim3, &OcConfig, TIM_CHANNEL_1);
*/

	TIM_OC_InitTypeDef sConfigOC;

	  htim3.Instance = TIM3;
	  htim3.Init.Prescaler = 499;
	  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
	  htim3.Init.Period = 999;
	  HAL_TIM_PWM_Init(&htim3);

	  sConfigOC.OCMode = TIM_OCMODE_PWM1;
	  sConfigOC.Pulse = 499;
	  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
	  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
	  HAL_TIM_PWM_ConfigChannel(&htim3, &sConfigOC, TIM_CHANNEL_1);
}

void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef* htim_base) {

	GPIO_InitTypeDef GPIO_InitStruct;

  if(htim_base->Instance==TIM3) {
    __TIM3_CLK_ENABLE();
    __HAL_RCC_GPIOA_CLK_ENABLE();

    /**TIM3 GPIO Configuration
    PA6     ------> TIM3_CH1
    */
    GPIO_InitStruct.Pin = GPIO_PIN_6;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
  }
}


