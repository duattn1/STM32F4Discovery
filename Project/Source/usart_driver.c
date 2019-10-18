/** @file usart_driver.c
 *  @brief Function implementation for UART/USART driver.
 *
 *  This is the source file for the definition of UART/USART driver.
 *
 *  @author 	Tran Nhat Duat (duattn)
 *	@version 	V1.0
 */ 
 
/*******************************************************************************
 * 1. Included Files
 ******************************************************************************/
#include "usart_driver.h"

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
void USART_Enable(Enum_USART_Typedef usartX){
	Enum_RCC_APB1ENR_Typedef apb1 = RCC_APB1ENR_NothingEnable;
	Enum_RCC_APB2ENR_Typedef apb2 = RCC_APB2ENR_NothingEnable;
	
	switch(usartX){
		case USART_USART1:
			apb2 = RCC_APB2ENR_USART1Enable;
			break;
		case USART_USART2:
			apb1 = RCC_APB1ENR_USART2Enable;
			break;
		case USART_USART3:
			apb1 = RCC_APB1ENR_USART3Enable;
			break;
		case USART_UART4:
			apb1 = RCC_APB1ENR_UART4Enable;
			break;
		case USART_UART5:
			apb1 = RCC_APB1ENR_UART5Enable;
			break;
		case USART_USART6:
			apb2 = RCC_APB2ENR_USART6Enable;
			break;
	};
	
	Struct_RCC_ClockEnableConfig config;
	config.APB1Config = apb1;
	config.APB2Config = apb2;
	RCC_EnableClock(config);
}

/** End of File ***************************************************************/
