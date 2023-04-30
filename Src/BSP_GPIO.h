/*
 * BSP_GPIO.h
 *
 *  Created on: Apr 19, 2023
 *      Author: nayye
 */

#ifndef BSP_GPIO_H_
#define BSP_GPIO_H_

//#define ENABLE_GPIOA_CLOCK	rcc->AHB2ENR1 = 1U<<0 // enable clock GPIOA
#define ENABLE_GPIOA_CLOCK	rcc->AHB2ENR1 = (rcc->AHB2ENR1 = 1U<<0 | rcc->AHB2ENR1) // enable clock GPIOA
#define ENABLE_GPIOB_CLOCK	rcc->AHB2ENR1 = (rcc->AHB2ENR1 = 1U<<1 | rcc->AHB2ENR1) // enable clock GPIOB
#define ENABLE_GPIOC_CLOCK	rcc->AHB2ENR1 = (rcc->AHB2ENR1 = 1U<<2 | rcc->AHB2ENR1) // enable clock GPIOC
#define ENABLE_GPIOD_CLOCK	rcc->AHB2ENR1 = (rcc->AHB2ENR1 = 1U<<3 | rcc->AHB2ENR1) // enable clock GPIOD
#define ENABLE_GPIOE_CLOCK	rcc->AHB2ENR1 = (rcc->AHB2ENR1 = 1U<<4 | rcc->AHB2ENR1) // enable clock GPIOE
#define ENABLE_GPIOF_CLOCK	rcc->AHB2ENR1 = (rcc->AHB2ENR1 = 1U<<5 | rcc->AHB2ENR1) // enable clock GPIOF
#define ENABLE_GPIOG_CLOCK	rcc->AHB2ENR1 = (rcc->AHB2ENR1 = 1U<<6 | rcc->AHB2ENR1) // enable clock GPIOG
#define ENABLE_GPIOH_CLOCK	rcc->AHB2ENR1 = (rcc->AHB2ENR1 = 1U<<7 | rcc->AHB2ENR1) // enable clock GPIOH
#define ENABLE_GPIOI_CLOCK	rcc->AHB2ENR1 = (rcc->AHB2ENR1 = 1U<<8 | rcc->AHB2ENR1) // enable clock GPIOI

#define PERIPH_BASE			0x40000000U
#define AHB2PERIPH_BASE		(PERIPH_BASE + 0x02020000U)		//0x42020000U

#define GPIOA_BASE	(AHB2PERIPH_BASE + 0x0000U)
#define GPIOB_BASE	(GPIOA_BASE + 0x0400U)
#define GPIOC_BASE	(GPIOA_BASE + 0x0800U)
#define GPIOD_BASE	(GPIOA_BASE + 0x0C00U)
#define GPIOE_BASE	(GPIOA_BASE + 0x1000U)
#define GPIOF_BASE	(GPIOA_BASE + 0x1400U)
#define GPIOG_BASE	(GPIOA_BASE + 0x1800U)
#define GPIOH_BASE	(GPIOA_BASE + 0x1C00U)
#define GPIOI_BASE	(GPIOA_BASE + 0x1000U)



#define GPIOA		((GPIO_TypeDef*)GPIOA_BASE)
#define GPIOB		((GPIO_TypeDef*)GPIOB_BASE)
#define GPIOC		((GPIO_TypeDef*)GPIOC_BASE)
#define GPIOD		((GPIO_TypeDef*)GPIOD_BASE)
#define GPIOE		((GPIO_TypeDef*)GPIOE_BASE)
#define GPIOF		((GPIO_TypeDef*)GPIOF_BASE)
#define GPIOG		((GPIO_TypeDef*)GPIOG_BASE)
#define GPIOH		((GPIO_TypeDef*)GPIOH_BASE)
#define GPIOI		((GPIO_TypeDef*)GPIOI_BASE)

#define INPUTMODE		0U
#define OUTPUTMODE		1U
#define AF				2U
#define Analog			3U


#define LOWSPEED		0U
#define MEDIUMSPEED		1U
#define HIGHSPEED		2U
#define VERYHIGHSPEED	3U

#define NOPULLUPPULLDOWN	0U
#define PULLUP				1U
#define PULLDOWN			2U

#define OUTPUTPUSHPULL		0U
#define OUTPUTOPENDRAIN		1U

#define AF0				0U
#define AF1				1U
#define AF2				2U
#define AF3				3U
#define AF4				4U
#define AF5				5U
#define AF6				6U
#define AF7				7U
#define AF8				8U
#define AF9				9U
#define AF10			10U
#define AF11			11U
#define AF12			12U
#define AF13			13U
#define AF14			14U
#define AF15			15U


#endif /* BSP_GPIO_H_ */
