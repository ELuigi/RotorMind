/*
 * created by eluigi5685 on 1st of july 2017
 *
 * this file contains all parameters regarding hardware configuration of F103RB.
 * ex: port definition for all device dedicated timer...
 *
 */

-


/*
 * Activity led
 */

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
 */

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



