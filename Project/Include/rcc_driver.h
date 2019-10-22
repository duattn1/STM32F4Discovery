/** @file rcc_driver.h
 *  @brief Function prototypes for RCC driver.
 * 
 *  This is the header file for the definition of RCC driver.
 *  
 * 	@author Tran Nhat Duat (duattn)
 *	@version 	V1.0
 */
 
#ifndef _RCC_DRIVER_H
#define _RCC_DRIVER_H

/*******************************************************************************
 * 1. Included Files
 ******************************************************************************/
#include <stdint.h>
#include "stm32f407xx.h"

/*******************************************************************************
 * 2. Object-like Macros
 ******************************************************************************/
#define AHB1_CLOCK_REGISTER		RCC->AHB1ENR 

/*******************************************************************************
 * 3. Function-like Macros
 ******************************************************************************/
 /**
 * This function-like macro to check if a peripheral clock source is enables.
 */
#define IS_GPIO_PERIPHERAL_CLOCK_ENALBED(PERI)	\
	(((GPIOA == PERI) && (RCC_AHB1ENR_GPIOAEnable == (AHB1_CLOCK_REGISTER & RCC_AHB1ENR_GPIOAEnable))) || \
	((GPIOB == PERI) && (RCC_AHB1ENR_GPIOBEnable == (AHB1_CLOCK_REGISTER & RCC_AHB1ENR_GPIOBEnable))) || \
	((GPIOC == PERI) && (RCC_AHB1ENR_GPIOCEnable == (AHB1_CLOCK_REGISTER & RCC_AHB1ENR_GPIOCEnable))) || \
	((GPIOD == PERI) && (RCC_AHB1ENR_GPIODEnable == (AHB1_CLOCK_REGISTER & RCC_AHB1ENR_GPIODEnable))) || \
	((GPIOE == PERI) && (RCC_AHB1ENR_GPIOEEnable == (AHB1_CLOCK_REGISTER & RCC_AHB1ENR_GPIOEEnable))) || \
	((GPIOF == PERI) && (RCC_AHB1ENR_GPIOFEnable == (AHB1_CLOCK_REGISTER & RCC_AHB1ENR_GPIOFEnable))) || \
	((GPIOG == PERI) && (RCC_AHB1ENR_GPIOGEnable == (AHB1_CLOCK_REGISTER & RCC_AHB1ENR_GPIOGEnable))) || \
	((GPIOH == PERI) && (RCC_AHB1ENR_GPIOHEnable == (AHB1_CLOCK_REGISTER & RCC_AHB1ENR_GPIOHEnable))) || \
	((GPIOI == PERI) && (RCC_AHB1ENR_GPIOIEnable == (AHB1_CLOCK_REGISTER & RCC_AHB1ENR_GPIOIEnable))))

/*******************************************************************************
 * 4. Typedefs: Enumerations, Structures, Pointers, Others
 ******************************************************************************/

/**
 * @enum This enumeration is a list of configured values for peripheral
 *       clock enable in AHB1 bus.
 */
typedef enum {
	RCC_AHB1ENR_NothingEnable = 0x00000000,
	RCC_AHB1ENR_GPIOAEnable = 0x00000001,
	RCC_AHB1ENR_GPIOBEnable = 0x00000002,
	RCC_AHB1ENR_GPIOCEnable = 0x00000004,
	RCC_AHB1ENR_GPIODEnable = 0x00000008,
	RCC_AHB1ENR_GPIOEEnable = 0x00000010,
	RCC_AHB1ENR_GPIOFEnable = 0x00000020,
	RCC_AHB1ENR_GPIOGEnable = 0x00000040,
	RCC_AHB1ENR_GPIOHEnable = 0x00000080,
	RCC_AHB1ENR_GPIOIEnable = 0x00000100,
	// TODO: so on
 } Enum_RCC_AHB1ENR_Typedef;
 
/**
 * @enum This enumeration is a list of configured values for peripheral
 *       clock enable in APB1 bus.
 */
typedef enum {
	RCC_APB1ENR_NothingEnable = 0x00000000,
	RCC_APB1ENR_USART2Enable = 0x00020000,
	RCC_APB1ENR_USART3Enable = 0x00040000,
	RCC_APB1ENR_UART4Enable = 0x00080000,
	RCC_APB1ENR_UART5Enable = 0x00100000,
	// TODO: so on
 } Enum_RCC_APB1ENR_Typedef;

 /**
 * @enum This enumeration is a list of configured values for peripheral
 *       clock enable in APB2 bus.
 */
typedef enum {
	RCC_APB2ENR_NothingEnable = 0x00000000,
	RCC_APB2ENR_USART1Enable = 0x00000010,
	RCC_APB2ENR_USART6Enable = 0x00000020
	// TODO: so on
 } Enum_RCC_APB2ENR_Typedef;
 
/**
 * @struct This structure contains configuration to enable peripheral clock.
 */
typedef struct {
	Enum_RCC_AHB1ENR_Typedef AHB1Config;	/**< Peripheral clock on AHB1 bus */
	Enum_RCC_APB1ENR_Typedef APB1Config; 	/**< Peripheral clock on APB1 bus */
	Enum_RCC_APB2ENR_Typedef APB2Config; 	/**< Peripheral clock on APB2 bus */
	// Other buses
} Struct_RCC_ClockEnableConfig;
 
/*******************************************************************************
 * 5. Global, Static and Extern Variables
 ******************************************************************************/


/*******************************************************************************
 * 6. Function Prototypes
 ******************************************************************************/ 
#ifdef __cplusplus
extern "C"{
#endif
	
/** @brief TODO
 *
 *  @param TODO
 *  @return TODO
 */
void RCC_EnableClock(Struct_RCC_ClockEnableConfig config);


#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _RCC_DRIVER_H */

/** End of File ***************************************************************/
