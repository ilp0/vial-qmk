// Copyright 2022 ilp0 (@ilp0)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */


/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MATRIX_ROWS 3
#define MATRIX_COLS 4

#define DIODE_DIRECTION COL2ROW

#define DIRECT_PINS { {B4, B5}, { F4, F6, B3, B6 }, { F5, F7, B1, B2 } }

#define ENCODERS_PAD_A {D7, D4}
#define ENCODERS_PAD_B {E6, C6}

#define USB_POLLING_INTERVAL_MS 1

#define OLED_BRIGHTNESS 128
#define OLED_DISLAY_ADDRESS 0x3C
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
