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
	(uint32_t *) &waveByteCode_Forward[0],
	(uint32_t *) &waveByteCode_Backward[0],
	(uint32_t *) &waveByteCode_Right[0],
	(uint32_t *) &waveByteCode_Left[0],
	(uint32_t *) &waveByteCode_Facing[0],
	(uint32_t *) &waveByteCode_Up[0],
	(uint32_t *) &waveByteCode_Down[0],
	(uint32_t *) &waveByteCode_North[0],
	(uint32_t *) &waveByteCode_South[0],
	(uint32_t *) &waveByteCode_East[0],
	(uint32_t *) &waveByteCode_West[0],
};

const uint32_t waveLength[MAX_WAVES] =  {
	WAVEBYTECODE_FORWARD_LENGTH,
	WAVEBYTECODE_BACKWARD_LENGTH,
	WAVEBYTECODE_RIGHT_LENGTH,
	WAVEBYTECODE_LEFT_LENGTH,
	WAVEBYTECODE_FACING_LENGTH,
	WAVEBYTECODE_UP_LENGTH,
	WAVEBYTECODE_DOWN_LENGTH,
	WAVEBYTECODE_NORTH_LENGTH,
	WAVEBYTECODE_SOUTH_LENGTH,
	WAVEBYTECODE_EAST_LENGTH,
	WAVEBYTECODE_WEST_LENGTH,
};

const uint32_t waveResolution[MAX_WAVES] =  {
	WAVEBYTECODE_FORWARD_BPS,
	WAVEBYTECODE_BACKWARD_BPS,
	WAVEBYTECODE_RIGHT_BPS,
	WAVEBYTECODE_LEFT_BPS,
	WAVEBYTECODE_FACING_BPS,
	WAVEBYTECODE_UP_BPS,
	WAVEBYTECODE_DOWN_BPS,
	WAVEBYTECODE_NORTH_BPS,
	WAVEBYTECODE_SOUTH_BPS,
	WAVEBYTECODE_EAST_BPS,
	WAVEBYTECODE_WEST_BPS,
};

const uint32_t waveRate[MAX_WAVES] =  {
	WAVEBYTECODE_FORWARD_SPS,
	WAVEBYTECODE_BACKWARD_SPS,
	WAVEBYTECODE_RIGHT_SPS,
	WAVEBYTECODE_LEFT_SPS,
	WAVEBYTECODE_FACING_SPS,
	WAVEBYTECODE_UP_SPS,
	WAVEBYTECODE_DOWN_SPS,
	WAVEBYTECODE_NORTH_SPS,
	WAVEBYTECODE_SOUTH_SPS,
	WAVEBYTECODE_EAST_SPS,
	WAVEBYTECODE_WEST_SPS,
};

const char *waveName[MAX_WAVES] =  {		// Note wave name must be lower case
	"forward",
	"backward",
	"right",
	"left",
	"facing",
	"up",
	"down",
	"north",
	"south",
	"east",
	"west",
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
