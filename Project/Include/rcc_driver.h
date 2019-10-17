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
 

/*******************************************************************************
 * 3. Function-like Macros
 ******************************************************************************/
 

/*******************************************************************************
 * 4. Typedefs: Enumerations, Structures, Pointers, Others
 ******************************************************************************/

/**
 * @enum This enumeration is a list of configured values for peripheral
 *       clock enable in AHB bus.
 */
typedef enum {	
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
 * @struct This structure contains configuration to enable peripheral clock.
 */
typedef struct {
	Enum_RCC_AHB1ENR_Typedef AHB1Config;	/**< Peripheral clock on AHB1 bus */
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
