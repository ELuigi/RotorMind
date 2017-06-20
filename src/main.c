/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f1xx.h"
//#include "stm32f1xx_nucleo.h"
#include "LED.h"
#include "PWM.h"
#include "cmsis_os.h"
			
void blinkThread(void const *argument);


int main(void)
{

	osThreadId blinkTID;



	HAL_Init();
	PWM_Init();
	HAL_TIM_PWM_MspInit(&htim3);

	//LED_Init();
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);


	osThreadDef(blink, blinkThread, osPriorityNormal, 0, 100);
	blinkTID = osThreadCreate(osThread(blink), NULL);

	osKernelStart();

	/* Infinite loop */
	while (1);
}

void blinkThread(void const *argument) {

	uint16_t dutyCycle = HAL_TIM_ReadCapturedValue(&htim3, TIM_CHANNEL_1);

	while(1) {
	//LED_Toggle();
	//osDelay(50);

	    while(dutyCycle < __HAL_TIM_GET_AUTORELOAD(&htim3))
	    {
       __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, ++dutyCycle);
       ++dutyCycle;
	       HAL_Delay(1);
	    }

	     while(dutyCycle > 0) {
	       __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, --dutyCycle);
	       HAL_Delay(1);
	     }


	}

	osThreadTerminate(NULL);
}





