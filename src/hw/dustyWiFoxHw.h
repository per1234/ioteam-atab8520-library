/*
 * dustinoHw.h
 *
 * Created: 11/25/2016 9:14:10 PM
 *  Author: mfontane
 */ 

#include <asf.h>

#ifndef DUSTINOHW_H_
#define DUSTINOHW_H_

#define TEST_PIN						PIN_PA11

#define WIFI_RST_PIN					PIN_PB01

#define DUST_LED_PIN					PIN_PB03
#define DUST_RST_PIN					PIN_PB22

#define DUST_USART_MODULE				SERCOM5
#define DUST_USART_SERCOM_MUX_SETTING	USART_RX_1_TX_0_XCK_1
#define DUST_USART_SERCOM_PINMUX_PAD0	PINMUX_PB16C_SERCOM5_PAD0
#define DUST_USART_SERCOM_PINMUX_PAD1	PINMUX_PB17C_SERCOM5_PAD1
#define DUST_USART_SERCOM_PINMUX_PAD2	PINMUX_UNUSED
#define DUST_USART_SERCOM_PINMUX_PAD3	PINMUX_UNUSED
#define DUST_USART_SERCOM_DMAC_ID_TX	SERCOM5_DMAC_ID_TX
#define DUST_USART_SERCOM_DMAC_ID_RX	SERCOM5_DMAC_ID_RX


#define SFX_LED_PIN						PIN_PA27
#define SFX_RST_PIN						PIN_PB05
#define SFX_PWRON_PIN					PIN_PB07
#define SFX_EVENT_PIN					PIN_PB10

#define SFX_SS_PIN						PIN_PB13
#define SFX_MASTER_SPI_MODULE			SERCOM4
#define SFX_MASTER_MUX_SETTING			SPI_SIGNAL_MUX_SETTING_E
#define SFX_MASTER_PINMUX_MISO_PAD0		PINMUX_PB12C_SERCOM4_PAD0
#define SFX_MASTER_PINMUX_PAD1			PINMUX_UNUSED
#define SFX_MASTER_PINMUX_MOSI_PAD2		PINMUX_PB14C_SERCOM4_PAD2
#define SFX_MASTER_PINMUX_SCK_PAD3		PINMUX_PB15C_SERCOM4_PAD3


#endif /* DUSTINOHW_H_ */