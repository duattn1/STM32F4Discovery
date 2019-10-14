/************************************************
 *  1. Included Files
 ***********************************************/
#include "ut_gpio_driver.h"

/************************************************
 *  2. Global, Static and Extern Variables
 ***********************************************/
void (*testcaseList[2])(void) = 
{
	Test_GPIO_Enable_TC1,
	Test_GPIO_Enable_TC2
};

/************************************************
 *  3. Function Defintition
 ***********************************************/
void Test_GPIO_Enable_TC1(void) {		
	Uint32Data_Typedef global_var_1;		// Create object to check RCC->AHB1ENR
	
	// Init param_1
	GPIO_TypeDef *gpioX = GPIOD;
	
	// Call the tested function
	GPIO_Enable(gpioX);	
	
	// Check result of global_var_1
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000008;
	global_var_1.mask = 0x00000008;	
	compareBits(global_var_1);	 
}

void Test_GPIO_Enable_TC2(void) {		
	Uint32Data_Typedef global_var_1;		// Create object to check RCC->AHB1ENR
	
	// Init param_1
	GPIO_TypeDef *gpioX = GPIOB;
	
	// Call the tested function
	GPIO_Enable(gpioX);	
	
	// Check result of global_var_1
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000002;
	global_var_1.mask = 0x00000002;	
	compareBits(global_var_1);	 
}


void Test_GPIO_Init_TC1(void) {		
	Uint32Data_Typedef global_var_1;		// Create object to check GPIOD->MODER
	Uint32Data_Typedef global_var_2;		// Create object to check GPIOD->OTYPER
	
	// Init param_1
	GPIO_TypeDef *gpioX = GPIOD;
	
	// Init param_2
	GPIO_InitConfig config;
	config.pin = GPIO_RED_LED;
	config.mode = GPIOx_MODER_Output;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	
	// Call the tested function
	GPIO_Init(gpioX, config);	
	
	// Check result of global_var_1
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00000008;
	global_var_1.mask = global_var_1.expected;	
	compareBits(global_var_1);	 
	
	// Check result of global_var_2
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0x00000008;
	global_var_2.mask = global_var_2.expected;	
	compareBits(global_var_2);
}
