#include "sample_switch.h"

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
