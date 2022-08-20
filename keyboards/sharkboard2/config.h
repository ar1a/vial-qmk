/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER Vial
#define PRODUCT Sharkboard

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS \
    { 2 }
#define MATRIX_COL_PINS \
    { 5, 4, 3 }

#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 3
