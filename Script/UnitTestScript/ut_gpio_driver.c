/************************************************
 *  1. Included Files
 ***********************************************/
#include "ut_gpio_driver.h"

/************************************************
 *  2. Global, Static and Extern Variables
 ***********************************************/
void (*testcaseList[9])(void) = 
{
	Test_GPIO_Enable_TC1,
	Test_GPIO_Enable_TC2,
	Test_GPIO_Enable_TC3,
	Test_GPIO_Enable_TC4,
	Test_GPIO_Enable_TC5,
	Test_GPIO_Enable_TC6,
	Test_GPIO_Enable_TC7,
	Test_GPIO_Enable_TC8,
	Test_GPIO_Enable_TC9
};

/************************************************
 *  3. Function Defintition
 ***********************************************/
void Test_GPIO_Enable_TC1(void)
{
	// Declare object to check value of RCC->AHB1ENR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOA;
	// Init param_1
	duat  = 1.0;
	
	// Call the tested function
	GPIO_Enable(gpioX, );
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000001;
	global_var_1.mask = 0x00000001;
	compareBits(global_var_1);
}

void Test_GPIO_Enable_TC2(void)
{
	// Declare object to check value of RCC->AHB1ENR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOB;
	// Init param_1
	duat  = 2.0;
	
	// Call the tested function
	GPIO_Enable(gpioX, );
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000002;
	global_var_1.mask = 0x00000002;
	compareBits(global_var_1);
}

void Test_GPIO_Enable_TC3(void)
{
	// Declare object to check value of RCC->AHB1ENR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOC;
	// Init param_1
	duat  = 3.0;
	
	// Call the tested function
	GPIO_Enable(gpioX, );
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000004;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_GPIO_Enable_TC4(void)
{
	// Declare object to check value of RCC->AHB1ENR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_1
	duat  = 4.0;
	
	// Call the tested function
	GPIO_Enable(gpioX, );
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000008;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_GPIO_Enable_TC5(void)
{
	// Declare object to check value of RCC->AHB1ENR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOE;
	// Init param_1
	duat  = 5.0;
	
	// Call the tested function
	GPIO_Enable(gpioX, );
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000010;
	global_var_1.mask = 0x00000010;
	compareBits(global_var_1);
}

void Test_GPIO_Enable_TC6(void)
{
	// Declare object to check value of RCC->AHB1ENR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOF;
	// Init param_1
	duat  = 6.0;
	
	// Call the tested function
	GPIO_Enable(gpioX, );
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000020;
	global_var_1.mask = 0x00000020;
	compareBits(global_var_1);
}

void Test_GPIO_Enable_TC7(void)
{
	// Declare object to check value of RCC->AHB1ENR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOG;
	// Init param_1
	duat  = 7.0;
	
	// Call the tested function
	GPIO_Enable(gpioX, );
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000040;
	global_var_1.mask = 0x00000040;
	compareBits(global_var_1);
}

void Test_GPIO_Enable_TC8(void)
{
	// Declare object to check value of RCC->AHB1ENR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOH;
	// Init param_1
	duat  = 8.0;
	
	// Call the tested function
	GPIO_Enable(gpioX, );
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000080;
	global_var_1.mask = 0x00000080;
	compareBits(global_var_1);
}

void Test_GPIO_Enable_TC9(void)
{
	// Declare object to check value of RCC->AHB1ENR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOI;
	// Init param_1
	duat  = 9.0;
	
	// Call the tested function
	GPIO_Enable(gpioX, );
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000100;
	global_var_1.mask = 0x00000100;
	compareBits(global_var_1);
}

