/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support
 * ----------------------------------------------------------------------------
 * Copyright (c) 2006, Atmel Corporation

 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 * File Name           :at91_pmc.h
 * Object              :
 * Creation            : 
 *-----------------------------------------------------------------------------
 */

#ifndef AT91_PMC_H
#define AT91_PMC_H

/* Register offset in AT91S_PMC structure */
#define PMC_SCER	( 0)	/* System Clock Enable Register */
#define PMC_SCDR	( 4)	/* System Clock Disable Register */
#define PMC_SCSR	( 8)	/* System Clock Status Register */
#define PMC_PCER	(16)	/* Peripheral Clock Enable Register  (0:31 PERI_ID) */
#define PMC_PCDR	(20)	/* Peripheral Clock Disable Register (0:31 PERI_ID) */
#define PMC_PCSR	(24)	/* Peripheral Clock Status Register  (0:31 PERI_ID) */
#define PMC_UCKR	(28)	/* UTMI Clock Configuration Register */
#define PMC_MOR		(32)	/* Main Oscillator Register */
#define PMC_MCFR	(36)	/* Main Clock  Frequency Register */
#define PMC_PLLAR	(40)	/* PLL A Register */
#define PMC_PLLBR	(44)	/* PLL B Register */
#define PMC_MCKR	(48)	/* Master Clock Register */
#define PMC_USB		(56)	/* USB clock register */
#define PMC_SMD		(60)	/* SMD clock register */
#define PMC_PCKR	(64)	/* Programmable Clock 0 Register */
#define PMC_IER		(96)	/* Interrupt Enable Register */
#define PMC_IDR		(100)	/* Interrupt Disable Register */
#define PMC_SR		(104)	/* Status Register */
#define PMC_IMR		(108)	/* Interrupt Mask Register */
#define PMC_FSMR	(112)	/* Fast Startup Mode Register */
#define PMC_FSPR	(116)	/* Fast Startup Polarity Register */
#define PMC_FOCR	(120)	/* Fault Output Clear Register */
#define PMC_PLLICPR	(128)	/* PLL Charge Pump Current Register */
#define PMC_ADDRSIZE	(236)
#define PMC_NAME1	(240)
#define PMC_NAME2	(244)
#define PMC_FEATURES	(248)
#define PMC_VERSION	(252)
#define PMC_PCER1	(256)	/* Peripheral Clock Enable Register  32:63 PERI_ID */
#define PMC_PCDR1	(260)	/* Peripheral Clock Disable Register 32:63 PERI_ID */
#define PMC_PCSR1	(264)	/* Peripheral Clock Status Register  32:63 PERI_ID */
#define PMC_PCR		(268)	/* Peripheral Control Register */

/* -------- PMC_SCER : (PMC Offset: 0x0) System Clock Enable Register --------*/ 
#define AT91C_PMC_DDR		(0x1UL <<  2)
#define AT91C_PMC_UHP		(0x1UL <<  6)
#define AT91C_PMC_UDP		(0x1UL <<  7)
#define AT91C_PMC_PCK0		(0x1UL <<  8)
#define AT91C_PMC_PCK1		(0x1UL <<  9)

/* -------- PMC_SCDR : (PMC Offset: 0x4) System Clock Disable Register --------*/ 
/* -------- PMC_SCSR : (PMC Offset: 0x8) System Clock Status Register ---------*/
#define AT91C_PMC_PCK		(0x1UL <<  0)

/* -------- CKGR_UCKR : (PMC Offset: 0x1c) UTMI Clock Configuration Register --------*/ 
#define AT91C_CKGR_UOSCEN	(0x1UL <<  0)
#define AT91C_CKGR_OSCBYPASS	(0x1UL <<  1)
#define AT91C_CKGR_OSCOUNT	(0xFFUL << 8)
#define AT91C_CKGR_UPLLEN	(0x1UL << 16)
#define 	AT91C_CKGR_UPLLEN_DISABLED	(0x0UL << 16)
#define 	AT91C_CKGR_UPLLEN_ENABLED	(0x1UL << 16)
#define AT91C_CKGR_UPLLCOUNT	(0xFUL << 20)
#define AT91C_CKGR_BIASEN	(0x1UL << 24)
#define 	AT91C_CKGR_BIASEN_DISABLED	(0x0UL << 24)
#define 	AT91C_CKGR_BIASEN_ENABLED	(0x1UL << 24)
#define AT91C_CKGR_BIASCOUNT	(0xFUL << 28)

/* -------- CKGR_MOR : (PMC Offset: 0x20) Main Oscillator Register --------*/ 
#define AT91C_CKGR_MOSCXTEN	(0x1UL <<  0)
#define AT91C_CKGR_MOSCXTBY	(0x1UL <<  1)
#define AT91C_CKGR_WAITMODE	(0x1UL <<  2)
#define AT91C_CKGR_MOSCRCEN	(0x1UL <<  3)
#define AT91C_CKGR_MOSCXTST	(0xFFUL <<  8)
#define AT91C_CKGR_KEY		(0xFFUL << 16)
#define AT91C_CKGR_MOSCSEL	(0x1UL << 24)
#define AT91C_CKGR_CFDEN	(0x1UL << 25)

/* -------- CKGR_MCFR : (PMC Offset: 0x24) Main Clock Frequency Register --------*/ 
#define AT91C_CKGR_MAINF	(0xFFFFUL <<  0)
#define AT91C_CKGR_MAINRDY	(0x1UL << 16)

/* -------- CKGR_PLLAR : (PMC Offset: 0x28) PLL A Register --------*/ 
#define AT91C_CKGR_DIVA		(0xFFUL <<  0)
#define 	AT91C_CKGR_DIVA_0		(0x0UL)
#define		AT91C_CKGR_DIVA_BYPASS		(0x1UL)
#define AT91C_CKGR_PLLACOUNT	(0x3FUL <<  8)
#define AT91C_CKGR_OUTA		(0x3UL << 14)
#define 	AT91C_CKGR_OUTA_0		(0x0UL << 14)
#define 	AT91C_CKGR_OUTA_1		(0x1UL << 14)
#define 	AT91C_CKGR_OUTA_2		(0x2UL << 14)
#define 	AT91C_CKGR_OUTA_3		(0x3UL << 14)
#define AT91C_CKGR_MULA		(0x7FFUL << 16)
#define AT91C_CKGR_SRCA		(0x1UL << 29)

/* -------- CKGR_PLLBR : (PMC Offset: 0x2c) PLL B Register --------*/
#define AT91C_CKGR_DIVB		(0xFFUL <<  0)
#define 	AT91C_CKGR_DIVB_0		(0x0UL)
#define 	AT91C_CKGR_DIVB_BYPASS		(0x1UL)
#define AT91C_CKGR_PLLBCOUNT	(0x3FUL <<  8)
#define AT91C_CKGR_OUTB		(0x3UL << 14)
#define 	AT91C_CKGR_OUTB_0		(0x0UL << 14)
#define 	AT91C_CKGR_OUTB_1		(0x1UL << 14)
#define 	AT91C_CKGR_OUTB_2		(0x2UL << 14)
#define 	AT91C_CKGR_OUTB_3		(0x3UL << 14)
#define AT91C_CKGR_MULB		(0x7FFUL << 16)

/* -------- PMC_MCKR : (PMC Offset: 0x30) Master Clock Register --------*/ 
#define AT91C_PMC_CSS		(0x7UL <<  0)
#define 	AT91C_PMC_CSS_SLOW_CLK		(0x0UL)
#define 	AT91C_PMC_CSS_MAIN_CLK		(0x1UL)
#define 	AT91C_PMC_CSS_PLLA_CLK		(0x2UL)
#define 	AT91C_PMC_CSS_UPLL_CLK		(0x3UL)
#define 	AT91C_PMC_CSS_SYS_CLK		(0x4UL)
#define AT91C_PMC_PRES		(0xFUL <<  4)
#define 	AT91C_PMC_PRES_CLK		(0x0UL <<  4)
#define 	AT91C_PMC_PRES_CLK_2		(0x1UL <<  4)
#define 	AT91C_PMC_PRES_CLK_4		(0x2UL <<  4)
#define 	AT91C_PMC_PRES_CLK_8		(0x3UL <<  4)
#define 	AT91C_PMC_PRES_CLK_16		(0x4UL <<  4)
#define 	AT91C_PMC_PRES_CLK_32		(0x5UL <<  4)
#define 	AT91C_PMC_PRES_CLK_64		(0x6UL <<  4)
#define 	AT91C_PMC_PRES_CLK_3		(0x7UL <<  4)
#define 	AT91C_PMC_PRES_CLK_1_5		(0x8UL <<  4)
#define AT91C_PMC_MDIV		(0x3UL <<  8)
#define 	AT91C_PMC_MDIV_1		(0x0UL <<  8)
#define 	AT91C_PMC_MDIV_2		(0x1UL <<  8)
#define 	AT91C_PMC_MDIV_4		(0x2UL <<  8)
#define 	AT91C_PMC_MDIV_3		(0x3UL <<  8)
#define AT91C_PMC_PLLADIV2	(0x1UL << 12)
#define 	AT91C_PMC_PLLADIV2_1		(0x0UL << 12)
#define 	AT91C_PMC_PLLADIV2_2		(0x1UL << 12)

/* -------- PMC_USB : (PMC Offset: 0x38) USB Clock Register --------*/ 
#define AT91C_PMC_USBS		(0x1UL <<  0)
#define 	AT91C_PMC_USBS_USB_PLLA		(0x0UL)
#define 	AT91C_PMC_USBS_USB_UPLL		(0x1UL)
#define AT91C_PMC_USBDIV	(0xFUL <<  8)

/* -------- PMC_SMD : (PMC Offset: 0x3c) SMD Clock Register --------*/ 
#define AT91C_PMC_SMDS		(0x1UL <<  0)
#define 	AT91C_PMC_SMDS_SMD_PLLA		(0x0UL)
#define 	AT91C_PMC_SMDS_SMD_PLLB		(0x1UL)
#define AT91C_PMC_SMDDIV	(0x1FUL <<  8)

/* -------- PMC_PCKR : (PMC Offset: 0x40) Programmable Clock Register --------*/ 
#define AT91C_PMC_SLCKMCK	(0x1UL <<  8)
#define 	AT91C_PMC_SLCKMCK_SLCK                 (0x0UL <<  8)
#define 	AT91C_PMC_SLCKMCK_MCK                  (0x1UL <<  8)

/* -------- PMC_IER : (PMC Offset: 0x60) PMC Interrupt Enable Register --------*/ 
#define AT91C_PMC_MOSCXTS	(0x1UL << 0)
#define AT91C_PMC_LOCKA		(0x1UL << 1)
#define AT91C_PMC_LOCKB		(0x1UL << 2)
#define AT91C_PMC_MCKRDY	(0x1UL << 3)
#define AT91C_PMC_LOCKU		(0x1UL << 6)
#define AT91C_PMC_PCKRDY0	(0x1UL << 8)
#define AT91C_PMC_PCKRDY1	(0x1UL << 9)
#define AT91C_PMC_MOSCSELS	(0x1UL << 16)
#define AT91C_PMC_MOSCRCS	(0x1UL << 17)
#define AT91C_PMC_CFDEV		(0x1UL << 18)
/* -------- PMC_IDR : (PMC Offset: 0x64) PMC Interrupt Disable Register --------*/ 
/* -------- PMC_SR : (PMC Offset: 0x68) PMC Status Register --------*/ 
#define AT91C_PMC_CFDS		(0x1UL << 19)
#define AT91C_PMC_FOS		(0x1UL << 20)
/* -------- PMC_IMR : (PMC Offset: 0x6c) PMC Interrupt Mask Register --------*/ 

/* -------- PMC_FSMR : (PMC Offset: 0x70) Fast Startup Mode Register --------*/ 
#define AT91C_PMC_FSTT		(0xFFFFUL << 0)
#define AT91C_PMC_RTTAL		(0x1UL << 16)
#define AT91C_PMC_RTCAL		(0x1UL << 17)
#define AT91C_PMC_USBAL		(0x1UL << 18)
#define AT91C_PMC_LPM		(0x1UL << 20)

/* -------- PMC_FSPR : (PMC Offset: 0x74) Fast Startup Polarity Register --------*/ 
#define AT91C_PMC_FSTP		(0xFFFFUL <<  0)

/* -------- PMC_FOCR : (PMC Offset: 0x78) Fault Output Clear Register --------*/ 
#define AT91C_PMC_FOCLR		(0x1UL << 0)

/* -------- PMC_PLLICPR : (PMC Offset: 0x80) PLL Charge Pump Current Register --------*/ 
#define AT91C_PMC_ICPPLLA	(0xFUL <<  0)
#define 	AT91C_PMC_ICPPLLA_0		(0x0UL << 0)
#define 	AT91C_PMC_ICPPLLA_1		(0x1UL << 0)
#define AT91C_PMC_REALLOCK	(0x1UL <<  7)
#define AT91C_PMC_IPLLA		(0xFUL <<  8)
#define 	AT91C_PMC_IPLLA_0		(0x0UL <<  8)
#define 	AT91C_PMC_IPLLA_1		(0x1UL <<  8)

/* -------- PMC_FEATURES : (PMC Offset: 0xf8)   --------*/ 
#define AT91C_PMC_CFGAHBCLK	(0x1UL <<  0)
#define 	AT91C_PMC_CFGAHBCLK_0		(0x0UL << 0)
#define 	AT91C_PMC_CFGAHBCLK_1		(0x1UL << 0)
#define AT91C_PMC_HCLKEN	(0x1UL <<  1)
#define 	AT91C_PMC_HCLKEN_0		(0x0UL <<  1)
#define 	AT91C_PMC_HCLKEN_1		(0x1UL <<  1)
#define AT91C_PMC_PERMCLK	(0x1UL <<  2)
#define 	AT91C_PMC_PERMCLK_0		(0x0UL <<  2)
#define 	AT91C_PMC_PERMCLK_1		(0x1UL <<  2)
#define AT91C_PMC_CORE2		(0x1UL <<  3)
#define 	AT91C_PMC_CORE2_0		(0x0UL <<  3)
#define 	AT91C_PMC_CORE2_1		(0x1UL <<  3)
#define AT91C_PMC_USBDEVCK	(0x1UL <<  4)
#define 	AT91C_PMC_USBDEVCK_0		(0x0UL <<  4)
#define 	AT91C_PMC_USBDEVCK_1		(0x1UL <<  4)
#define AT91C_PMC_USBHOSTCK	(0x1UL <<  5)
#define 	AT91C_PMC_USBHOSTCK_0		(0x0UL <<  5)
#define 	AT91C_PMC_USBHOSTCK_1		(0x1UL <<  5)
#define AT91C_PMC_USBOTGCK	(0x1UL <<  6)
#define 	AT91C_PMC_USBOTGCK_0		(0x0UL <<  6)
#define 	AT91C_PMC_USBOTGCK_1		(0x1UL <<  6)
#define AT91C_PMC_UHSYNRST	(0x1UL <<  7)
#define 	AT91C_PMC_UHSYNRST_0		(0x0UL <<  7)
#define 	AT91C_PMC_UHSYNRST_1		(0x1UL <<  7)
#define AT91C_PMC_UOSYNRST	(0x1UL <<  8)
#define 	AT91C_PMC_UOSYNRST_0		(0x0UL <<  8)
#define 	AT91C_PMC_UOSYNRST_1		(0x1UL <<  8)
#define AT91C_PMC_PLLENPOL	(0x1UL <<  9)
#define 	AT91C_PMC_PLLENPOL_0		(0x0UL <<  9)
#define 	AT91C_PMC_PLLENPOL_1		(0x1UL <<  9)
#define AT91C_PMC_BIASREG	(0x1UL << 10)
#define 	AT91C_PMC_BIASREG_0		(0x0UL << 10)
#define 	AT91C_PMC_BIASREG_1		(0x1UL << 10)
#define AT91C_PMC_OUTPLL	(0x1UL << 11)
#define 	AT91C_PMC_OUTPLL_0		(0x0UL << 11)
#define 	AT91C_PMC_OUTPLL_1		(0x1UL << 11)
#define AT91C_PMC_OUTCURR	(0x1UL << 12)
#define 	AT91C_PMC_OUTCURR_0		(0x0UL << 12)
#define 	AT91C_PMC_OUTCURR_1		(0x1UL << 12)
#define AT91C_PMC_FWUP		(0x1UL << 13)
#define 	AT91C_PMC_FWUP_0		(0x0UL << 13)
#define 	AT91C_PMC_FWUP_1		(0x1UL << 13)
#define AT91C_PMC_SELMAINCLK	(0x1UL << 14)
#define 	AT91C_PMC_SELMAINCLK_0		(0x0UL << 14)
#define 	AT91C_PMC_SELMAINCLK_1		(0x1UL << 14)
#define AT91C_PMC_RSTCLKM	(0x1UL << 15)
#define 	AT91C_PMC_RSTCLKM_0		(0x0UL << 15)
#define 	AT91C_PMC_RSTCLKM_1		(0x1UL << 15)
#define AT91C_PMC_NB_PERIPH_CLOCK	(0xFFUL << 16)

/* -------- PMC_VERSION : (PMC Offset: 0xfc)   --------*/ 
#define AT91C_PMC_Version	(0x0FFFUL << 0)
#define 	AT91C_PMC_Version_0		(0x0UL)
#define 	AT91C_PMC_Version_1		(0x1UL)
#define AT91C_PMC_MFN		(0x7UL << 16)
#define 	AT91C_PMC_MFN_0		(0x0UL << 16)
#define 	AT91C_PMC_MFN_1		(0x1UL << 16)

/* -------- PMC_PCR : (PMC Offset: 0x10c) Peripheral Control Register --------*/ 
#define AT91C_PMC_PID		(0x3FUL << 0)
#define AT91C_PMC_CMD		(0x1UL << 12)
#define AT91C_PMC_DIV		(0x3UL << 16)
#define AT91C_PMC_EN		(0x1UL << 28)

#endif /* #ifndef AT91_PMC_H */