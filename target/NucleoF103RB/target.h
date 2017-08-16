/*
 * created by eluigi5685 on 1st of july 2017
 *
 * this file contains all parameters regarding hardware configuration of F103RB.
 * ex: port definition for all device dedicated timer...
 *
 */




/*
 * Activity led
 */
/*
#define LED_PIN                         GPIO_PIN_0
#define LED_GPIO_PORT                   GPIOC
#define LED_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOC_CLK_DISABLE()

/*
 * PWM 6 outputs (for servo, esc...)
 */

// Structures for configuration
//Used timer for PWM

// ------------------------
// Timers and Channels Used
// ------------------------
/*
   Timer | Channel 1 | Channel 2 | Channel 3 | Channel 4
   ------+-----------+-----------+-----------+----------
   TIM1  |  Servo 4  |           |           |
   TIM2  |  Servo 6  |           |           |
   TIM3  |  Servo 1  |  Servo 2  |  Servo3   |
   TIM4  |  Servo 5  |           |           |
   ------+-----------+-----------+-----------+----------


// declaration of timer handle for each timer used for PWM

TIM_HandleTypeDef htim1;
TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim3;
TIM_HandleTypeDef htim4;

//declaration
uint32_t tim1_channel[] = {TIM_CHANNEL_1};
uint32_t tim2_channel[] = {TIM_CHANNEL_1};
uint32_t tim3_channel[] = {TIM_CHANNEL_1,TIM_CHANNEL_2,TIM_CHANNEL_3};
uint32_t tim4_channel[] = {TIM_CHANNEL_1};


//#define Nb_Tim_handle 4;
//#define TIM {TIM1,TIM2,TIM3,TIM4}


*/


/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#define TARGET_BOARD_IDENTIFIER "NUCLEO F103RB" // CopterControl 3D

#define LED0_PIN                PC0

//#define INVERTER_PIN_UART1      PB2 // PB2 (BOOT1) used as inverter select GPIO

//#define BEEPER                  PA15
//#define BEEPER_OPT              PA2

//#define USE_EXTI
//#define MPU_INT_EXTI            PA3
//#define USE_MPU_DATA_READY_SIGNAL
//#define DEBUG_MPU_DATA_READY_INTERRUPT

//#define USE_SPI
//#define USE_SPI_DEVICE_1
//#define USE_SPI_DEVICE_2
//
//#define MPU6000_CS_GPIO         GPIOA
//#define MPU6000_CS_PIN          PA4
//#define MPU6000_SPI_INSTANCE    SPI1
//
//#define M25P16_CS_GPIO          GPIOB
//#define M25P16_CS_PIN           PB12
//#define M25P16_SPI_INSTANCE     SPI2
//
//#define USE_FLASHFS
//#define USE_FLASH_M25P16
//
//#define GYRO
//#define USE_GYRO_SPI_MPU6000
//#define GYRO_MPU6000_ALIGN CW270_DEG
//
//#define ACC
//#define USE_ACC_SPI_MPU6000
//#define ACC_MPU6000_ALIGN CW270_DEG
//
//// MPU6000 interrupts
//#define USE_MPU_DATA_READY_SIGNAL
//
////#define USE_I2C
////#define I2C_DEVICE (I2CDEV_2) // Flex port - SCL/PB10, SDA/PB11
//
//// External I2C BARO
////#define BARO
////#define USE_BARO_MS5611
////#define USE_BARO_BMP085
////#define USE_BARO_BMP280
//
//// External I2C MAG
////#define MAG
////#define USE_MAG_HMC5883
//
//#define USE_VCP
//#define USE_UART1
//#define USE_UART3
//#define USE_SOFTSERIAL1
//#define USE_SOFTSERIAL2
//
//#define SERIAL_PORT_COUNT       5
//
//#ifndef CC3D_OPBL
//#define SOFTSERIAL1_TX_PIN      PB5 // PWM 2
//#define SOFTSERIAL1_RX_PIN      PB0 // PWM 3
//#endif
//
//#ifdef USE_UART1_RX_DMA
//#undef USE_UART1_RX_DMA
//#endif
//
//#define UART3_RX_PIN            PB11
//#define UART3_TX_PIN            PB10
//
//#define USE_ADC
//#define CURRENT_METER_ADC_PIN   PB1
//#define VBAT_ADC_PIN            PA0
//#define RSSI_ADC_PIN            PB0
//
//#define USE_SERIAL_4WAY_BLHELI_INTERFACE
//
////#define SONAR
////#define SONAR_ECHO_PIN          PB0
////#define SONAR_TRIGGER_PIN       PB5
//
//#undef MAG
//
//#ifdef CC3D_OPBL
//#define SKIP_CLI_COMMAND_HELP
////#undef USE_SERVOS
//#undef BARO
//#undef SONAR
//#undef USE_SERIAL_4WAY_BLHELI_INTERFACE
////#undef USE_SERIALRX_SPEKTRUM   // SRXL, DSM2 and DSMX protocol
////#undef USE_SERIALRX_SBUS       // Frsky and Futaba receivers
////#undef USE_SERIALRX_IBUS       // FlySky and Turnigy receivers
//#undef USE_SERIALRX_CRSF       // Team Black Sheep Crossfire protocol
//#undef USE_SERIALRX_SUMD       // Graupner Hott protocol
//#undef USE_SERIALRX_SUMH       // Graupner legacy protocol
//#undef USE_SERIALRX_XBUS       // JR
//#undef LED_STRIP
//#endif
//
////#undef LED_STRIP
//#define DEFAULT_RX_FEATURE      FEATURE_RX_PPM
//
//// IO - from schematics
//#define TARGET_IO_PORTA         0xffff
//#define TARGET_IO_PORTB         0xffff
//#define TARGET_IO_PORTC         ( BIT(14) )
//
#define USABLE_TIMER_CHANNEL_COUNT 12
#define USED_TIMERS             ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) )



