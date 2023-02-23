/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

/*
   This file has been auto generated from unified-targets repo.

   The auto generation is transitional only, please ensure you update unified targets and not this file until the transition has complete.
*/

#define FC_TARGET_MCU     STM32F745

#define BOARD_NAME        NBD_INFINITYAIOV2PRO
#define MANUFACTURER_ID   NEBD

#define USE_ACCGYRO_BMI270
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

#define BEEPER_PIN           PD13
#define MOTOR1_PIN           PC9
#define MOTOR2_PIN           PC8
#define MOTOR3_PIN           PC7
#define MOTOR4_PIN           PC6
#define LED_STRIP_PIN        PA9
#define UART2_TX_PIN         PA2
#define UART3_TX_PIN         PB10
#define UART7_TX_PIN         PE8
#define UART8_TX_PIN         PE1
#define UART1_RX_PIN         PB7
#define UART2_RX_PIN         PA3
#define UART3_RX_PIN         PB11
#define UART5_RX_PIN         PD2
#define UART8_RX_PIN         PE0
#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9
#define LED0_PIN             PC0
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PB3
#define SPI4_SCK_PIN         PE12
#define SPI1_MISO_PIN        PA6
#define SPI2_MISO_PIN        PB14
#define SPI3_MISO_PIN        PB4
#define SPI4_MISO_PIN        PE13
#define SPI1_MOSI_PIN        PA7
#define SPI2_MOSI_PIN        PB15
#define SPI3_MOSI_PIN        PD6
#define SPI4_MOSI_PIN        PE14
#define ADC_VBAT_PIN         PC1
#define ADC_CURR_PIN         PC2
#define FLASH_CS_PIN         PB0
#define MAX7456_SPI_CS_PIN   PA15
#define GYRO_1_EXTI_PIN      PB1
#define GYRO_2_EXTI_PIN      PD0
#define GYRO_1_CS_PIN        PE11
#define GYRO_2_CS_PIN        PB12

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PC9 , 1,  0) \
    TIMER_PIN_MAP( 1, PC8 , 1,  0) \
    TIMER_PIN_MAP( 2, PC7 , 1,  0) \
    TIMER_PIN_MAP( 3, PC6 , 1,  0) \
    TIMER_PIN_MAP( 4, PA9 , 1,  0) \
    TIMER_PIN_MAP( 5, PD13, 1,  0) \



#define ADC1_DMA_OPT        0

#define MAG_I2C_INSTANCE I2C1
#define BEEPER_INVERTED
#define BEEPER_PWM_HZ 5400
#define MAX7456_SPI_INSTANCE SPI3
#define FLASH_SPI_INSTANCE SPI1
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI4
#define GYRO_2_SPI_INSTANCE SPI2
#define GYRO_2_ALIGN CW270_DEG
