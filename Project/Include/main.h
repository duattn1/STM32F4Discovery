/** @file main.h
 *  @brief Function prototypes for main() function processing.
 * 
 *  This is the header file for main processing.
 *  
 * 	@author Tran Nhat Duat (duattn)
 *	@version 	V1.0
 */
 
#ifndef _MAIN_H
#define _MAIN_H

/*******************************************************************************
 * 1. Included Files
 ******************************************************************************/
#include "sample_switch.h"

#ifdef UNIT_TEST_RUNNING
#include "ut_main.h"
#endif

/*******************************************************************************
 * 2. Object-like Macros
 ******************************************************************************/
 

/*******************************************************************************
 * 3. Function-like Macros
 ******************************************************************************/
 

/*******************************************************************************
 * 4. Typedefs: Enumerations, Structures, Pointers, Others
 ******************************************************************************/
#ifdef UNIT_TEST_RUNNING
struct __FILE
{
  int handle;
  /* Whatever you require here. If the only file you are using is */
  /* standard output using printf() for debugging, no file handling */
  /* is required. */
};
#endif

/*******************************************************************************
 * 5. Global, Static and Extern Variables
 ******************************************************************************/


/*******************************************************************************
 * 6. Function Prototypes
 ******************************************************************************/ 
#ifdef __cplusplus
extern "C"{
#endif

#ifdef UNIT_TEST_RUNNING
/** @brief Send all printf() output to the SWV console.
 *
 *  @param ch Character to be sent.
 *	@param f File pointer.
 *  @return Value it has written.
 */
int fputc(int ch, FILE *f) {
    ITM_SendChar(ch);
    return(ch);
}
#endif


#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _MAIN_H */

/** End of File ***************************************************************/
