/** @file usart_driver.h
 *  @brief Function prototypes for UART/USART driver.
 * 
 *  This is the header file for the definition of UART/USART driver.
 *  
 * 	@author Tran Nhat Duat (duattn)
 *	@version 	V1.0
 */
 
#ifndef _USART_DRIVER_H
#define _USART_DRIVER_H

/*******************************************************************************
 * 1. Included Files
 ******************************************************************************/
#include <stdint.h>
#include "stm32f407xx.h"
#include "gpio_driver.h"

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
 * @enum This enumeration is a list of UART and USART
 */
typedef enum {
	USART_USART1,
	USART_USART2,
	USART_USART3,
	USART_UART4,
	USART_UART5,
	USART_USART6
} Enum_USART_Typedef;

/**
 * @enum This enumeration is a list oversampling modes.
 */
typedef enum {
	USART_CR1_OversamplingBy16 = 0x00,
	USART_CR1_OversamplingBy8 = 0x01
} Enum_USART_CR1_OversamplingMode_Typedef;

/**
 * @enum This enumeration is a list of USART word lengths.
 */
typedef enum {
	USART_CR1_8DataBits = 0x00,
	USART_CR1_16DataBits = 0x01
} Enum_USART_CR1_WordLength_Typedef;
 
/**
 * @enum This enumeration is a list of stop bit number options.
 * @note USART_CR2_1HalfStopBit and USART_CR2_1And1HalfStopBit are not
 *       available for UART.
 */
typedef enum {
	USART_CR2_1StopBit = 0x00,
	USART_CR2_1HalfStopBit = 0x01,
	USART_CR2_2StopBits = 0x02,
	USART_CR2_1And1HalfStopBit = 0x03
} Enum_USART_CR2_StopBits_Typedef;

/**
 * @enum This enumeration is a list of clock polarity options
 * @note These options are not available for UART.
 */
typedef enum {
	USART_CR2_LowIdle = 0x00,
	USART_CR2_HighIdle = 0x01
} Enum_USART_CR2_ClockPolarity_Typedef;

/**
 * @enum This enumeration is a list of clock phase options
 * @note These options are not available for UART.
 */
typedef enum {
	USART_CR2_FirstClockTransition = 0x00,
	USART_CR2_SecondClockTransition = 0x01
} Enum_USART_CR2_ClockPhase_Typedef;
/*******************************************************************************
 * 5. Global, Static and Extern Variables
 ******************************************************************************/
/** @brief Enable clock for a UART/USART port.
 *
 *  @param usartX The UART/USART that is need to enable clock.
 *  @return nothing.
 */
void USART_Enable(Enum_USART_Typedef usartX);

/*******************************************************************************
 * 6. Function Prototypes
 ******************************************************************************/ 
#ifdef __cplusplus
extern "C"{
#endif
	


#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _USART_DRIVER_H */

/** End of File ***************************************************************/
