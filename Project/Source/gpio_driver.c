/************************************************
 *  1. Included Files
 ***********************************************/
#include "gpio_driver.h"


/************************************************
 *  2. Global, Static and Extern Variables
 ***********************************************/


/************************************************
 *  3. Function Defintition
 ***********************************************/
void GPIO_Enable(GPIO_TypeDef* gpioX) {
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
}
 
void GPIO_Init(GPIO_TypeDef* gpioX, GPIO_InitConfig config) {
	// Select GPIO pin mode
	gpioX->MODER |= config.mode << (config.pin*2);
	
	// Do config when GPIO pin mode is output
	if(GPIOx_MODER_Output == config.mode) {
		gpioX->OTYPER |= config.ouputType << config.pin;
		gpioX->OSPEEDR |= config.outputSpeed << (config.pin*2);
	} else {
		// Do nothing
	}
	
	// Select pull-up/pull-down resister connection
	gpioX->PUPDR |= config.pupd << (config.pin*2);
}

void GPIO_SetPin(GPIO_TypeDef* gpioX, uint8_t pin){
	// BSn pins are located in 16 LSB bits of BSRR
	gpioX->BSRR |= 0x01 << pin;
}
