/*
 * main.h
 *
 *  Created on: Apr 10, 2023
 *      Author: nayye
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>





#define RCC_BASE 	(PERIPH_BASE + 0x6020C00) //0x4602 0C00
#define RCC			(RCC_Typedef*)RCC_BASE




#define __IO		volatile
  #define __ASM                                  __asm
#define __NOP()                             __ASM volatile ("nop")

#define WRITE_REG(REG, VALUE)	(REG = VALUE)
#define READ_REG(REG)	REG
#define CLEAR_REG(REG)	REG =0x00

typedef struct
{
	__IO	uint32_t MODER;
	__IO	uint32_t OTYPER;
	__IO	uint32_t OSPEEDR;
	__IO	uint32_t PUPDR;
	__IO	uint32_t IDR;
	__IO	uint32_t ODR;
	__IO	uint32_t BSRR;
	__IO	uint32_t LCKR;
	__IO	uint32_t AFRL;
	__IO	uint32_t AFRH;
	__IO	uint32_t BRR;
	__IO	uint32_t HSLVR;
	__IO	uint32_t SECCFGR;
	}GPIO_TypeDef;


typedef struct
{
	__IO	uint32_t CR;
	__IO	uint32_t reserved1;
	__IO	uint32_t ICSCR1;
	__IO	uint32_t ICSCR2;
	__IO	uint32_t ICSCR3;
	__IO	uint32_t CRRCR;
	__IO	uint32_t reserved2;
	__IO	uint32_t CFGR1;
	__IO	uint32_t CFGR2;
	__IO	uint32_t CFGR3;
	__IO	uint32_t PLL1CFGR;
	__IO	uint32_t PLL2CFGR;
	__IO	uint32_t PLL3CFGR;
	__IO	uint32_t PLL1DIVR;
	__IO	uint32_t PLL1FRACR;
	__IO	uint32_t PLL2DIVR;
	__IO	uint32_t PLL2FRACR;
	__IO	uint32_t PLL3DIVR;
	__IO	uint32_t PLL3FRACR;
	__IO	uint32_t reserved3;
	__IO	uint32_t CIER;
	__IO	uint32_t CIFR;
	__IO	uint32_t CICR;
	__IO	uint32_t reserved4;
	__IO	uint32_t AHB1RSTR;
	__IO	uint32_t AHB2RSTR1;
	__IO	uint32_t AHB2RSTR2;
	__IO	uint32_t AHB3RSTR;
	__IO	uint32_t reserved5;
	__IO	uint32_t APB1RSTR1;
	__IO	uint32_t APB1RSTR2;
	__IO	uint32_t APB2RSTR;
	__IO	uint32_t APB3RSTR;
	__IO	uint32_t reserved6;
	__IO	uint32_t AHB1ENR;
	__IO	uint32_t AHB2ENR1;
	__IO	uint32_t AHB2ENR2;
	__IO	uint32_t AHB3ENR;
	__IO	uint32_t reserved7;
	__IO	uint32_t APB1ENR1;
	__IO	uint32_t APB1ENR2;
	__IO	uint32_t APB2ENR;
	__IO	uint32_t APB3ENR;
	__IO	uint32_t reserved;
	__IO	uint32_t AHB1SMENR;
	__IO	uint32_t AHB2SMENR1;
	__IO	uint32_t AHB2SMENR2;
	__IO	uint32_t AHB3SMENR;
	__IO	uint32_t reserved8;
	__IO	uint32_t APB1SMENR1;
	__IO	uint32_t APB1SMENR2;
	__IO	uint32_t APB2SMENR;
	__IO	uint32_t APB3SMENR;
	__IO	uint32_t reserved9;
	__IO	uint32_t SRDAMR;
	__IO	uint32_t CCIPR1;
	__IO	uint32_t CCIPR2;
	__IO	uint32_t CCIPR3;
	__IO	uint32_t BDCR;
	__IO	uint32_t CSR;
	__IO	uint32_t reserved10;
	__IO	uint32_t SECCFGR;
	__IO	uint32_t PRIVCFGR;

	}RCC_Typedef;


	typedef struct{
		__IO uint32_t CR1;
		__IO uint32_t CR2;
		__IO uint32_t CR3;
		__IO uint32_t BRR;
		__IO uint32_t GTPR;
		__IO uint32_t RTOR;
		__IO uint32_t RQR;
		__IO uint32_t ISR;
		__IO uint32_t ICR;
		__IO uint32_t RDR;
		__IO uint32_t TDR;
		__IO uint32_t PRESC;
		__IO uint32_t AUTOCR;
	}UART_Typedef;



#endif /* MAIN_H_ */
