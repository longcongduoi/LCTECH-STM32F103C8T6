/*
    ChibiOS/RT - Copyright (C) 2006-2013 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for the Olimex STM32-P103 proto board.
 */

/*
 * Board identifier.
 */
#define BOARD_LCTECH_STM32F103
#define BOARD_NAME              "LC Technology STM32F103C8T6"

/*
 * Board frequencies.
 */
#define STM32_LSECLK            32768
#define STM32_HSECLK            8000000

/*
 * MCU type, supported types are defined in ./os/hal/platforms/hal_lld.h.
 */
#define STM32F10X_MD

/*
 * IO pins assignments.
 */


#define GPIOA_ENC_WOL    0
#define GPIOA_ENC_INT    1
#define GPIOA_USART2_TX  2
#define GPIOA_USART2_RX  3
#define GPIOA_ENC_CS     4
#define GPIOA_ENC_SCK    5
#define GPIOA_ENC_MISO   6
#define GPIOA_ENC_MOSI   7
#define GPIOA_ENC_RST    8
#define GPIOA_USART1_TX  9
#define GPIOA_USART1_RX  10
#define GPIOA_USBDM      11
#define GPIOA_USBDP      12
#define GPIOA_SWDIO      13
#define GPIOA_SWCLK      14
#define GPIOA_PIN15      15

#define GPIOB_PIN0       0
#define GPIOB_PIN1       1
#define GPIOB_PIN2       2
#define GPIOB_PIN3       3
#define GPIOB_PIN4       4
#define GPIOB_PIN5       5
#define GPIOB_PIN6       6
#define GPIOB_PIN7       7
#define GPIOB_PIN8       8
#define GPIOB_PIN9       9
#define GPIOB_USART3_TX  10
#define GPIOB_USART3_RX  11
#define GPIOB_PIN12      12
#define GPIOB_PIN13      13
#define GPIOB_PIN14      14
#define GPIOB_PIN15      15

#define GPIOC_PIN0       0
#define GPIOC_PIN1       1
#define GPIOC_PIN2       2
#define GPIOC_PIN3       3
#define GPIOC_PIN4       4
#define GPIOC_PIN5       5
#define GPIOC_PIN6       6
#define GPIOC_PIN7       7
#define GPIOC_PIN8       8
#define GPIOC_PIN9       9
#define GPIOC_PIN10      10
#define GPIOC_PIN11      11
#define GPIOC_PIN12      12
#define GPIOC_PIN13      13
#define GPIOC_PIN14      14
#define GPIOC_PIN15      15

#define GPIOD_PIN0       0
#define GPIOD_PIN1       1
#define GPIOD_PIN2       2
#define GPIOD_PIN3       3
#define GPIOD_PIN4       4
#define GPIOD_PIN5       5
#define GPIOD_PIN6       6
#define GPIOD_PIN7       7
#define GPIOD_PIN8       8
#define GPIOD_PIN9       9
#define GPIOD_PIN10      10
#define GPIOD_PIN11      11
#define GPIOD_PIN12      12
#define GPIOD_PIN13      13
#define GPIOD_PIN14      14
#define GPIOD_PIN15      15

#define GPIOE_PIN0       0
#define GPIOE_PIN1       1
#define GPIOE_PIN2       2
#define GPIOE_PIN3       3
#define GPIOE_PIN4       4
#define GPIOE_PIN5       5
#define GPIOE_PIN6       6
#define GPIOE_PIN7       7
#define GPIOE_PIN8       8
#define GPIOE_PIN9       9
#define GPIOE_PIN10      10
#define GPIOE_PIN11      11
#define GPIOE_PIN12      12
#define GPIOE_PIN13      13
#define GPIOE_PIN14      14
#define GPIOE_PIN15      15

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_2M(n)            (0U << ((n) * 2))
#define PIN_OSPEED_10M(n)           (1U << ((n) * 2))
#define PIN_OSPEED_50M(n)           (3U << ((n) * 2))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2))
#define PIN_AFIO_AF(n, v)           ((v##U) << (((n) % 8) * 4))

/*
 * GPIOA setup:
 *
 * PA0  - ENC_WOL                   (input pullup).
 * PA1  - ENC_INT                   (Digital Input).
 * PA2  - USART2_TX                 (alternate 7).
 * PA3  - USART2_RX                 (alternate 7).
 * PA4  - ENC_CS                    (output pushpull 50Mhz).
 * PA5  - ENC_SCK                   (alternate pushpull 50Mhz).
 * PA6  - ENC_MISO                  (digital input).
 * PA7  - ENC_MOSI                  (alternate pushpull 50Mhz).
 * PA8  - ENC_RST                   (output pushpull 50Mhz).
 * PA9  - UART1_TX                  (alternate 7).
 * PA10 - UART1_RX                  (alternate 7).
 * PA11 - USBDM                     (input pullup).
 * PA12 - USBDP                     (input pullup).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 * PA15 - PIN15                     (input pullup).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_ENC_WOL) |	\
				     PIN_MODE_INPUT(GPIOA_ENC_INT) |	\
				     PIN_MODE_ALTERNATE(GPIOA_USART2_TX) | \
				     PIN_MODE_ALTERNATE(GPIOA_USART2_RX) | \
				     PIN_MODE_OUTPUT(GPIOA_ENC_CS) |	\
				     PIN_MODE_ALTERNATE(GPIOA_ENC_SCK) | \
				     PIN_MODE_INPUT(GPIOA_ENC_MISO) |	\
				     PIN_MODE_ALTERNATE(GPIOA_ENC_MOSI) | \
                                     PIN_MODE_OUTPUT(GPIOA_ENC_RST) |	\
				     PIN_MODE_ALTERNATE(GPIOA_USART1_TX) | \
                                     PIN_MODE_ALTERNATE(GPIOA_USART2_RX) | \
				     PIN_MODE_INPUT(GPIOA_USBDM) |	\
                                     PIN_MODE_INPUT(GPIOA_USBDP) |	\
				     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |	\
				     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |	\
				     PIN_MODE_INPUT(GPIOA_PIN15))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_ENC_WOL) |   \
				     PIN_OTYPE_PUSHPULL(GPIOA_ENC_INT) |   \
				     PIN_OTYPE_PUSHPULL(GPIOA_USART2_TX) | \
				     PIN_OTYPE_PUSHPULL(GPIOA_USART2_RX) | \
				     PIN_OTYPE_PUSHPULL(GPIOA_ENC_CS) |	\
				     PIN_OTYPE_PUSHPULL(GPIOA_ENC_SCK) | \
				     PIN_OTYPE_PUSHPULL(GPIOA_ENC_MISO) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_ENC_MOSI) | \
				     PIN_OTYPE_PUSHPULL(GPIOA_ENC_RST) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART1_TX) | \
				     PIN_OTYPE_PUSHPULL(GPIOA_USART1_RX) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USBDM) |	\
				     PIN_OTYPE_PUSHPULL(GPIOA_USBDP) |	\
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |	\
				     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |	\
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN15))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_50M(GPIOA_ENC_WOL) |	\
				     PIN_OSPEED_50M(GPIOA_ENC_INT) |	\
				     PIN_OSPEED_50M(GPIOA_USART2_TX) |	\
				     PIN_OSPEED_50M(GPIOA_USART2_RX) |	\
				     PIN_OSPEED_50M(GPIOA_ENC_CS) |	\
				     PIN_OSPEED_50M(GPIOA_ENC_SCK) |	\
				     PIN_OSPEED_50M(GPIOA_ENC_MISO) |	\
                                     PIN_OSPEED_50M(GPIOA_ENC_MOSI) |	\
				     PIN_OSPEED_50M(GPIOA_ENC_RST) |	\
                                     PIN_OSPEED_50M(GPIOA_USART1_TX) |	\
				     PIN_OSPEED_50M(GPIOA_USART1_RX) |	\
                                     PIN_OSPEED_50M(GPIOA_USBDM) |	\
				     PIN_OSPEED_50M(GPIOA_USBDP) |	\
                                     PIN_OSPEED_50M(GPIOA_SWDIO) |	\
				     PIN_OSPEED_50M(GPIOA_SWCLK) |	\
                                     PIN_OSPEED_50M(GPIOA_PIN15))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_PULLUP(GPIOA_ENC_WOL) |	\
				     PIN_PUPDR_FLOATING(GPIOA_ENC_INT) | \
				     PIN_PUPDR_FLOATING(GPIOA_USART2_TX) | \
				     PIN_PUPDR_FLOATING(GPIOA_USART2_RX) | \
				     PIN_PUPDR_FLOATING(GPIOA_ENC_CS) |	\
				     PIN_PUPDR_FLOATING(GPIOA_ENC_SCK) | \
				     PIN_PUPDR_FLOATING(GPIOA_ENC_MISO) | \
                                     PIN_PUPDR_FLOATING(GPIOA_ENC_MOSI) | \
				     PIN_PUPDR_FLOATING(GPIOA_ENC_RST) | \
                                     PIN_PUPDR_FLOATING(GPIOA_USART1_TX) | \
				     PIN_PUPDR_FLOATING(GPIOA_USART1_RX) | \
                                     PIN_PUPDR_PULLUP(GPIOA_USBDM) |	\
				     PIN_PUPDR_PULLUP(GPIOA_USBDP) |	\
                                     PIN_PUPDR_PULLUP(GPIOA_SWDIO) |	\
				     PIN_PUPDR_PULLDOWN(GPIOA_SWCLK) |	\
                                     PIN_PUPDR_PULLUP(GPIOA_PIN15))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_ENC_WOL) |	\
				     PIN_ODR_HIGH(GPIOA_ENC_INT) |	\
				     PIN_ODR_HIGH(GPIOA_USART2_TX) |	\
				     PIN_ODR_HIGH(GPIOA_USART2_RX) |	\
				     PIN_ODR_HIGH(GPIOA_ENC_CS) |	\
				     PIN_ODR_HIGH(GPIOA_ENC_SCK) |	\
				     PIN_ODR_HIGH(GPIOA_ENC_MISO) |	\
				     PIN_ODR_HIGH(GPIOA_ENC_MOSI) |	\
                                     PIN_ODR_HIGH(GPIOA_ENC_RST) |	\
				     PIN_ODR_HIGH(GPIOA_USART1_TX) |	\
                                     PIN_ODR_HIGH(GPIOA_USART1_RX) |	\
				     PIN_ODR_HIGH(GPIOA_USBDM) |	\
                                     PIN_ODR_HIGH(GPIOA_USBDP) |	\
				     PIN_ODR_HIGH(GPIOA_SWDIO) |	\
                                     PIN_ODR_HIGH(GPIOA_SWCLK) |	\
				     PIN_ODR_HIGH(GPIOA_PIN15))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_ENC_WOL, 0) |	\
				     PIN_AFIO_AF(GPIOA_ENC_INT, 0) |	\
				     PIN_AFIO_AF(GPIOA_USART2_TX, 0) |	\
				     PIN_AFIO_AF(GPIOA_USART2_RX, 0) |	\
				     PIN_AFIO_AF(GPIOA_ENC_CS, 0) |	\
				     PIN_AFIO_AF(GPIOA_ENC_SCK, 0) |	\
				     PIN_AFIO_AF(GPIOA_ENC_MISO, 0) |	\
				     PIN_AFIO_AF(GPIOA_ENC_MOSI, 0))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_ENC_RST, 0) |	\
				     PIN_AFIO_AF(GPIOA_USART1_TX, 0) |	\
				     PIN_AFIO_AF(GPIOA_USART1_RX, 0) |	\
				     PIN_AFIO_AF(GPIOA_USBDM, 0) |	\
				     PIN_AFIO_AF(GPIOA_USBDP, 0) |	\
				     PIN_AFIO_AF(GPIOA_SWDIO, 0) |	\
				     PIN_AFIO_AF(GPIOA_SWCLK, 0) |	\
				     PIN_AFIO_AF(GPIOA_PIN15, 0))




/*
 * GPIOB setup:
 *
 * PB0  - PIN0                      (input pullup).
 * PB1  - PIN1                      (input pullup).
 * PB2  - PIN2                      (input pullup).
 * PB3  - PIN3                      (input pullup).
 * PB4  - PIN4                      (input pullup).
 * PB5  - PIN5                      (input pullup).
 * PB6  - PIN6                      (input pullup).
 * PB7  - PIN7                      (input pullup).
 * PB8  - PIN8                      (input pullup).
 * PB9  - PIN9                      (input pullup).
 * PB10 - USART3_TX                 (alternate 0).
 * PB11 - USART3_RX                 (alternate 0).
 * PB12 - PIN12                     (input pullup).
 * PB13 - PIN13                     (input pullup).
 * PB14 - PIN14                     (input pullup).
 * PB15 - PIN15                     (input pullup).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_OUTPUT(GPIOB_PIN0) |	\
				     PIN_MODE_INPUT(GPIOB_PIN1) |	\
				     PIN_MODE_INPUT(GPIOB_PIN2) |	\
				     PIN_MODE_INPUT(GPIOB_PIN3) |	\
				     PIN_MODE_INPUT(GPIOB_PIN4) |	\
				     PIN_MODE_INPUT(GPIOB_PIN5) |	\
				     PIN_MODE_INPUT(GPIOB_PIN6) |	\
				     PIN_MODE_INPUT(GPIOB_PIN7) |	\
                                     PIN_MODE_INPUT(GPIOB_PIN8) |	\
				     PIN_MODE_INPUT(GPIOB_PIN9) |	\
				     PIN_MODE_ALTERNATE(GPIOB_USART3_TX) | \
				     PIN_MODE_ALTERNATE(GPIOB_USART3_RX) | \
				     PIN_MODE_INPUT(GPIOB_PIN12) |	\
				     PIN_MODE_INPUT(GPIOB_PIN13) |	\
				     PIN_MODE_INPUT(GPIOB_PIN14) |	\
				     PIN_MODE_INPUT(GPIOB_PIN15))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_PIN0) |	\
				     PIN_OTYPE_PUSHPULL(GPIOB_PIN1) |	\
				     PIN_OTYPE_PUSHPULL(GPIOB_PIN2) |	\
				     PIN_OTYPE_PUSHPULL(GPIOB_PIN3) |	\
				     PIN_OTYPE_PUSHPULL(GPIOB_PIN4) |	\
				     PIN_OTYPE_PUSHPULL(GPIOB_PIN5) |	\
				     PIN_OTYPE_PUSHPULL(GPIOB_PIN6) |	\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN7) |	\
				     PIN_OTYPE_PUSHPULL(GPIOB_PIN8) |	\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN9) |	\
				     PIN_OTYPE_PUSHPULL(GPIOB_USART3_TX) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_USART3_RX) | \
				     PIN_OTYPE_PUSHPULL(GPIOB_PIN12) |	\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN13) |	\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN14) |	\
				     PIN_OTYPE_PUSHPULL(GPIOB_PIN15))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_50M(GPIOB_PIN0) |	\
				     PIN_OSPEED_50M(GPIOB_PIN1) |	\
				     PIN_OSPEED_50M(GPIOB_PIN2) |	\
				     PIN_OSPEED_50M(GPIOB_PIN3) |	\
				     PIN_OSPEED_50M(GPIOB_PIN4) |	\
				     PIN_OSPEED_50M(GPIOB_PIN5) |	\
				     PIN_OSPEED_50M(GPIOB_PIN6) |	\
				     PIN_OSPEED_50M(GPIOB_PIN7) |	\
                                     PIN_OSPEED_50M(GPIOB_PIN8) |	\
                                     PIN_OSPEED_50M(GPIOB_PIN9) |	\
				     PIN_OSPEED_50M(GPIOB_USART3_TX) |	\
                                     PIN_OSPEED_50M(GPIOB_USART3_RX) |	\
				     PIN_OSPEED_50M(GPIOB_PIN12) |	\
                                     PIN_OSPEED_50M(GPIOB_PIN13) |	\
				     PIN_OSPEED_50M(GPIOB_PIN14) |	\
                                     PIN_OSPEED_50M(GPIOB_PIN15))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_PULLUP(GPIOB_PIN0) |	\
				     PIN_PUPDR_PULLUP(GPIOB_PIN1) |	\
				     PIN_PUPDR_PULLUP(GPIOB_PIN2) |	\
				     PIN_PUPDR_PULLUP(GPIOB_PIN3) |	\
				     PIN_PUPDR_PULLUP(GPIOB_PIN4) |	\
				     PIN_PUPDR_PULLUP(GPIOB_PIN5) |	\
				     PIN_PUPDR_PULLUP(GPIOB_PIN6) |	\
				     PIN_PUPDR_PULLUP(GPIOB_PIN7) |	\
                                     PIN_PUPDR_PULLUP(GPIOB_PIN8) |	\
				     PIN_PUPDR_PULLUP(GPIOB_PIN9) |	\
				     PIN_PUPDR_FLOATING(GPIOB_USART3_TX) | \
				     PIN_PUPDR_FLOATING(GPIOB_USART3_RX) | \
				     PIN_PUPDR_PULLUP(GPIOB_PIN12) |	\
				     PIN_PUPDR_PULLUP(GPIOB_PIN13) |	\
				     PIN_PUPDR_PULLUP(GPIOB_PIN14) |	\
				     PIN_PUPDR_PULLUP(GPIOB_PIN15))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_PIN0) |		\
				     PIN_ODR_HIGH(GPIOB_PIN1) |		\
				     PIN_ODR_HIGH(GPIOB_PIN2) |		\
				     PIN_ODR_HIGH(GPIOB_PIN3) |		\
				     PIN_ODR_HIGH(GPIOB_PIN4) |		\
				     PIN_ODR_HIGH(GPIOB_PIN5) |		\
				     PIN_ODR_HIGH(GPIOB_PIN6) |		\
				     PIN_ODR_HIGH(GPIOB_PIN7) |		\
                                     PIN_ODR_HIGH(GPIOB_PIN8) |		\
				     PIN_ODR_HIGH(GPIOB_PIN9) |		\
                                     PIN_ODR_HIGH(GPIOB_USART3_TX) |	\
				     PIN_ODR_HIGH(GPIOB_USART3_RX) |	\
                                     PIN_ODR_HIGH(GPIOB_PIN12) |	\
				     PIN_ODR_HIGH(GPIOB_PIN13) |	\
                                     PIN_ODR_HIGH(GPIOB_PIN14) |	\
				     PIN_ODR_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_PIN0, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN1, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN2, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN3, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN4, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN5, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN6, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN7, 0))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_PIN8, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN9, 0) |	\
				     PIN_AFIO_AF(GPIOB_USART3_TX, 0) |	\
				     PIN_AFIO_AF(GPIOB_USART3_RX, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN12, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN13, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN14, 0) |	\
				     PIN_AFIO_AF(GPIOB_PIN15, 0))


/*
 * GPIOC setup:
 *
 * PD0  - PIN0                      (input pullup).
 * PD1  - PIN1                      (input pullup).
 * PD2  - PIN2                      (input pullup).
 * PD3  - PIN3                      (input pullup).
 * PD4  - PIN4                      (input pullup).
 * PD5  - PIN5                      (input pullup).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - PIN10                     (input pullup).
 * PD11 - PIN11                     (input pullup).
 * PD12 - PIN12                     (input pullup).
 * PD13 - PIN13                     (input pullup).
 * PD14 - PIN14                     (input pullup).
 * PD15 - PIN15                     (input pullup).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_INPUT(GPIOC_PIN0) |	\
				     PIN_MODE_INPUT(GPIOC_PIN1) |	\
				     PIN_MODE_INPUT(GPIOC_PIN2) |	\
				     PIN_MODE_INPUT(GPIOC_PIN3) |	\
				     PIN_MODE_INPUT(GPIOC_PIN4) |	\
				     PIN_MODE_INPUT(GPIOC_PIN5) |	\
				     PIN_MODE_INPUT(GPIOC_PIN6) |	\
				     PIN_MODE_INPUT(GPIOC_PIN7) |	\
                                     PIN_MODE_INPUT(GPIOC_PIN8) |	\
				     PIN_MODE_INPUT(GPIOC_PIN9) |	\
				     PIN_MODE_INPUT(GPIOC_PIN10) |	\
				     PIN_MODE_INPUT(GPIOC_PIN11) |	\
				     PIN_MODE_INPUT(GPIOC_PIN12) |	\
				     PIN_MODE_INPUT(GPIOC_PIN13) |	\
				     PIN_MODE_INPUT(GPIOC_PIN14) |	\
				     PIN_MODE_INPUT(GPIOC_PIN15))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_PIN0) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN1) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN2) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN3) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN4) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN5) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN6) |	\
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN7) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN8) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN9) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN10) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN11) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN12) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN14) |	\
				     PIN_OTYPE_PUSHPULL(GPIOC_PIN15))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_50M(GPIOC_PIN0) |	\
				     PIN_OSPEED_50M(GPIOC_PIN1) |	\
				     PIN_OSPEED_50M(GPIOC_PIN2) |	\
				     PIN_OSPEED_50M(GPIOC_PIN3) |	\
				     PIN_OSPEED_50M(GPIOC_PIN4) |	\
				     PIN_OSPEED_50M(GPIOC_PIN5) |	\
				     PIN_OSPEED_50M(GPIOC_PIN6) |	\
				     PIN_OSPEED_50M(GPIOC_PIN7) |	\
                                     PIN_OSPEED_50M(GPIOC_PIN8) |	\
				     PIN_OSPEED_50M(GPIOC_PIN9) |	\
                                     PIN_OSPEED_50M(GPIOC_PIN10) |	\
				     PIN_OSPEED_50M(GPIOC_PIN11) |	\
                                     PIN_OSPEED_50M(GPIOC_PIN12) |	\
				     PIN_OSPEED_50M(GPIOC_PIN13) |	\
                                     PIN_OSPEED_50M(GPIOC_PIN14) |	\
				     PIN_OSPEED_50M(GPIOC_PIN15))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_PULLUP(GPIOC_PIN0) |	\
				     PIN_PUPDR_PULLUP(GPIOC_PIN1) |	\
				     PIN_PUPDR_PULLUP(GPIOC_PIN2) |	\
				     PIN_PUPDR_PULLUP(GPIOC_PIN3) |	\
				     PIN_PUPDR_PULLUP(GPIOC_PIN4) |	\
				     PIN_PUPDR_PULLUP(GPIOC_PIN5) |	\
				     PIN_PUPDR_PULLUP(GPIOC_PIN6) |	\
                                     PIN_PUPDR_PULLUP(GPIOC_PIN7) |	\
				     PIN_PUPDR_PULLUP(GPIOC_PIN8) |	\
                                     PIN_PUPDR_PULLUP(GPIOC_PIN9) |	\
				     PIN_PUPDR_PULLUP(GPIOC_PIN10) |	\
                                     PIN_PUPDR_PULLUP(GPIOC_PIN11) |	\
				     PIN_PUPDR_PULLUP(GPIOC_PIN12) |	\
                                     PIN_PUPDR_PULLUP(GPIOC_PIN13) |	\
				     PIN_PUPDR_PULLUP(GPIOC_PIN14) |	\
                                     PIN_PUPDR_PULLUP(GPIOC_PIN15))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_PIN0) |		\
				     PIN_ODR_HIGH(GPIOC_PIN1) |		\
				     PIN_ODR_HIGH(GPIOC_PIN2) |		\
				     PIN_ODR_HIGH(GPIOC_PIN3) |		\
				     PIN_ODR_HIGH(GPIOC_PIN4) |		\
				     PIN_ODR_HIGH(GPIOC_PIN5) |		\
				     PIN_ODR_HIGH(GPIOC_PIN6) |		\
				     PIN_ODR_HIGH(GPIOC_PIN7) |		\
                                     PIN_ODR_HIGH(GPIOC_PIN8) |		\
				     PIN_ODR_HIGH(GPIOC_PIN9) |		\
                                     PIN_ODR_HIGH(GPIOC_PIN10) |	\
				     PIN_ODR_HIGH(GPIOC_PIN11) |	\
                                     PIN_ODR_HIGH(GPIOC_PIN12) |	\
				     PIN_ODR_HIGH(GPIOC_PIN13) |	\
                                     PIN_ODR_HIGH(GPIOC_PIN14) |	\
				     PIN_ODR_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_PIN0, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN1, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN2, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN3, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN4, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN5, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN6, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN7, 0))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_PIN8, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN9, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN10, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN11, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN12, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN13, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN14, 0) |	\
				     PIN_AFIO_AF(GPIOC_PIN15, 0))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (input pullup).
 * PD1  - PIN1                      (input pullup).
 * PD2  - PIN2                      (input pullup).
 * PD3  - PIN3                      (input pullup).
 * PD4  - PIN4                      (input pullup).
 * PD5  - PIN5                      (input pullup).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - PIN10                     (input pullup).
 * PD11 - PIN11                     (input pullup).
 * PD12 - PIN12                     (input pullup).
 * PD13 - PIN13                     (input pullup).
 * PD14 - PIN14                     (input pullup).
 * PD15 - PIN15                     (input pullup).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_INPUT(GPIOD_PIN0) |	\
				     PIN_MODE_INPUT(GPIOD_PIN1) |	\
				     PIN_MODE_INPUT(GPIOD_PIN2) |	\
				     PIN_MODE_INPUT(GPIOD_PIN3) |	\
				     PIN_MODE_INPUT(GPIOD_PIN4) |	\
				     PIN_MODE_INPUT(GPIOD_PIN5) |	\
				     PIN_MODE_INPUT(GPIOD_PIN6) |	\
				     PIN_MODE_INPUT(GPIOD_PIN7) |	\
                                     PIN_MODE_INPUT(GPIOD_PIN8) |	\
				     PIN_MODE_INPUT(GPIOD_PIN9) |	\
				     PIN_MODE_INPUT(GPIOD_PIN10) |	\
				     PIN_MODE_INPUT(GPIOD_PIN11) |	\
				     PIN_MODE_INPUT(GPIOD_PIN12) |	\
				     PIN_MODE_INPUT(GPIOD_PIN13) |	\
				     PIN_MODE_INPUT(GPIOD_PIN14) |	\
				     PIN_MODE_INPUT(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_PIN0) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN1) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN2) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN4) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN5) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) |	\
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN12) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN13) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN14) |	\
				     PIN_OTYPE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_50M(GPIOD_PIN0) |	\
				     PIN_OSPEED_50M(GPIOD_PIN1) |	\
				     PIN_OSPEED_50M(GPIOD_PIN2) |	\
				     PIN_OSPEED_50M(GPIOD_PIN3) |	\
				     PIN_OSPEED_50M(GPIOD_PIN4) |	\
				     PIN_OSPEED_50M(GPIOD_PIN5) |	\
				     PIN_OSPEED_50M(GPIOD_PIN6) |	\
				     PIN_OSPEED_50M(GPIOD_PIN7) |	\
                                     PIN_OSPEED_50M(GPIOD_PIN8) |	\
				     PIN_OSPEED_50M(GPIOD_PIN9) |	\
                                     PIN_OSPEED_50M(GPIOD_PIN10) |	\
				     PIN_OSPEED_50M(GPIOD_PIN11) |	\
                                     PIN_OSPEED_50M(GPIOD_PIN12) |	\
				     PIN_OSPEED_50M(GPIOD_PIN13) |	\
                                     PIN_OSPEED_50M(GPIOD_PIN14) |	\
				     PIN_OSPEED_50M(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_PULLUP(GPIOD_PIN0) |	\
				     PIN_PUPDR_PULLUP(GPIOD_PIN1) |	\
				     PIN_PUPDR_PULLUP(GPIOD_PIN2) |	\
				     PIN_PUPDR_PULLUP(GPIOD_PIN3) |	\
				     PIN_PUPDR_PULLUP(GPIOD_PIN4) |	\
				     PIN_PUPDR_PULLUP(GPIOD_PIN5) |	\
				     PIN_PUPDR_PULLUP(GPIOD_PIN6) |	\
                                     PIN_PUPDR_PULLUP(GPIOD_PIN7) |	\
				     PIN_PUPDR_PULLUP(GPIOD_PIN8) |	\
                                     PIN_PUPDR_PULLUP(GPIOD_PIN9) |	\
				     PIN_PUPDR_PULLUP(GPIOD_PIN10) |	\
                                     PIN_PUPDR_PULLUP(GPIOD_PIN11) |	\
				     PIN_PUPDR_PULLUP(GPIOD_PIN12) |	\
                                     PIN_PUPDR_PULLUP(GPIOD_PIN13) |	\
				     PIN_PUPDR_PULLUP(GPIOD_PIN14) |	\
                                     PIN_PUPDR_PULLUP(GPIOD_PIN15))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_PIN0) |		\
				     PIN_ODR_HIGH(GPIOD_PIN1) |		\
				     PIN_ODR_HIGH(GPIOD_PIN2) |		\
				     PIN_ODR_HIGH(GPIOD_PIN3) |		\
				     PIN_ODR_HIGH(GPIOD_PIN4) |		\
				     PIN_ODR_HIGH(GPIOD_PIN5) |		\
				     PIN_ODR_HIGH(GPIOD_PIN6) |		\
				     PIN_ODR_HIGH(GPIOD_PIN7) |		\
                                     PIN_ODR_HIGH(GPIOD_PIN8) |		\
				     PIN_ODR_HIGH(GPIOD_PIN9) |		\
                                     PIN_ODR_HIGH(GPIOD_PIN10) |	\
				     PIN_ODR_HIGH(GPIOD_PIN11) |	\
                                     PIN_ODR_HIGH(GPIOD_PIN12) |	\
				     PIN_ODR_HIGH(GPIOD_PIN13) |	\
                                     PIN_ODR_HIGH(GPIOD_PIN14) |	\
				     PIN_ODR_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_PIN0, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN1, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN2, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN3, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN4, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN5, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN6, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN7, 0))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN9, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN10, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN11, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN12, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN13, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN14, 0) |	\
				     PIN_AFIO_AF(GPIOD_PIN15, 0))

/*
 * GPIOE setup:
 *
 * PD0  - PIN0                      (input pullup).
 * PD1  - PIN1                      (input pullup).
 * PD2  - PIN2                      (input pullup).
 * PD3  - PIN3                      (input pullup).
 * PD4  - PIN4                      (input pullup).
 * PD5  - PIN5                      (input pullup).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - PIN10                     (input pullup).
 * PD11 - PIN11                     (input pullup).
 * PD12 - PIN12                     (input pullup).
 * PD13 - PIN13                     (input pullup).
 * PD14 - PIN14                     (input pullup).
 * PD15 - PIN15                     (input pullup).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_PIN0) |	\
				     PIN_MODE_INPUT(GPIOE_PIN1) |	\
				     PIN_MODE_INPUT(GPIOE_PIN2) |	\
				     PIN_MODE_INPUT(GPIOE_PIN3) |	\
				     PIN_MODE_INPUT(GPIOE_PIN4) |	\
				     PIN_MODE_INPUT(GPIOE_PIN5) |	\
				     PIN_MODE_INPUT(GPIOE_PIN6) |	\
				     PIN_MODE_INPUT(GPIOE_PIN7) |	\
                                     PIN_MODE_INPUT(GPIOE_PIN8) |	\
				     PIN_MODE_INPUT(GPIOE_PIN9) |	\
				     PIN_MODE_INPUT(GPIOE_PIN10) |	\
				     PIN_MODE_INPUT(GPIOE_PIN11) |	\
				     PIN_MODE_INPUT(GPIOE_PIN12) |	\
				     PIN_MODE_INPUT(GPIOE_PIN13) |	\
				     PIN_MODE_INPUT(GPIOE_PIN14) |	\
				     PIN_MODE_INPUT(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN1) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN2) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN3) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN5) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN6) |	\
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN7) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN8) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN9) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN10) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN11) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN12) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN13) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN14) |	\
				     PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_50M(GPIOE_PIN0) |	\
				     PIN_OSPEED_50M(GPIOE_PIN1) |	\
				     PIN_OSPEED_50M(GPIOE_PIN2) |	\
				     PIN_OSPEED_50M(GPIOE_PIN3) |	\
				     PIN_OSPEED_50M(GPIOE_PIN4) |	\
				     PIN_OSPEED_50M(GPIOE_PIN5) |	\
				     PIN_OSPEED_50M(GPIOE_PIN6) |	\
				     PIN_OSPEED_50M(GPIOE_PIN7) |	\
                                     PIN_OSPEED_50M(GPIOE_PIN8) |	\
				     PIN_OSPEED_50M(GPIOE_PIN9) |	\
                                     PIN_OSPEED_50M(GPIOE_PIN10) |	\
				     PIN_OSPEED_50M(GPIOE_PIN11) |	\
                                     PIN_OSPEED_50M(GPIOE_PIN12) |	\
				     PIN_OSPEED_50M(GPIOE_PIN13) |	\
                                     PIN_OSPEED_50M(GPIOE_PIN14) |	\
				     PIN_OSPEED_50M(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_PULLUP(GPIOE_PIN0) |	\
				     PIN_PUPDR_PULLUP(GPIOE_PIN1) |	\
				     PIN_PUPDR_PULLUP(GPIOE_PIN2) |	\
				     PIN_PUPDR_PULLUP(GPIOE_PIN3) |	\
				     PIN_PUPDR_PULLUP(GPIOE_PIN4) |	\
				     PIN_PUPDR_PULLUP(GPIOE_PIN5) |	\
				     PIN_PUPDR_PULLUP(GPIOE_PIN6) |	\
                                     PIN_PUPDR_PULLUP(GPIOE_PIN7) |	\
				     PIN_PUPDR_PULLUP(GPIOE_PIN8) |	\
                                     PIN_PUPDR_PULLUP(GPIOE_PIN9) |	\
				     PIN_PUPDR_PULLUP(GPIOE_PIN10) |	\
                                     PIN_PUPDR_PULLUP(GPIOE_PIN11) |	\
				     PIN_PUPDR_PULLUP(GPIOE_PIN12) |	\
                                     PIN_PUPDR_PULLUP(GPIOE_PIN13) |	\
				     PIN_PUPDR_PULLUP(GPIOE_PIN14) |	\
                                     PIN_PUPDR_PULLUP(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) |		\
				     PIN_ODR_HIGH(GPIOE_PIN1) |		\
				     PIN_ODR_HIGH(GPIOE_PIN2) |		\
				     PIN_ODR_HIGH(GPIOE_PIN3) |		\
				     PIN_ODR_HIGH(GPIOE_PIN4) |		\
				     PIN_ODR_HIGH(GPIOE_PIN5) |		\
				     PIN_ODR_HIGH(GPIOE_PIN6) |		\
				     PIN_ODR_HIGH(GPIOE_PIN7) |		\
                                     PIN_ODR_HIGH(GPIOE_PIN8) |		\
				     PIN_ODR_HIGH(GPIOE_PIN9) |		\
                                     PIN_ODR_HIGH(GPIOE_PIN10) |	\
				     PIN_ODR_HIGH(GPIOE_PIN11) |	\
                                     PIN_ODR_HIGH(GPIOE_PIN12) |	\
				     PIN_ODR_HIGH(GPIOE_PIN13) |	\
                                     PIN_ODR_HIGH(GPIOE_PIN14) |	\
				     PIN_ODR_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN1, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN2, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN3, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN4, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN5, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN6, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN7, 0))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_PIN8, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN9, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN10, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN11, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN12, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN13, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN14, 0) |	\
				     PIN_AFIO_AF(GPIOE_PIN15, 0))

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
	void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
