/** @file sample_switch.c
 *  @brief Function implementation for STM32F4 Discovery sample applications.
 *
 *  This is the source file for the definition of STM32F4 Discovery
 *	sample applications.
 *
 *  @author 	Tran Nhat Duat (duattn)
 *	@version 	V1.0
 */ 

/*******************************************************************************
 * 1. Included Files
 ******************************************************************************/
#include "sample_switch.h"

/*******************************************************************************
 * 2. Object-like Macros
 ******************************************************************************/


/*******************************************************************************
 * 3. Function-like Macros
 ******************************************************************************/


/*******************************************************************************
 * 4. Typedefs: Enumerations, Structures, Pointers, Others
 ******************************************************************************/


/*******************************************************************************
 * 5. Global, Static and Extern Variables
 ******************************************************************************/


/*******************************************************************************
 * 6. Function Definitions
 ******************************************************************************/
void demo(void) {
#ifdef GPIO_SAMPLE
	// Create the gpio config for pin 13
	GPIO_InitConfig config;
	config.pin = GPIO_RED_LED;
	config.mode = GPIOx_MODER_Output;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	
	// Enable and initialize the GPIOD pin 13
	GPIO_Enable(GPIOD);
	GPIO_Init(GPIOD, config);
	
	// Turn on the GPIOD pin 13 
	GPIO_SetPin(GPIOD, GPIO_RED_LED);
	//GPIOD->MODER |= 0x01 << 2*GPIO_RED_LED;
	//GPIOD->ODR |= 0x01 << GPIO_RED_LED; 
#endif
}

/** End of File ***************************************************************/
