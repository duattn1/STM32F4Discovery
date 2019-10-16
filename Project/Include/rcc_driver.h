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
 * @enum This enumeration is a list of all port pins.
 */
typedef enum {	
	GPIO_Pin12 = 0x0C,
	GPIO_Pin13 = 0x0D,
	GPIO_Pin14 = 0x0E,
	GPIO_Pin15 = 0x0F
 } Pin_Typedef;

/*******************************************************************************
 * 5. Global, Static and Extern Variables
 ******************************************************************************/


/*******************************************************************************
 * 6. Function Prototypes
 ******************************************************************************/ 
#ifdef __cplusplus
extern "C"{
#endif
	
/** @brief Enable clock for a GPIO port.
 *
 *  @param gpioX The GPIO port.
 *  @return void.
 */
void GPIO_Enable(GPIO_TypeDef* gpioX);


#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _GPIO_DRIVER_H */

/** End of File ***************************************************************/
