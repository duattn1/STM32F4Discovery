#ifndef _GPIO_DRIVER_H
#define _GPIO_DRIVER_H

/************************************************
 *  1. Included Files
 ***********************************************/
#include <stdint.h>
#include "stm32f407xx.h"

/************************************************
 *  2. Macros
 ***********************************************/
#define GPIO_YELLOW_LED 12
#define GPIO_ORANGE_LED 13
#define GPIO_RED_LED 14
#define GPIO_BLUE_LED 15

/************************************************
 *  3. Typedef
 ***********************************************/ 
typedef struct {
	uint8_t pin;	
	uint8_t mode;
	uint8_t ouputType;
	uint8_t outputSpeed;
	uint8_t pupd;
} GPIO_InitConfig;
 
typedef enum {
	GPIOx_MODER_Input = 0x00,
	GPIOx_MODER_Output = 0x01,
	GPIOx_MODER_AlternateFunction = 0x02,
	GPIOx_MODER_Analog = 0x03
} GPIOx_MODER_Typedef;

typedef enum {
	GPIOx_OTYPER_PushPull = 0x00,
	GPIOx_OTYPER_OpenDrain = 0x01
} GPIOx_OTYPER_Typedef;

typedef enum {
	GPIOx_OSPEEDR_Low = 0x00,
	GPIOx_OSPEEDR_Medium = 0x01,
	GPIOx_OSPEEDR_High = 0x02,
	GPIOx_OSPEEDR_VeryHigh = 0x03
} GPIOx_OSPEEDR_Typedef;

typedef enum {
	GPIOx_PUPDR_NoPull = 0x00,
	GPIOx_PUPDR_PullUp = 0x01,
	GPIOx_PUPDR_PullDown = 0x02
} GPIOx_PUPDR_Typedef;

/************************************************
 *  4. Global, Static and Extern Variables
 ***********************************************/


/************************************************
 *  5. Function Declaration
 ***********************************************/
void GPIO_Enable(GPIO_TypeDef* gpioX);

void GPIO_Init(GPIO_TypeDef* gpioX, GPIO_InitConfig initConfig);

void GPIO_SetPin(GPIO_TypeDef* gpioX, uint8_t pin);
#endif
