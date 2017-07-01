/*
 * created by eluigi5685 on 1 of july 2017
 *
 * this file contains all parameters regarding hardware configuration of F103RB.
 * ex: port definition for all device dedicated timer...
 *
 */




/*
 * Activity led
 */

#define LED_PIN                         GPIO_PIN_0
#define LED_GPIO_PORT                   GPIOC
#define LED_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOC_CLK_DISABLE()

/*
 * PWM outputs (for servo, esc...)
 */

