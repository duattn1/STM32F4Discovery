/** @file ut_usart_driver.c
 *  @brief Function implementation for unit test of USART driver.
 *
 *  This file is generated from scripts. This is the source file for 
 *  the unit test definition of USART driver.
 *
 *  @author 	Tran Nhat Duat (duattn)
 *  @version 	V1.0
 */

/*******************************************************************************
 * 1. Included Files
 ******************************************************************************/
#include "ut_usart_driver.h"

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
void (*testcaseList[42])(void) = 
{
	Test_USART_Enable_TC1,
	Test_USART_Enable_TC2,
	Test_USART_Enable_TC3,
	Test_USART_Enable_TC4,
	Test_USART_Enable_TC5,
	Test_USART_Enable_TC6,
	Test_USART_EnableDisableTransmitter_TC1,
	Test_USART_EnableDisableTransmitter_TC2,
	Test_USART_EnableDisableTransmitter_TC3,
	Test_USART_EnableDisableTransmitter_TC4,
	Test_USART_EnableDisableTransmitter_TC5,
	Test_USART_EnableDisableTransmitter_TC6,
	Test_USART_EnableDisableTransmitter_TC7,
	Test_USART_EnableDisableTransmitter_TC8,
	Test_USART_EnableDisableTransmitter_TC9,
	Test_USART_EnableDisableTransmitter_TC10,
	Test_USART_EnableDisableTransmitter_TC11,
	Test_USART_EnableDisableTransmitter_TC12,
	Test_USART_EnableDisableReceiver_TC1,
	Test_USART_EnableDisableReceiver_TC2,
	Test_USART_EnableDisableReceiver_TC3,
	Test_USART_EnableDisableReceiver_TC4,
	Test_USART_EnableDisableReceiver_TC5,
	Test_USART_EnableDisableReceiver_TC6,
	Test_USART_EnableDisableReceiver_TC7,
	Test_USART_EnableDisableReceiver_TC8,
	Test_USART_EnableDisableReceiver_TC9,
	Test_USART_EnableDisableReceiver_TC10,
	Test_USART_EnableDisableReceiver_TC11,
	Test_USART_EnableDisableReceiver_TC12,
	Test_USART_EnableDisablePrescalerAndOutput_TC1,
	Test_USART_EnableDisablePrescalerAndOutput_TC2,
	Test_USART_EnableDisablePrescalerAndOutput_TC3,
	Test_USART_EnableDisablePrescalerAndOutput_TC4,
	Test_USART_EnableDisablePrescalerAndOutput_TC5,
	Test_USART_EnableDisablePrescalerAndOutput_TC6,
	Test_USART_EnableDisablePrescalerAndOutput_TC7,
	Test_USART_EnableDisablePrescalerAndOutput_TC8,
	Test_USART_EnableDisablePrescalerAndOutput_TC9,
	Test_USART_EnableDisablePrescalerAndOutput_TC10,
	Test_USART_EnableDisablePrescalerAndOutput_TC11,
	Test_USART_EnableDisablePrescalerAndOutput_TC12
};

/*******************************************************************************
 * 6. Function Prototypes
 ******************************************************************************/
/*******************************************************************************
 * 6. Function Definitions
 ******************************************************************************/
void Test_USART_Enable_TC1(void)
{
	// Declare object to check value of RCC->APB1ENR
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of RCC->APB2ENR
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	Enum_USART_Typedef usartX = USART_USART1;
	
	// Call the tested function
	USART_Enable(usartX);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->APB1ENR;
	global_var_1.expected = 0.0;
	global_var_1.mask = 0.0;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = RCC->APB2ENR;
	global_var_2.expected = 0x00000010;
	global_var_2.mask = 0x00000010;
	compareBits(global_var_2);
}

void Test_USART_Enable_TC2(void)
{
	// Declare object to check value of RCC->APB1ENR
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of RCC->APB2ENR
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	Enum_USART_Typedef usartX = USART_USART2;
	
	// Call the tested function
	USART_Enable(usartX);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->APB1ENR;
	global_var_1.expected = 0x00020000;
	global_var_1.mask = 0x00020000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = RCC->APB2ENR;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
}

void Test_USART_Enable_TC3(void)
{
	// Declare object to check value of RCC->APB1ENR
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of RCC->APB2ENR
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	Enum_USART_Typedef usartX = USART_USART3;
	
	// Call the tested function
	USART_Enable(usartX);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->APB1ENR;
	global_var_1.expected = 0x00040000;
	global_var_1.mask = 0x00040000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = RCC->APB2ENR;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
}

void Test_USART_Enable_TC4(void)
{
	// Declare object to check value of RCC->APB1ENR
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of RCC->APB2ENR
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	Enum_USART_Typedef usartX = USART_UART4;
	
	// Call the tested function
	USART_Enable(usartX);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->APB1ENR;
	global_var_1.expected = 0x00080000;
	global_var_1.mask = 0x00080000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = RCC->APB2ENR;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
}

void Test_USART_Enable_TC5(void)
{
	// Declare object to check value of RCC->APB1ENR
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of RCC->APB2ENR
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	Enum_USART_Typedef usartX = USART_UART5;
	
	// Call the tested function
	USART_Enable(usartX);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->APB1ENR;
	global_var_1.expected = 0x00100000;
	global_var_1.mask = 0x00100000;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = RCC->APB2ENR;
	global_var_2.expected = 0.0;
	global_var_2.mask = 0.0;
	compareBits(global_var_2);
}

void Test_USART_Enable_TC6(void)
{
	// Declare object to check value of RCC->APB1ENR
	Uint32Data_Typedef global_var_1;
	// Declare object to check value of RCC->APB2ENR
	Uint32Data_Typedef global_var_2;
	
	// Init param_1
	Enum_USART_Typedef usartX = USART_USART6;
	
	// Call the tested function
	USART_Enable(usartX);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = RCC->APB1ENR;
	global_var_1.expected = 0.0;
	global_var_1.mask = 0.0;
	compareBits(global_var_1);
	// Compare global_var_2 with expected value
	global_var_2.actual = RCC->APB2ENR;
	global_var_2.expected = 0x00000020;
	global_var_2.mask = 0x00000020;
	compareBits(global_var_2);
}

void Test_USART_EnableDisableTransmitter_TC1(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART1;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableTransmitter_TC2(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART1;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000008;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableTransmitter_TC3(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART2;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableTransmitter_TC4(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART2;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000008;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableTransmitter_TC5(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART3;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableTransmitter_TC6(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART3;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000008;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableTransmitter_TC7(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART4;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableTransmitter_TC8(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART4;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000008;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableTransmitter_TC9(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART5;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableTransmitter_TC10(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART5;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000008;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableTransmitter_TC11(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART6;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableTransmitter_TC12(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART6;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableTransmitter(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000008;
	global_var_1.mask = 0x00000008;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC1(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART1;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC2(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART1;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000004;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC3(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART2;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC4(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART2;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000004;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC5(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART3;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC6(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART3;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000004;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC7(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART4;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC8(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART4;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000004;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC9(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART5;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC10(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART5;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000004;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC11(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART6;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisableReceiver_TC12(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART6;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisableReceiver(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000004;
	global_var_1.mask = 0x00000004;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC1(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART1;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC2(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART1;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00002000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC3(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART2;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC4(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART2;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00002000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC5(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART3;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC6(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART3;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00002000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC7(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART4;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC8(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART4;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00002000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC9(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART5;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC10(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = UART5;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00002000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC11(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART6;
	// Init param_2
	Enum_Command_Typedef cmd = DISABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00000000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}

void Test_USART_EnableDisablePrescalerAndOutput_TC12(void)
{
	// Declare object to check value of usartX->CR1
	Uint32Data_Typedef global_var_1;
	
	// Init param_1
	USART_TypeDef* usartX = USART6;
	// Init param_2
	Enum_Command_Typedef cmd = ENABLE;
	
	// Call the tested function
	USART_EnableDisablePrescalerAndOutput(usartX, cmd);
	
	// Compare global_var_1 with expected value
	global_var_1.actual = usartX->CR1;
	global_var_1.expected = 0x00002000;
	global_var_1.mask = 0x00002000;
	compareBits(global_var_1);
}


