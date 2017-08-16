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

#include "LED.h"

#include "cmsis_os.h"

#include "platform.h"
			
void blinkThread(void const *argument);


int main(void)
{

	osThreadId blinkTID;
	statusLedConfig_t *statusLedConfig;
	statusLedConfig->ioTags =IO_TAG(LED0_PIN);
	statusLedConfig->inversion=0;



	HAL_Init();


	ledInit(statusLedConfig);


	osThreadDef(blink, blinkThread, osPriorityNormal, 0, 100);
	blinkTID = osThreadCreate(osThread(blink), NULL);

	osKernelStart();

	/* Infinite loop */
	while (1);
}

void blinkThread(void const *argument) {


	while(1) {
	ledToggle(0);
	osDelay(50);


	}

	osThreadTerminate(NULL);
}





