#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_GRAVE,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LEFT_BRACKET,
        KC_BACKSPACE, KC_A, KC_S, KC_D, KC_F, KC_G, KC_HOME,
        KC_LEFT_SHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_END,
        KC_LEFT_CONTROL, KC_LWIN, KC_LALT, KC_F13, KC_SPACE,
    );

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if(clockwise) {
        tap_code(KC_UP); 
    } else {
        tap_code(KC_DOWN);
    }
    return true;
}

void matrix_scan_user(void) {

}

