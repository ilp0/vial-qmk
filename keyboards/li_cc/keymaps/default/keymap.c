#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_li_cc(
        KC_MUTE,   KC_P9,
        KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_BRIU,
        KC_WBAK,   KC_WREF,   KC_WFWD,   KC_BRID
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code_delay(KC_PGUP, 10);
        } else {
            tap_code_delay(KC_PGDN, 10);
        }
    }
    return false;
}

static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,192,224, 48, 24, 12,  4,  4,  2,  2,  2,  2,  4,  4,  4,  4,  8,  8,  8,208,112, 56, 44, 36,226,226,113, 88, 72, 96, 32, 48, 30, 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0, 15, 63, 48, 32,  0,  0,  0,128,192, 64, 96, 64, 64, 64,192,240, 28,  3,  0,128,240,252, 31,  3,  0,  0,  0,  0,192,196,  7,  3,  0,  0, 32, 32,240,255, 63, 32, 32,  0,  0,  0,  0,128,192,192,  0,192,224,192,  0,  0,  0,128,  0,  0,128,128,192, 64, 64,192,  0,  0,  0,  0,128,128,  0,  0,128,192, 64,192,192,  0,  0,  0,128,128,193, 67, 70,196,  0,  0,  0,  0,  0,128,128,  0,  0,128, 64, 64,192,128,  0,  0,128,192, 64,192,128,  0,  0,  0,  0,  0,  0,128,192, 64, 64,192,128,
        0,224, 24, 12,  4,  2,  2,  2,  2,  4, 12,248,  0,  0,254,239,  1,  0,  0,128,224,120, 14,  3,  1,  6, 28,240,255,255,  1,  0,  0,128, 96,240,254,255,  3,  0,  0,128, 96,248,255, 63,  1,  0,  0,128,224,248,252,127,  3,  1,  0,  0,128,241, 31,  2,  2,  3,225,252,254,  7,  1,  0,  0,  6,  3,  0,192, 96,248,255,255, 24,  6,  1,  0,  4,  7,  3,  0,248,254,  7, 33, 48, 24, 12,  7,  1,128, 96,240,254,255, 63, 14,  3,  0,  0,248,255,127, 28,  6,  1,  0,248,255, 31,  0,  0,  0,248,254, 47, 35, 32, 48, 28, 15,
        3,128, 15, 24, 96, 64,128,128,132,132,134,135,129,192,192, 96, 51, 62, 28, 31, 19, 49, 32, 32, 32, 32, 32, 48, 23, 31, 63, 36,  2,  1,  0,  0,  7, 15,  8,  8,  4,  3,  1,  0,  3, 15, 12,  8, 12,  2,  1,  0,  1,  7, 15,  8,  8, 12,  6,  3,  0,  0,  0,  0,  0,  0,  7, 15, 12,  8,  8,  8,  4,  6,  1,  0,  0, 15,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  7, 12,  8,  8,  8, 12,  6,  3,  1,  0, 15, 15,  1,  0,  0,  0,  0, 15, 15,  3,  0,  0,  0,  0, 15, 31, 31,  0,  0,  0,  0,  3,  7, 14,  8,  8,  8,  8,  4,
        2,  1,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}


bool oled_task_user(void) {
    render_logo();
    return false;
}
