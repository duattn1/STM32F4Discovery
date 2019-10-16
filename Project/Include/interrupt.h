/** @file interrupt.h
 *  @brief Function prototypes for all interrupt handlers.
 * 
 *  This is the header file for the definition of all interrupt handlers.
 *  
 * 	@author Tran Nhat Duat (duattn)
 *	@version 	V1.0
 */
 
#ifndef _INTERRUPT_H
#define _INTERRUPT_H

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

 
/*******************************************************************************
 * 5. Global, Static and Extern Variables
 ******************************************************************************/
extern volatile uint32_t ticks;

/*******************************************************************************
 * 6. Function Prototypes
 ******************************************************************************/ 
#ifdef __cplusplus
extern "C"{
#endif

/** @brief STM32F4 Discovery System Tick interrupt handler
 *
 *  @param void
 *  @return nothing.
 */
void SysTick_Handler(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _INTERRUPT_H */

/** End of File ***************************************************************/
