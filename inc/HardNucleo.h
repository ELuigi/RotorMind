#ifndef __HARDNUCLEO_H
#define __HARDNUCLEO_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f1xx_hal.h"

typedef enum
{
   LED = 0,
   LED_GREEN = LED
} Led_TypeDef;


/*###################### LED ACTIVITY     ###################################*/

#define LED                             1

#define LED_PIN                         GPIO_PIN_3
#define LED_GPIO_PORT                   GPIOB
#define LED_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOB_CLK_ENABLE()
#define LED_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOB_CLK_DISABLE()

#define LEDx_GPIO_CLK_ENABLE(__INDEX__)   do { if((__INDEX__) == 0) LED2_GPIO_CLK_ENABLE();} while(0)
#define LEDx_GPIO_CLK_DISABLE(__INDEX__)  (((__INDEX__) == 0) ? LED2_GPIO_CLK_DISABLE()

/*###################### SPI MPU 6000/9250 ###################################*/
#define GYRO_SPI                                 SPI1
#define GYRO_SPI_CLK_ENABLE()                    __HAL_RCC_SPI1_CLK_ENABLE()

#define GYRO_SPI_SCK_GPIO_PORT                   GPIOA
#define GYRO_SPI_SCK_PIN                         GPIO_PIN_5
#define GYRO_SPI_SCK_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOA_CLK_ENABLE()
#define GYRO_SPI_SCK_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOA_CLK_DISABLE()

#define GYRO_SPI_MISO_MOSI_GPIO_PORT             GPIOA
#define GYRO_SPI_MISO_MOSI_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOA_CLK_ENABLE()
#define GYRO_SPI_MISO_MOSI_GPIO_CLK_DISABLE()    __HAL_RCC_GPIOA_CLK_DISABLE()
#define GYRO_SPI_MISO_PIN                        GPIO_PIN_6
#define GYRO_SPI_MOSI_PIN                        GPIO_PIN_7










#ifdef __cplusplus
}
#endif

#endif /* __HARDNUCLEO_H */
