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
#include "cmsis_os.h"
			
void blinkThread(void const *argument);

int main(void)
{

	osThreadId blinkTID;
	LED_Init();
	HAL_Init();
	//Nucleo_BSP_Init();

	osThreadDef(blink, blinkThread, osPriorityNormal, 0, 100);
	blinkTID = osThreadCreate(osThread(blink), NULL);

	osKernelStart();

	/* Infinite loop */
	while (1);
}

void blinkThread(void const *argument) {
while(1) {
	LED_Toggle();
	osDelay(50);
	}
	osThreadTerminate(NULL);
}





