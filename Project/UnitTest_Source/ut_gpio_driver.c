/** @file ut_gpio_driver.c
 *  @brief Function implementation for unit test of GPIO driver.
 *
 *  This file is generated from scripts. This is the source file for 
 *  the unit test definition of GPIO driver.
 *
 *  @author 	Tran Nhat Duat (duattn)
 *  @version 	V1.0
 */

/*******************************************************************************
 * 1. Included Files
 ******************************************************************************/
#include "ut_gpio_driver.h"

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
// List of all test cases
void (*testcaseListAAA[43])(void) = 
{
	Test_GPIO_Enable_TC1,
	Test_GPIO_Enable_TC2,
	Test_GPIO_Enable_TC3,
	Test_GPIO_Enable_TC4,
	Test_GPIO_Enable_TC5,
	Test_GPIO_Enable_TC6,
	Test_GPIO_Enable_TC7,
	Test_GPIO_Enable_TC8,
	Test_GPIO_Enable_TC9,
	Test_GPIO_Init_TC1,
	Test_GPIO_Init_TC2,
	Test_GPIO_Init_TC3,
	Test_GPIO_Init_TC4,
	Test_GPIO_Init_TC5,
	Test_GPIO_Init_TC6,
	Test_GPIO_Init_TC7,
	Test_GPIO_Init_TC8,
	Test_GPIO_Init_TC9,
	Test_GPIO_Init_TC10,
	Test_GPIO_Init_TC11,
	Test_GPIO_Init_TC12,
	Test_GPIO_Init_TC13,
	Test_GPIO_Init_TC14,
	Test_GPIO_Init_TC15,
	Test_GPIO_Init_TC16,
	Test_GPIO_SetPin_TC1,
	Test_GPIO_ResetPin_TC1,
	Test_GPIO_ConfigPinAlternateFunction_TC1,
	Test_GPIO_ConfigPinAlternateFunction_TC2,
	Test_GPIO_ConfigPinAlternateFunction_TC3,
	Test_GPIO_ConfigPinAlternateFunction_TC4,
	Test_GPIO_ConfigPinAlternateFunction_TC5,
	Test_GPIO_ConfigPinAlternateFunction_TC6,
	Test_GPIO_ConfigPinAlternateFunction_TC7,
	Test_GPIO_ConfigPinAlternateFunction_TC8,
	Test_GPIO_ConfigPinAlternateFunction_TC9,
	Test_GPIO_ConfigPinAlternateFunction_TC10,
	Test_GPIO_ConfigPinAlternateFunction_TC11,
	Test_GPIO_ConfigPinAlternateFunction_TC12,
	Test_GPIO_ConfigPinAlternateFunction_TC13,
	Test_GPIO_ConfigPinAlternateFunction_TC14,
	Test_GPIO_ConfigPinAlternateFunction_TC15,
	Test_GPIO_ConfigPinAlternateFunction_TC16
};

/*******************************************************************************
 * 6. Function Prototypes
 ******************************************************************************/
/*******************************************************************************
 * 6. Function Definitions
 ******************************************************************************/
void Test_GPIO_Enable_TC1(void)
{
	// Declare object to check value of RCC->AHB1ENR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	Enum_GPIO_Port_Typedef port = GPIO_PortGPIOA;
	
	// Call the tested function
	GPIO_Enable(port);
	
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
	Enum_GPIO_Port_Typedef port = GPIO_PortGPIOB;
	
	// Call the tested function
	GPIO_Enable(port);
	
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
	Enum_GPIO_Port_Typedef port = GPIO_PortGPIOC;
	
	// Call the tested function
	GPIO_Enable(port);
	
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
	Enum_GPIO_Port_Typedef port = GPIO_PortGPIOD;
	
	// Call the tested function
	GPIO_Enable(port);
	
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
	Enum_GPIO_Port_Typedef port = GPIO_PortGPIOE;
	
	// Call the tested function
	GPIO_Enable(port);
	
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
	Enum_GPIO_Port_Typedef port = GPIO_PortGPIOF;
	
	// Call the tested function
	GPIO_Enable(port);
	
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
	Enum_GPIO_Port_Typedef port = GPIO_PortGPIOG;
	
	// Call the tested function
	GPIO_Enable(port);
	
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
	Enum_GPIO_Port_Typedef port = GPIO_PortGPIOH;
	
	// Call the tested function
	GPIO_Enable(port);
	
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
	Enum_GPIO_Port_Typedef port = GPIO_PortGPIOI;
	
	// Call the tested function
	GPIO_Enable(port);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->AHB1ENR;
	global_var_1.expected = 0x00000100;
	global_var_1.mask = 0x00000100;
	compareBits(global_var_1);
}

void Test_GPIO_Init_TC1(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin0;
	config.mode = GPIOx_MODER_Input;
	config.pupd = GPIOx_PUPDR_NoPull;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000003;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0.0;
	global_var_3.mask = 0.0;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00000000;
	global_var_4.mask = 0x00000003;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC2(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin1;
	config.mode = GPIOx_MODER_Output;
	config.ouputType = GPIOx_OTYPER_OpenDrain;
	config.outputSpeed = GPIOx_OSPEEDR_Medium;
	config.pupd = GPIOx_PUPDR_PullUp;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00000004;
	global_var_1.mask = 0x0000000C;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0x00000002;
	global_var_2.mask = 0x00000002;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0x00000004;
	global_var_3.mask = 0x0000000C;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00000004;
	global_var_4.mask = 0x0000000C;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC3(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin2;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_High;
	config.pupd = GPIOx_PUPDR_PullDown;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00000020;
	global_var_1.mask = 0x00000030;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0x00000000;
	global_var_2.mask = 0x00000004;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0x00000020;
	global_var_3.mask = 0x00000030;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00000020;
	global_var_4.mask = 0x00000030;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC4(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin3;
	config.mode = GPIOx_MODER_Analog;
	config.pupd = GPIOx_PUPDR_NoPull;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x000000C0;
	global_var_1.mask = 0x000000C0;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0.0;
	global_var_3.mask = 0.0;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00000000;
	global_var_4.mask = 0x000000C0;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC5(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin4;
	config.mode = GPIOx_MODER_Input;
	config.pupd = GPIOx_PUPDR_NoPull;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000300;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0.0;
	global_var_3.mask = 0.0;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00000000;
	global_var_4.mask = 0x00000300;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC6(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin5;
	config.mode = GPIOx_MODER_Output;
	config.ouputType = GPIOx_OTYPER_OpenDrain;
	config.outputSpeed = GPIOx_OSPEEDR_Medium;
	config.pupd = GPIOx_PUPDR_PullUp;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00000400;
	global_var_1.mask = 0x00000C00;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0x00000020;
	global_var_2.mask = 0x00000020;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0x00000400;
	global_var_3.mask = 0x00000C00;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00000400;
	global_var_4.mask = 0x00000C00;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC7(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin6;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_High;
	config.pupd = GPIOx_PUPDR_PullDown;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00002000;
	global_var_1.mask = 0x00003000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0x00000000;
	global_var_2.mask = 0x00000040;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0x00002000;
	global_var_3.mask = 0x00003000;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00002000;
	global_var_4.mask = 0x00003000;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC8(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin7;
	config.mode = GPIOx_MODER_Analog;
	config.pupd = GPIOx_PUPDR_NoPull;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x0000C000;
	global_var_1.mask = 0x0000C000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0.0;
	global_var_3.mask = 0.0;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00000000;
	global_var_4.mask = 0x0000C000;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC9(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin8;
	config.mode = GPIOx_MODER_Input;
	config.pupd = GPIOx_PUPDR_NoPull;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00030000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0.0;
	global_var_3.mask = 0.0;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00000000;
	global_var_4.mask = 0x00030000;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC10(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin9;
	config.mode = GPIOx_MODER_Output;
	config.ouputType = GPIOx_OTYPER_OpenDrain;
	config.outputSpeed = GPIOx_OSPEEDR_Medium;
	config.pupd = GPIOx_PUPDR_PullUp;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00040000;
	global_var_1.mask = 0x000C0000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0x00000200;
	global_var_2.mask = 0x00000200;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0x00040000;
	global_var_3.mask = 0x000C0000;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00040000;
	global_var_4.mask = 0x000C0000;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC11(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin10;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_High;
	config.pupd = GPIOx_PUPDR_PullDown;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00200000;
	global_var_1.mask = 0x00300000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0x00000000;
	global_var_2.mask = 0x00000400;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0x00200000;
	global_var_3.mask = 0x00300000;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00200000;
	global_var_4.mask = 0x00300000;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC12(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin11;
	config.mode = GPIOx_MODER_Analog;
	config.pupd = GPIOx_PUPDR_NoPull;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00C00000;
	global_var_1.mask = 0x00C00000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0.0;
	global_var_3.mask = 0.0;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00000000;
	global_var_4.mask = 0x00C00000;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC13(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin12;
	config.mode = GPIOx_MODER_Input;
	config.pupd = GPIOx_PUPDR_NoPull;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x03000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0.0;
	global_var_3.mask = 0.0;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00000000;
	global_var_4.mask = 0x03000000;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC14(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin13;
	config.mode = GPIOx_MODER_Output;
	config.ouputType = GPIOx_OTYPER_OpenDrain;
	config.outputSpeed = GPIOx_OSPEEDR_Medium;
	config.pupd = GPIOx_PUPDR_PullUp;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x04000000;
	global_var_1.mask = 0x0C000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0x00002000;
	global_var_2.mask = 0x00002000;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0x04000000;
	global_var_3.mask = 0x0C000000;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x04000000;
	global_var_4.mask = 0x0C000000;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC15(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_High;
	config.pupd = GPIOx_PUPDR_PullDown;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0x20000000;
	global_var_1.mask = 0x30000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0x00000000;
	global_var_2.mask = 0x00004000;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0x20000000;
	global_var_3.mask = 0x30000000;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x20000000;
	global_var_4.mask = 0x30000000;
	compareBits(global_var_4);
}

void Test_GPIO_Init_TC16(void)
{
	// Declare object to check value of gpioX->MODER
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->OTYPER
	Uint32Data_Typedef global_var_2;
	// Declare object to check value of gpioX->OSPEEDR
	Uint32Data_Typedef global_var_3;
	// Declare object to check value of gpioX->PUPDR
	Uint32Data_Typedef global_var_4;
	
	// Init param_1
	GPIO_TypeDef * gpioX = GPIOD;
	// Init param_2
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin15;
	config.mode = GPIOx_MODER_Analog;
	config.pupd = GPIOx_PUPDR_NoPull;
	
	// Test case precondition configuration
	GPIO_Enable(GPIO_PortGPIOD);
	
	// Call the tested function
	GPIO_Init(gpioX, config);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->MODER;
	global_var_1.expected = 0xC0000000;
	global_var_1.mask = 0xC0000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->OTYPER;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
	// Compare global_var_3 with expected value
	global_var_3.actual = gpioX->OSPEEDR;
	global_var_3.expected = 0.0;
	global_var_3.mask = 0.0;
	compareBits(global_var_3);
	// Compare global_var_4 with expected value
	global_var_4.actual = gpioX->PUPDR;
	global_var_4.expected = 0x00000000;
	global_var_4.mask = 0xC0000000;
	compareBits(global_var_4);
}

void Test_GPIO_SetPin_TC1(void)
{
	// Declare object to check value of gpioX->ODR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_Output;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_SetPin(gpioX, pin);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->ODR;
	global_var_1.expected = 0x00004000;
	global_var_1.mask = 0x00004000;
	compareBits(global_var_1);
}

void Test_GPIO_ResetPin_TC1(void)
{
	// Declare object to check value of gpioX->ODR
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_Output;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ResetPin(gpioX, pin);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->ODR;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00004000;
	compareBits(global_var_1);
}

void Test_GPIO_ConfigPinAlternateFunction_TC1(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF0;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x00000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC2(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF1;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x01000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC3(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF2;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x02000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC4(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF3;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x03000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC5(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF4;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x04000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC6(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF5;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x05000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC7(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF6;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x06000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC8(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF7;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x07000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC9(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF8;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x08000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC10(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF9;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x09000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC11(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF10;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x0A000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC12(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF11;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x0B000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC13(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF12;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x0C000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC14(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF13;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x0D000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC15(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF14;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x0E000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

void Test_GPIO_ConfigPinAlternateFunction_TC16(void)
{
	// Declare object to check value of gpioX->AFR[0]
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of gpioX->AFR[1]
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	GPIO_TypeDef* gpioX = GPIOD;
	// Init param_2
	Enum_GPIO_Pin_Typedef pin = GPIO_Pin14;
	// Init param_3
	Enum_GPIOx_AFR_Typedef altFunction = GPIOx_GPIOx_AFR_AF15;
	
	// Test case precondition configuration
	Struct_GPIO_InitConfig config;
	config.pin = GPIO_Pin14;
	config.mode = GPIOx_MODER_AlternateFunction;
	config.ouputType = GPIOx_OTYPER_PushPull;
	config.outputSpeed = GPIOx_OSPEEDR_Low;
	config.pupd = GPIOx_PUPDR_PullUp;
	GPIO_Enable(GPIO_PortGPIOD);
	GPIO_Init(GPIOD, config);
	
	// Call the tested function
	GPIO_ConfigPinAlternateFunction(gpioX, pin, altFunction);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = gpioX->AFR[0];
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = gpioX->AFR[1];
	global_var_2.expected = 0x0F000000;
	global_var_2.mask = 0x0F000000;
	compareBits(global_var_2);
}

/** End of File ***************************************************************/

