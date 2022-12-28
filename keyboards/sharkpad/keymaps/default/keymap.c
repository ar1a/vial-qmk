#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ Z │ X │ C │ MU│
     * ├───┼───┼───┼───┘
     * │   │   │   │
     * └───┴───┴───┘
     */
    [0] = LAYOUT(KC_Z, KC_X, KC_C, KC_MUTE, KC_ESCAPE, KC_F2, KC_GRAVE)};

led_config_t g_led_config = {{// Key Matrix to LED Index
                              {0, 1, 2, NO_LED},
                              {NO_LED, NO_LED, NO_LED, NO_LED}},
                             {// LED Index to Physical Position
                              {0, 32},
                              {112, 32},
                              {224, 32}},
                             {// LED Index to Flag
                              4, 4, 4}};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {[0] = {ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP)}};
