/** @file sample_switch.h
 *  @brief Function prototypes for STM32F4 Discovery sample applications.
 * 
 *  This is the header file for the definition of STM32F4 Discovery 
 *	sample applications.
 *  
 * 	@author Tran Nhat Duat (duattn)
 *	@version 	V1.0
 */

#ifndef _SAMPLE_SWITCH_H
#define _SAMPLE_SWITCH_H

/*******************************************************************************
 * 1. Included Files
 ******************************************************************************/
#include "gpio_driver.h"

/*******************************************************************************
 * 2. Object-like Macros
 ******************************************************************************/
 
 
/*******************************************************************************
 * 3. Function-like Macros
 ******************************************************************************/


	
/*******************************************************************************
 * 4. Typedefs: Enumerations, Structures, Pointers, Othersefs
 ******************************************************************************/
 
 
/*******************************************************************************
 * 5. Global, Static and Extern Variables
 ******************************************************************************/


/*******************************************************************************
 * 6. Function Prototypes
 ******************************************************************************/
#ifdef __cplusplus
extern "C"{
#endif

/** @brief Run the peripherals sample applications according to the defined macros
 *
 *  @param void.
 *  @return nothing.
 */
void demo(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _SAMPLE_SWITCH_H */

/** End of File ***************************************************************/
