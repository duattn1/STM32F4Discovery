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
	


#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _MISC_H */

/** End of File ***************************************************************/
