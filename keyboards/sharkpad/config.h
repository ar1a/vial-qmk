// Copyright 2022 Aria Edmonds (@ar1a)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RGB_DI_PIN GP26
#define RGB_MATRIX_LED_COUNT 3
// TODO: vial is using some older code that still uses DRIVER_LED_TOTAL
//  so we set it here, but once it's merged upstream we can remove the below
#define DRIVER_LED_TOTAL 3
#define RGBLED_NUM 3

#define WS2812_PIO_USE_PIO1

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define RGB_DISABLE_TIMEOUT 1200000

/*
 * Setup some nice default rgb
 */

// 299, 85, 127 -> #feaaff
// all hue values are scaled to 255 so:
// 299 / (360 - 1) * (256 - 1) = 212
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#define RGB_MATRIX_STARTUP_HUE 212
#define RGB_MATRIX_STARTUP_SAT 85
#define RGB_MATRIX_STARTUP_VAL 127
#define RGB_MATRIX_STARTUP_SPD 127

/*
 * Enable specific rgb effects
 */
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
