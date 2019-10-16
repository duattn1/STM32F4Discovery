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
volatile uint32_t ticks;  /**< System Tick counter */

/*******************************************************************************
 * 6. Function Definitions
 ******************************************************************************/
void infiniteLoop(void) {
	 while(1) {
		 
#ifdef GPIO_SAMPLE		 
		 /**< Toggle RED LED */
		 GPIO_SetPin(GPIOD, GPIO_RED_LED);
		 delay(1000);
		 GPIO_ResetPin(GPIOD, GPIO_RED_LED);
		 delay(1000);
#endif		
		 
	 }
}
 
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
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	
	/* Configure SysTick interrupt every 1ms */
	SysTick_Config(SystemCoreClock/1000);
#endif
}

void delay(volatile uint32_t time)
{
  ticks = time;
  while(ticks !=0);
} 
/** End of File ***************************************************************/
