/** @file gpio_driver.h
 *  @brief Function prototypes for GPIO driver.
 * 
 *  This is the header file for the definition of GPIO driver.
 *  
 * 	@author Tran Nhat Duat (duattn)
 *	@version 	V1.0
 */
 
#ifndef _GPIO_DRIVER_H
#define _GPIO_DRIVER_H

/*******************************************************************************
 * 1. Included Files
 ******************************************************************************/
#include <stdint.h>
#include "stm32f407xx.h"
#include "rcc_driver.h"

/*******************************************************************************
 * 2. Object-like Macros
 ******************************************************************************/
 
/* STM32F4 Discovery Kit LED pins on GPIOD. */
#define GPIO_YELLOW_LED 		GPIO_Pin12
#define GPIO_ORANGE_LED 		GPIO_Pin13
#define GPIO_RED_LED 			GPIO_Pin14
#define GPIO_BLUE_LED 			GPIO_Pin15

/*******************************************************************************
 * 3. Function-like Macros
 ******************************************************************************/
 

/*******************************************************************************
 * 4. Typedefs: Enumerations, Structures, Pointers, Others
 ******************************************************************************/

/**
 * @enum This enumeration is a list of all GPIO ports.
 */
typedef enum {
	GPIO_PortGPIOA,
	GPIO_PortGPIOB,
	GPIO_PortGPIOC,
	GPIO_PortGPIOD,
	GPIO_PortGPIOE,
	GPIO_PortGPIOF,
	GPIO_PortGPIOG,
	GPIO_PortGPIOH,
	GPIO_PortGPIOI
} Enum_GPIO_Port_Typedef;

/**
 * @enum This enumeration is a list of all GPIO port pins.
 */
typedef enum {
	GPIO_Pin0 = 0x00,
	GPIO_Pin1 = 0x01,
	GPIO_Pin2 = 0x02,
	GPIO_Pin3 = 0x03,
	GPIO_Pin4 = 0x04,
	GPIO_Pin5 = 0x05,
	GPIO_Pin6 = 0x06,
	GPIO_Pin7 = 0x07,
	GPIO_Pin8 = 0x08,
	GPIO_Pin9 = 0x09,
	GPIO_Pin10 = 0x0A,
	GPIO_Pin11 = 0x0B,
	GPIO_Pin12 = 0x0C,
	GPIO_Pin13 = 0x0D,
	GPIO_Pin14 = 0x0E,
	GPIO_Pin15 = 0x0F
} Enum_GPIO_Pin_Typedef;

/**
 * @enum This enumeration is a list of configured values for pin mode.
 */
typedef enum {
	GPIOx_MODER_Input = 0x00,
	GPIOx_MODER_Output = 0x01,
	GPIOx_MODER_AlternateFunction = 0x02,
	GPIOx_MODER_Analog = 0x03
} Enum_GPIOx_MODER_Typedef;

/**
 * @enum This enumeration is a list of configured values for pin output type.
 */
typedef enum {
	GPIOx_OTYPER_PushPull = 0x00,
	GPIOx_OTYPER_OpenDrain = 0x01
} Enum_GPIOx_OTYPER_Typedef;

/**
 * @enum This enumeration is a list of configured values for pin output speed.
 */
typedef enum {
	GPIOx_OSPEEDR_Low = 0x00,
	GPIOx_OSPEEDR_Medium = 0x01,
	GPIOx_OSPEEDR_High = 0x02,
	GPIOx_OSPEEDR_VeryHigh = 0x03
} Enum_GPIOx_OSPEEDR_Typedef;

/**
 * @enum This enumeration is a list of configured values for pin pull-up/pull-down selection.
 */
typedef enum {
	GPIOx_PUPDR_NoPull = 0x00,
	GPIOx_PUPDR_PullUp = 0x01,
	GPIOx_PUPDR_PullDown = 0x02
	// Reserved value = 0x03
} Enum_GPIOx_PUPDR_Typedef;

/**
 * @struct This structure contains initialization configuration for a port pin.
 */
typedef struct {
	Enum_GPIO_Pin_Typedef pin;						/**< Pin number */
	Enum_GPIOx_MODER_Typedef mode;					/**< Pin mode */
	Enum_GPIOx_OTYPER_Typedef ouputType;			/**< Pin output type */
	Enum_GPIOx_OSPEEDR_Typedef outputSpeed;			/**< Pin output speed */
	Enum_GPIOx_PUPDR_Typedef pupd;					/**< Pin pull-up/pull-down selection */
} Struct_GPIO_InitConfig;

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
 *  @return nothing.
 */
void GPIO_Enable(Enum_GPIO_Port_Typedef port);

/** @brief Initialize a GPIO port pin.
 *
 *  @param gpioX The GPIO port.
 *	@param initConfig The configuration for the GPIO port.
 *  @return nthing.
 */
void GPIO_Init(GPIO_TypeDef* gpioX, Struct_GPIO_InitConfig initConfig);

/** @brief Set a pin to HIGH with atomic operation.
 *
 *  @param gpioX The GPIO port.
 *	@param pin The pin that need to be set to HIGH.
 *  @return nthing.
 */
void GPIO_SetPin(GPIO_TypeDef* gpioX, uint8_t pin);

 /** @brief Reset a pin to LOW with atomic operation.
 *
 *  @param gpioX The GPIO port.
 *	@param pin The pin that need to be reset to LOW.
 *  @return nthing.
 */
void GPIO_ResetPin(GPIO_TypeDef* gpioX, uint8_t pin);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _GPIO_DRIVER_H */

/** End of File ***************************************************************/
