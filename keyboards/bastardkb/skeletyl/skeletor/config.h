/*
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Key matrix configuration. */
#define MATRIX_ROW_PINS \
    { GP26, GP5, GP4, GP9 }
#define MATRIX_COL_PINS \
    { GP28, GP20, GP6, GP7, GP8 }

/* Handedness. */
// #define MASTER_RIGHT

// To use the handedness pin, resistors need to be installed on the adapter PCB.
// If so, uncomment the following code, and undefine MASTER_RIGHT above.
#define SPLIT_HAND_PIN GP15
#define SPLIT_HAND_PIN_LOW_IS_LEFT  // High -> right, Low -> left. uncomment for left, comment for right

/* RGB settings. */
// #define RGB_DI_PIN GP0

/* Reset. */
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// Shiv custom config

#ifdef SPLIT_HAND_PIN_LOW_IS_LEFT
  #define BOOTMAGIC_LITE_ROW 0        // TOP RIGHT KEY ON RIGHT SIDE, TOP LEFT KEY ON LEFT SIDE
#else
  #define BOOTMAGIC_LITE_ROW 4
#endif

#define BOOTMAGIC_LITE_COLUMN 0

//#define BOOTMAGIC_ROW_RIGHT 4
//#define BOOTMAGIC_COLUMN_RIGHT 0

// Serial comms
#define USE_SERIAL
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100
#define SERIAL_USART_SPEED 921600

// #define DIODE_DIRECTION COL2ROW