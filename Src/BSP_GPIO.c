/*
 * BSP_BPIO.c
 *
 *  Created on: Apr 19, 2023
 *      Author: nayye
 */

#include "main.h"
#include "BSP_GPIO.h"

uint8_t GPIOInit (GPIO_TypeDef *gpiox)
{
	//gpiox -> BSRR  = 0;
	gpiox -> MODER = 0;
	//gpiox -> OTYPER = 0;
	//gpiox -> PUPDR = 0;
	//gpiox -> OSPEEDR = 0;
	gpiox -> AFRL = 0;
	gpiox -> AFRH = 0;
return 1;
}

uint8_t GPIOAInit (GPIO_TypeDef *gpiox) //-> GPIOA init PA11, PA12, PA13,PA14, PA15 are connected to usb and serial bebug
{
	//gpiox -> BSRR  = 0;
	gpiox -> MODER = (gpiox -> MODER) & 0XFFC00000;
	//gpiox -> OTYPER = 0;
	//gpiox -> PUPDR = 0;
	//gpiox -> OSPEEDR = 0;
	gpiox -> AFRL = 0;
	gpiox -> AFRH = 0;
return 1;
}

uint8_t GPIOInitinput (GPIO_TypeDef *gpiox, uint32_t pinNumber, uint32_t speed, uint32_t pupdr)
{

	gpiox -> MODER = (gpiox -> MODER) | (INPUTMODE<<(2*pinNumber));
	gpiox -> PUPDR = (gpiox -> PUPDR) | (pupdr << (2*pinNumber));
	gpiox -> OSPEEDR = (gpiox -> OSPEEDR) | (speed<<(2*pinNumber));
	return 1;
		}

uint8_t GPIOInitoutput (GPIO_TypeDef *gpiox, uint32_t pinNumber, uint32_t speed, uint32_t pupdr, uint32_t otyper)
{

	//temp = {0};
	gpiox -> MODER = (gpiox -> MODER) | (OUTPUTMODE<<(2*pinNumber));
	gpiox -> PUPDR = (gpiox -> PUPDR) | (pupdr << (2*pinNumber));
	gpiox -> OSPEEDR = (gpiox -> OSPEEDR) | (speed<<(2*pinNumber));
	gpiox -> OTYPER = (gpiox -> OTYPER) | (otyper<<(1*pinNumber));
	return 1;
		}


uint8_t GPIOInitAF (GPIO_TypeDef *gpiox, uint32_t pinNumber, uint32_t speed, uint32_t pupdr, uint32_t afrl)
{

	//temp = {0};
	gpiox -> MODER = (gpiox -> MODER) | (AF<<(2*pinNumber));
	gpiox -> PUPDR = (gpiox -> PUPDR) | (pupdr << (2*pinNumber));
	gpiox -> OSPEEDR = (gpiox -> OSPEEDR) | (speed<<(2*pinNumber));
	//gpiox -> OTYPER = (gpiox -> OTYPER) | (0<<(1*pinNumber));
	if (pinNumber<=7)
	{
		gpiox -> AFRL =(gpiox -> AFRL) | afrl<<(4*pinNumber);
	}
	else
	{
		gpiox -> AFRH =(gpiox -> AFRH) | afrl<<(4*(pinNumber-8));
	}
	return 1;
		}


uint8_t GPIOSetpin(GPIO_TypeDef *gpiox, uint32_t pinNumber)
{
	gpiox->BSRR = 1U << (pinNumber);
			return 1;
}
uint8_t GPIOResetpin(GPIO_TypeDef *gpiox, uint32_t pinNumber)
{
	gpiox->BSRR =  1U<< (16 + pinNumber);
			return 1;
}



