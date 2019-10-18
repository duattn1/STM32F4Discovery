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
#include <stdbool.h>
#include "stm32f407xx.h"
#include "gpio_driver.h"
#include "misc.h"

/*******************************************************************************
 * 2. Object-like Macros
 ******************************************************************************/
#define RECEIVER_ENABLE_BIT_POSITION			2
#define TRANSMITTER_ENABLE_BIT_POSITION		3
#define USART_ENABLE_BIT_POSITION					13

#define USART_SR_FLAG_RXNE			(0x01 << 5)	
#define USART_SR_FLAG_TXE				(0x01 << 7)	

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

/**
 * @struct This structure contains required pins of a UART/USART pin pack.
 */
typedef struct {
	bool isSynchronous;							/**< Used to distinguish UART and USART */
	Enum_GPIO_Port_Typedef port;		/**< Port of TX, RX, CK, CTS and RTS pin */
	Enum_GPIOx_AFR_Typedef af;			/**< UART/USART corresponding AF mode */
	Enum_GPIO_Pin_Typedef pinTX;		/**< TX pin */
	Enum_GPIO_Pin_Typedef pinRX;		/**< RX pin */
	Enum_GPIO_Pin_Typedef pinCK;		/**< CK pin */
	Enum_GPIO_Pin_Typedef pinCTS;		/**< CTS pin */
	Enum_GPIO_Pin_Typedef pinRTS;		/**< RTS pin */
} Struct_USART_PinPack;

/**
 * @struct This structure contains initialization configuration for a port pin.
 */
typedef struct {
	Enum_USART_CR1_OversamplingMode_Typedef oversampling;			/**< Oversampling mode */
	Enum_USART_CR1_WordLength_Typedef wordLength;							/**< Word length */
	Enum_USART_CR2_StopBits_Typedef stopBits;									/**< Number of stop bits */
	Enum_USART_CR2_ClockPolarity_Typedef clockPolarity;				/**< Clock polarity */
	Enum_USART_CR2_ClockPhase_Typedef clockPhase;							/**< Clock phase */
} Struct_USART_InitConfig;
/*******************************************************************************
 * 5. Global, Static and Extern Variables
 ******************************************************************************/


/*******************************************************************************
 * 6. Function Prototypes
 ******************************************************************************/ 
#ifdef __cplusplus
extern "C"{
#endif

/** @brief Enable clock for a UART/USART.
 *
 *  @param usartX The UART/USART that is need to enable clock.
 *  @return nothing.
 */
void USART_Enable(Enum_USART_Typedef usartX);

/** @brief Initialize a UART/USART.
 *
 *  @param usartX The UART/USART that is need to configure.
 *	@param config The initialization configuraton.
 *  @return nothing.
 */
void USART_Init(USART_TypeDef* usartX, Struct_USART_InitConfig config);

/** @brief Enable/Disable transmitter of a UART/USART.
 *
 *  @param usartX The UART/USART that is need to enable/disable transmitter.
 *	@param cmd The command ENABLE or DISABLE.
 *  @return nothing.
 */
void USART_EnableDisableTransmitter(USART_TypeDef* usartX, Enum_Command_Typedef cmd);

/** @brief Enable/Disable transmitter of a UART/USART.
 *
 *  @param usartX The UART/USART that is need to enable/disable transmitter.
 *	@param cmd The command ENABLE or DISABLE.
 *  @return nothing.
 */
void USART_EnableDisableReceiver(USART_TypeDef* usartX, Enum_Command_Typedef cmd);

/** @brief Enable/Disable prescaler and output of a UART/USART.
 *
 *  @param usartX The UART/USART that is need to enable/disable prescaler and output.
 *	@param cmd The command ENABLE or DISABLE.
 *  @return nothing.
 */
void USART_EnableDisablePrescalerAndOutput(USART_TypeDef* usartX, Enum_Command_Typedef cmd);

/** @brief Send 8 bytes (1 character) of data via UART/USART.
 *
 *  @param usartX The UART/USART that is used as transmitter.
 *	@param character The character to be sent.
 *  @return nothing.
 */
void USART_SendChar(USART_TypeDef *usartX, uint8_t character);

/** @brief Receive 8 bytes (1 character) of data via UART/USART.
 *
 *  @param usartX The UART/USART that is used as the receiver.
 *  @return The received data.
 */
uint8_t getChar(USART_TypeDef *usartX);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _USART_DRIVER_H */

/** End of File ***************************************************************/
