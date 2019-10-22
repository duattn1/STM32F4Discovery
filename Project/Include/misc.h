/** @file misc.h
 *  @brief Function prototypes for miscellaneous utilities
 * 
 *  This is the header file for the definition of miscellaneous utilities
 *  
 * 	@author Tran Nhat Duat (duattn)
 *	@version 	V1.0
 */
 
#ifndef _MISC_H
#define _MISC_H

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
 /** @brief Do assertion for an expression
 *
 *  @param expression The evalutated expression.
 *  @retval nothing When the expression is true
 *  @retval error notification When the expression is false
 */
#ifdef USE_FULL_ASSERT
#define assert(expression) ((expression) ? (void)0 : assert_failed((uint8_t *)__FILE__, __LINE__))
#else
#define assert(expression) ((void)0) 
#endif

/*******************************************************************************
 * 4. Typedefs: Enumerations, Structures, Pointers, Others
 ******************************************************************************/
/**
 * @enum This enumeration is a list of basic settings.
 */
typedef enum {
	DISABLE = 0x00,
	ENABLE = 0x01
} Enum_Command_Typedef;
 
/*******************************************************************************
 * 5. Global, Static and Extern Variables
 ******************************************************************************/


/*******************************************************************************
 * 6. Function Prototypes
 ******************************************************************************/ 
#ifdef __cplusplus
extern "C"{
#endif

/** @brief Show the file name and line of code where the assertion failed.
 *
 *  @param file Name of file.
 *	@param line Code line number.
 *  @return nothing.
 */
void assert_failed(uint8_t* file, uint32_t line);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _MISC_H */

/** End of File ***************************************************************/
