#ifndef __PWM_H
#define __PWM_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f1xx_hal.h"

	// Structures for configuration
	TIM_HandleTypeDef htim3;

	//TIM_OC_InitTypeDef OcConfig;
	//GPIO_InitTypeDef GPIO_InitStruct;

void PWM_Init();

void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef* htim_base);

#ifdef __cplusplus
}
#endif

#endif /* __PWM_H */
