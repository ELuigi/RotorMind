#ifndef __LED_H
#define __LED_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f1xx_hal.h"

/* moved in hardware file
#define LED_PIN                         GPIO_PIN_0
#define LED_GPIO_PORT                   GPIOC
#define LED_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOC_CLK_DISABLE()
*/

/*
#define LED_PIN                         GPIO_PIN_9
#define LED_GPIO_PORT                   GPIOA
#define LED_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOA_CLK_ENABLE()
#define LED_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOA_CLK_DISABLE()
*/

void LED_Init();
void LED_DeInit();
void LED_On();
void LED_Off();
void LED_Toggle();



#ifdef __cplusplus
}
#endif

#endif /* __LED_H */
