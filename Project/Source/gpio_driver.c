/** @file gpio_driver.c
 *  @brief Function implementation for GPIO driver.
 *
 *  This is the source file for the definition of GPIO driver.
 *
 *  @author 	Tran Nhat Duat (duattn)
 *	@version 	V1.0
 */ 
 
/*******************************************************************************
 * 1. Included Files
 ******************************************************************************/
#include "gpio_driver.h"

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
void GPIO_Enable(GPIO_TypeDef* gpioX) {
	if (GPIOA == gpioX)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
	if (GPIOB == gpioX)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
	if (GPIOC == gpioX)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
	if (GPIOD == gpioX)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	if (GPIOE == gpioX)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOEEN;
	if (GPIOF == gpioX)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN;
	if (GPIOG == gpioX)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOGEN;
	if (GPIOH == gpioX)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOHEN;
	if (GPIOI == gpioX)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOIEN;
}
 
void GPIO_Init(GPIO_TypeDef* gpioX, GPIO_InitConfig config) {
	GPIO_Enable(gpioX); 
	
	// Select GPIO pin mode
	gpioX->MODER &= ~(0x03 << config.pin*2);
	gpioX->MODER |= config.mode << (config.pin*2);
	
	// Do config when GPIO pin mode is output
	if(GPIOx_MODER_Output == config.mode) {
		gpioX->OTYPER &= ~(0x1 << config.pin);
		gpioX->OTYPER |= config.ouputType << config.pin;
		
		gpioX->OSPEEDR &= ~(0x03 << config.pin*2);
		gpioX->OSPEEDR |= config.outputSpeed << (config.pin*2);
	} else {
		// Do nothing
	}
	
	// Select pull-up/pull-down resister connection
	gpioX->PUPDR &= ~(0x03 << config.pin*2);
	gpioX->PUPDR |= config.pupd << (config.pin*2);
}

void GPIO_SetPin(GPIO_TypeDef* gpioX, uint8_t pin){
	// BSn pins are located in 16 LSB bits of BSRR
	gpioX->BSRR |= 0x01 << pin;
}

/** End of File ***************************************************************/
