/****************************************************************************
 * arch/arm/src/stm32h5/hardware/stm32h56xxx_pinmap.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_STM32H5_HARDWARE_STM32H56XXX_PINMAP_H
#define __ARCH_ARM_SRC_STM32H5_HARDWARE_STM32H56XXX_PINMAP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#if defined(CONFIG_STM32H5_STM32H563XX) || \
    defined(CONFIG_STM32H5_STM32H562XX)
/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Alternate Pin Functions.  All members of the STM32H562xx and STM32H563xx
 * families share the same pin multiplexing (although they may differ in the
 * pins physically available).  See DS14258, Table 15 "Alternate Function AF0
 * to AF7" and Table 16 "Alternate Function AF8 to AF15".
 *
 * Alternative pin selections are provided with a numeric suffix like _1, _2,
 * etc.  Drivers, however, will use the pin selection without the numeric
 * suffix.  Additional definitions are required in the board.h file.  For
 * example, if FDCAN1_RX connects via PA11 on some board, then the following
 * definitions should appear in the board.h header file for that board:
 *
 * #define GPIO_FDCAN1_RX GPIO_FDCAN1_RX_1
 *
 * The driver will then automatically configure PA11 as the FDCAN1 RX pin.
 */

/* Ethernet MAC */

#define GPIO_ETH_MDC_0          (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTC|GPIO_PIN1)
#define GPIO_ETH_MDIO_0         (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN2)
#define GPIO_ETH_MII_COL_1      (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN3)
#define GPIO_ETH_MII_COL_2      (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTH|GPIO_PIN3)
#define GPIO_ETH_MII_CRS_1      (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN0)
#define GPIO_ETH_MII_CRS_2      (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTH|GPIO_PIN2)
#define GPIO_ETH_MII_RX_CLK_0   (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN1)
#define GPIO_ETH_MII_RX_DV_0    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN7)
#define GPIO_ETH_MII_RX_ER_1    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN10)
#define GPIO_ETH_MII_RX_ER_2    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTI|GPIO_PIN10)
#define GPIO_ETH_MII_RXD0_0     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTC|GPIO_PIN4)
#define GPIO_ETH_MII_RXD1_0     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTC|GPIO_PIN5)
#define GPIO_ETH_MII_RXD2_1     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN0)
#define GPIO_ETH_MII_RXD2_2     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTH|GPIO_PIN6)
#define GPIO_ETH_MII_RXD3_1     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN1)
#define GPIO_ETH_MII_RXD3_2     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTH|GPIO_PIN7)
#define GPIO_ETH_MII_TX_CLK_0   (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTC|GPIO_PIN3)
#define GPIO_ETH_MII_TX_EN_1    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN5)
#define GPIO_ETH_MII_TX_EN_2    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN11)
#define GPIO_ETH_MII_TX_EN_3    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTG|GPIO_PIN11)
#define GPIO_ETH_MII_TX_ER_0    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN9)
#define GPIO_ETH_MII_TXD0_1     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN12)
#define GPIO_ETH_MII_TXD0_2     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTC|GPIO_PIN10)
#define GPIO_ETH_MII_TXD0_3     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTG|GPIO_PIN13)
#define GPIO_ETH_MII_TXD1_1     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN15)
#define GPIO_ETH_MII_TXD1_2     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTG|GPIO_PIN12)
#define GPIO_ETH_MII_TXD1_3     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTG|GPIO_PIN14)
#define GPIO_ETH_MII_TXD2_0     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTC|GPIO_PIN2)
#define GPIO_ETH_MII_TXD3_1     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN8)
#define GPIO_ETH_MII_TXD3_2     (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTE|GPIO_PIN2)
#define GPIO_ETH_PPS_OUT_0      (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN5)
#define GPIO_ETH_RMII_CRS_DV_0  (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN7)
#define GPIO_ETH_RMII_REF_CLK_0 (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN1)
#define GPIO_ETH_RMII_RXD0_0    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTC|GPIO_PIN4)
#define GPIO_ETH_RMII_RXD1_0    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTC|GPIO_PIN5)
#define GPIO_ETH_RMII_TX_EN_1   (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTA|GPIO_PIN5)
#define GPIO_ETH_RMII_TX_EN_2   (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN11)
#define GPIO_ETH_RMII_TX_EN_3   (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTG|GPIO_PIN11)
#define GPIO_ETH_RMII_TXD0_1    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN12)
#define GPIO_ETH_RMII_TXD0_2    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTC|GPIO_PIN10)
#define GPIO_ETH_RMII_TXD0_3    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTG|GPIO_PIN13)
#define GPIO_ETH_RMII_TXD1_1    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTB|GPIO_PIN15)
#define GPIO_ETH_RMII_TXD1_2    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTG|GPIO_PIN12)
#define GPIO_ETH_RMII_TXD1_3    (GPIO_ALT|GPIO_AF11|GPIO_PUSHPULL|GPIO_PORTG|GPIO_PIN14)

/* Clocks outputs */

#define GPIO_MCO_0             (GPIO_ALT|GPIO_AF0|GPIO_PORTA|GPIO_PIN8)

/* I2C */

#define GPIO_I2C1_SDA_1        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN7)
#define GPIO_I2C1_SDA_2        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN9)
#define GPIO_I2C1_SCL_1        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN6)
#define GPIO_I2C1_SCL_2        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN8)
#define GPIO_I2C1_SMBA_1       (GPIO_ALT|GPIO_AF4|GPIO_PORTB|GPIO_PIN5)

#define GPIO_I2C2_SDA_1        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN11)
#define GPIO_I2C2_SDA_2        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN12)
#define GPIO_I2C2_SDA_3        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN3)
#define GPIO_I2C2_SDA_4        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTH|GPIO_PIN5)
#define GPIO_I2C2_SCL_1        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN10)
#define GPIO_I2C2_SCL_2        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTF|GPIO_PIN1)
#define GPIO_I2C2_SCL_3        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTH|GPIO_PIN4)
#define GPIO_I2C2_SMBA_1       (GPIO_ALT|GPIO_AF4|GPIO_PORTH|GPIO_PIN6)

#define GPIO_I2C3_SDA_1        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTC|GPIO_PIN9)
#define GPIO_I2C3_SDA_2        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTH|GPIO_PIN8)
#define GPIO_I2C3_SCL_1        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTA|GPIO_PIN8)
#define GPIO_I2C3_SCL_2        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTH|GPIO_PIN7)
#define GPIO_I2C3_SMBA_1       (GPIO_ALT|GPIO_AF4|GPIO_PORTA|GPIO_PIN9)
#define GPIO_I2C3_SMBA_2       (GPIO_ALT|GPIO_AF4|GPIO_PORTH|GPIO_PIN9)

#define GPIO_I2C4_SDA_1        (GPIO_ALT|GPIO_AF6|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN7)
#define GPIO_I2C4_SDA_2        (GPIO_ALT|GPIO_AF6|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN9)
#define GPIO_I2C4_SDA_3        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTD|GPIO_PIN13)
#define GPIO_I2C4_SDA_4        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTF|GPIO_PIN15)
#define GPIO_I2C4_SCL_1        (GPIO_ALT|GPIO_AF6|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN6)
#define GPIO_I2C4_SCL_2        (GPIO_ALT|GPIO_AF6|GPIO_OPENDRAIN|GPIO_PORTB|GPIO_PIN8)
#define GPIO_I2C4_SCL_3        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTD|GPIO_PIN12)
#define GPIO_I2C4_SCL_4        (GPIO_ALT|GPIO_AF4|GPIO_OPENDRAIN|GPIO_PORTF|GPIO_PIN5)
#define GPIO_I2C4_SMBA_1       (GPIO_ALT|GPIO_AF6|GPIO_PORTB|GPIO_PIN5)
#define GPIO_I2C4_SMBA_2       (GPIO_ALT|GPIO_AF4|GPIO_PORTD|GPIO_PIN11)
#define GPIO_I2C4_SMBA_3       (GPIO_ALT|GPIO_AF4|GPIO_PORTF|GPIO_PIN13)

/* JTAG */

#define GPIO_JTCK_SWCLK_0      (GPIO_ALT|GPIO_AF0|GPIO_PORTA|GPIO_PIN14)
#define GPIO_JTDI_0            (GPIO_ALT|GPIO_AF0|GPIO_PORTA|GPIO_PIN15)
#define GPIO_JTDO_0            (GPIO_ALT|GPIO_AF0|GPIO_PORTB|GPIO_PIN3)
#define GPIO_JTMS_SWDAT_0      (GPIO_ALT|GPIO_AF0|GPIO_PORTA|GPIO_PIN13)
#define GPIO_JTRST_0           (GPIO_ALT|GPIO_AF0|GPIO_PORTB|GPIO_PIN4)

/* Trace */

#define GPIO_TRACECK_0         (GPIO_ALT|GPIO_AF0|GPIO_PORTE|GPIO_PIN2)

#define GPIO_TRACED0_0         (GPIO_ALT|GPIO_AF0|GPIO_PORTC|GPIO_PIN1)
#define GPIO_TRACED0_1         (GPIO_ALT|GPIO_AF0|GPIO_PORTE|GPIO_PIN3)
#define GPIO_TRACED0_2         (GPIO_ALT|GPIO_AF0|GPIO_PORTG|GPIO_PIN13)

#define GPIO_TRACED1_0         (GPIO_ALT|GPIO_AF0|GPIO_PORTC|GPIO_PIN8)
#define GPIO_TRACED1_1         (GPIO_ALT|GPIO_AF0|GPIO_PORTE|GPIO_PIN4)
#define GPIO_TRACED1_2         (GPIO_ALT|GPIO_AF0|GPIO_PORTC|GPIO_PIN14)

#define GPIO_TRACED2_0         (GPIO_ALT|GPIO_AF0|GPIO_PORTD|GPIO_PIN2)
#define GPIO_TRACED2_1         (GPIO_ALT|GPIO_AF0|GPIO_PORTE|GPIO_PIN5)

#define GPIO_TRACED3_0         (GPIO_ALT|GPIO_AF0|GPIO_PORTC|GPIO_PIN12)
#define GPIO_TRACED3_1         (GPIO_ALT|GPIO_AF0|GPIO_PORTE|GPIO_PIN6)

/* UARTs/USARTs */

#define GPIO_USART3_TX_1       (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN10)
#define GPIO_USART3_TX_2       (GPIO_ALT|GPIO_AF7|GPIO_PORTC|GPIO_PIN4)
#define GPIO_USART3_TX_3       (GPIO_ALT|GPIO_AF7|GPIO_PORTC|GPIO_PIN10)
#define GPIO_USART3_TX_4       (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN8)

#define GPIO_USART3_RX_1       (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN11)
#define GPIO_USART3_RX_2       (GPIO_ALT|GPIO_AF7|GPIO_PORTC|GPIO_PIN5)
#define GPIO_USART3_RX_3       (GPIO_ALT|GPIO_AF7|GPIO_PORTC|GPIO_PIN11)
#define GPIO_USART3_RX_4       (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN9)

#define GPIO_USART3_CK_1       (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN0)
#define GPIO_USART3_CK_2       (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN12)
#define GPIO_USART3_CK_3       (GPIO_ALT|GPIO_AF7|GPIO_PORTC|GPIO_PIN12)
#define GPIO_USART3_CK_4       (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN10)

#define GPIO_USART3_CTS_1      (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN6)
#define GPIO_USART3_CTS_2      (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN13)
#define GPIO_USART3_CTS_3      (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN11)

#define GPIO_USART3_RTS_DE_1   (GPIO_ALT|GPIO_AF7|GPIO_PORTA|GPIO_PIN15)
#define GPIO_USART3_RTS_DE_2   (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN1)
#define GPIO_USART3_RTS_DE_3   (GPIO_ALT|GPIO_AF7|GPIO_PORTB|GPIO_PIN14)
#define GPIO_USART3_RTS_DE_4   (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN2)
#define GPIO_USART3_RTS_DE_5   (GPIO_ALT|GPIO_AF7|GPIO_PORTD|GPIO_PIN12)

#define GPIO_LPUART1_TX_1      (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN9)
#define GPIO_LPUART1_TX_2      (GPIO_ALT|GPIO_AF8|GPIO_PORTB|GPIO_PIN6)
#define GPIO_LPUART1_RX_1      (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN10)
#define GPIO_LPUART1_RX_2      (GPIO_ALT|GPIO_AF8|GPIO_PORTB|GPIO_PIN7)
#define GPIO_LPUART1_CTS_1     (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN11)
#define GPIO_LPUART1_RTS_DE_1  (GPIO_ALT|GPIO_AF3|GPIO_PORTA|GPIO_PIN12)

#endif /* CONFIG_STM32H5_STM32H563XX*/
#endif /* __ARCH_ARM_SRC_STM32H5_HARDWARE_STM32H56XXX_PINMAP_H */
