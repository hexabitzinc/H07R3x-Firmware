/**
  ******************************************************************************
  * File Name          : main.c
  * Description        : Main program body
  ******************************************************************************
  *
  * COPYRIGHT(c) 2015 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
	
/*
		MODIFIED by Hexabitz for BitzOS (BOS) V0.1.6 - Copyright (C) 2017-2019 Hexabitz
    All rights reserved
*/

/* Includes ------------------------------------------------------------------*/
#include "BOS.h"


/* Private variables ---------------------------------------------------------*/

/* Embedded wave variables */

uint32_t *waveAdd[MAX_WAVES] =  {
	(uint32_t *) &waveByteCode_HiThere[0],
	(uint32_t *) &waveByteCode_HowAreYou[0],
};

const uint32_t waveLength[MAX_WAVES] =  {
	WAVEBYTECODE_HITHERE_LENGTH,
	WAVEBYTECODE_HOWAREYOU_LENGTH,
};

const uint32_t waveResolution[MAX_WAVES] =  {
	WAVEBYTECODE_HITHERE_BPS,
	WAVEBYTECODE_HOWAREYOU_BPS,
};

const uint32_t waveRate[MAX_WAVES] =  {
	WAVEBYTECODE_HITHERE_SPS,
	WAVEBYTECODE_HOWAREYOU_SPS,
};

const char *waveName[MAX_WAVES] =  {		// Note wave name must be lower case
	"hithere",
	"howareyou",
};

/* Private function prototypes -----------------------------------------------*/



/* Main functions ------------------------------------------------------------*/

int main(void)
{


  /* MCU Configuration----------------------------------------------------------*/

  /* Reset all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();

  /* Initialize all user peripherals */

	/* Initialize BitzOS */
	BOS_Init();

  /* Call init function for freertos objects (in freertos.c) */
  MX_FREERTOS_Init();

  /* Start scheduler */
  osKernelStart();
  
  /* We should never get here as control is now taken by the scheduler */

  /* Infinite loop */
  while (1)
  {


  }


}

/*-----------------------------------------------------------*/

/* User Task */
void UserTask(void * argument)
{

	
  /* Infinite loop */
  for(;;)
  {

	}
}

/*-----------------------------------------------------------*/

/************************ (C) COPYRIGHT HEXABITZ *****END OF FILE****/
