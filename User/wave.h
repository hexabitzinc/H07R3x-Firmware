#ifndef WAVE_H
#define WAVE_H

#include <stdint.h>


/* Maximum number of embedded waves */
#define MAX_WAVES		6

/* Length of embedded waves */
#define WAVEBYTECODE_FORWARD_LENGTH 				 5795
#define WAVEBYTECODE_BACKWARD_LENGTH				 6841
#define WAVEBYTECODE_RIGHT_LENGTH 				   4142
#define WAVEBYTECODE_LEFT_LENGTH						 2773
#define WAVEBYTECODE_FACING_UP_LENGTH 			 10143
#define WAVEBYTECODE_FACING_DOWN_LENGTH			 14625

/* Resolution of embedded waves (bits per sample) */
#define WAVEBYTECODE_FORWARD_BPS 					   8
#define WAVEBYTECODE_BACKWARD_BPS						 8
#define WAVEBYTECODE_RIGHT_BPS 					     8
#define WAVEBYTECODE_LEFT_BPS						     8
#define WAVEBYTECODE_FACING_UP_BPS 					 8
#define WAVEBYTECODE_FACING_DOWN_BPS				 8

/* Rate of embedded waves (sample per second) */
#define WAVEBYTECODE_FORWARD_SPS 						 16000
#define WAVEBYTECODE_BACKWARD_SPS						 16000
#define WAVEBYTECODE_RIGHT_SPS 						   16000
#define WAVEBYTECODE_LEFT_SPS							   16000
#define WAVEBYTECODE_FACING_UP_SPS 					 16000
#define WAVEBYTECODE_FACING_DOWN_SPS				 16000

/* Export embedded waves definition */
extern const uint8_t waveByteCode_Forward[WAVEBYTECODE_FORWARD_LENGTH];
extern const uint8_t waveByteCode_Backward[WAVEBYTECODE_BACKWARD_LENGTH];
extern const uint8_t waveByteCode_Right[WAVEBYTECODE_RIGHT_LENGTH];
extern const uint8_t waveByteCode_Left[WAVEBYTECODE_LEFT_LENGTH];
extern const uint8_t waveByteCode_Facing_Up[WAVEBYTECODE_FACING_UP_LENGTH];
extern const uint8_t waveByteCode_Facing_Down[WAVEBYTECODE_FACING_DOWN_LENGTH];

/* Export wave variables */
extern uint32_t *waveAdd[MAX_WAVES];
extern const uint32_t waveLength[MAX_WAVES];
extern const uint32_t waveResolution[MAX_WAVES];
extern const uint32_t waveRate[MAX_WAVES];
extern const char *waveName[MAX_WAVES];

#endif
