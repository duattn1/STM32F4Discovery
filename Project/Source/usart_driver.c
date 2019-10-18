/** @file usart_driver.c
 *  @brief Function implementation for UART/USART driver.
 *
 *  This is the source file for the definition of UART/USART driver.
 *
 *  @author 	Tran Nhat Duat (duattn)
 *	@version 	V1.0
 */ 
 
/*******************************************************************************
 * 1. Included Files
 ******************************************************************************/
#include "usart_driver.h"

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
// TODO: below arrays are not complete
const Struct_USART_PinPack USART1Pins[] = 
	{{true, GPIO_PortGPIOA, GPIOx_GPIOx_AFR_AF7, GPIO_Pin9, GPIO_Pin10, GPIO_Pin8, GPIO_Pin11, GPIO_Pin12} };
const Struct_USART_PinPack USART2Pins[] = 
	{{true, GPIO_PortGPIOA, GPIOx_GPIOx_AFR_AF7, GPIO_Pin2, GPIO_Pin3, GPIO_Pin4, GPIO_Pin0, GPIO_Pin1} };
const Struct_USART_PinPack USART3Pins[] = 
	{{true, GPIO_PortGPIOB, GPIOx_GPIOx_AFR_AF7, GPIO_Pin10, GPIO_Pin11, GPIO_Pin12, GPIO_Pin13, GPIO_Pin14} };
const Struct_USART_PinPack UART4Pins[] = 
	{{false, GPIO_PortGPIOA, GPIOx_GPIOx_AFR_AF8, GPIO_Pin1} };
const Struct_USART_PinPack UART5Pins[] = {{false, } };
const Struct_USART_PinPack USART6Pins[] = {{true, } };

/*******************************************************************************
 * 6. Function Definitions
 ******************************************************************************/
void USART_Enable(Enum_USART_Typedef usartX){
	Enum_RCC_APB1ENR_Typedef apb1 = RCC_APB1ENR_NothingEnable;
	Enum_RCC_APB2ENR_Typedef apb2 = RCC_APB2ENR_NothingEnable;
	
	switch(usartX){
		case USART_USART1:
			apb2 = RCC_APB2ENR_USART1Enable;
			break;
		case USART_USART2:
			apb1 = RCC_APB1ENR_USART2Enable;
			break;
		case USART_USART3:
			apb1 = RCC_APB1ENR_USART3Enable;
			break;
		case USART_UART4:
			apb1 = RCC_APB1ENR_UART4Enable;
			break;
		case USART_UART5:
			apb1 = RCC_APB1ENR_UART5Enable;
			break;
		case USART_USART6:
			apb2 = RCC_APB2ENR_USART6Enable;
			break;
	};
	
	Struct_RCC_ClockEnableConfig config;
	config.APB1Config = apb1;
	config.APB2Config = apb2;
	RCC_EnableClock(config);
}

void USART_Init(USART_TypeDef* usartX, Struct_USART_InitConfig config){
	// Configure UART/USART pins
	Enum_GPIO_Pin_Typedef usartPins[] = {UART4Pins[0].pinTX, UART4Pins[0].pinRX};
	int i = 0;
	
	for(i = 0; i < sizeof(usartPins)/ sizeof(usartPins[0]); i++){
		Struct_GPIO_InitConfig pinConfig;
		pinConfig.pin = usartPins[i];
		pinConfig.mode = GPIOx_MODER_AlternateFunction;
		pinConfig.ouputType = GPIOx_OTYPER_PushPull;
		pinConfig.outputSpeed = GPIOx_OSPEEDR_High;
		pinConfig.pupd = GPIOx_PUPDR_PullUp;
		
		// Initialize UART/USART pins
		GPIO_Init(GPIOA, pinConfig); // TODO: GPIOA is still hard code
		// Select alternate function
		GPIO_ConfigPinAlternateFunction(GPIOA, usartPins[i], UART4Pins[0].af);
	}
	
	
	// Configure oversampling mode
	usartX->CR1 &= ~USART_CR1_OversamplingBy8;
	usartX->CR1 |= config.oversampling;	
	// Configure word length
	usartX->CR1 &= ~USART_CR1_16DataBits;
	usartX->CR1 |= config.wordLength;	
	// Configure number of stop bits
	usartX->CR2 &= ~USART_CR2_1And1HalfStopBit;
	usartX->CR2 |= config.stopBits;	
	// Configure number of stop bits
	usartX->CR2 &= ~USART_CR2_1And1HalfStopBit;
	usartX->CR2 |= config.stopBits;	
	// Configure number of clock polarity
	usartX->CR2 &= ~USART_CR2_HighIdle;
	usartX->CR2 |= config.clockPolarity;	
	// Configure number of clock phase
	usartX->CR2 &= ~USART_CR2_SecondClockTransition;
	usartX->CR2 |= config.clockPhase;
}

void USART_EnableDisableTransmitter(USART_TypeDef* usartX, Enum_Command_Typedef cmd){
	usartX->CR1 &= ~(ENABLE << TRANSMITTER_ENABLE_BIT_POSITION);
	usartX->CR1 |= cmd << TRANSMITTER_ENABLE_BIT_POSITION;
}

void USART_EnableDisableReceiver(USART_TypeDef* usartX, Enum_Command_Typedef cmd){
	usartX->CR1 &= ~(ENABLE << RECEIVER_ENABLE_BIT_POSITION);
	usartX->CR1 |= cmd << RECEIVER_ENABLE_BIT_POSITION;
}

void USART_EnableDisablePrescalerAndOutput(USART_TypeDef* usartX, Enum_Command_Typedef cmd){
	usartX->CR1 &= ~(ENABLE << USART_ENABLE_BIT_POSITION);
	usartX->CR1 |= cmd << USART_ENABLE_BIT_POSITION;
}

void USART_SendChar(USART_TypeDef *usartX, uint8_t character){
	// Make sure that there is no data in the Transmit Data Register before write to DR
	while(!(usartX->SR & USART_SR_FLAG_TXE)); 
	usartX->DR = character;
}

uint8_t getChar(USART_TypeDef *usartX){
	while(!(usartX->SR & USART_SR_FLAG_RXNE));
	return (uint8_t)usartX->DR;
}

/** End of File ***************************************************************/
