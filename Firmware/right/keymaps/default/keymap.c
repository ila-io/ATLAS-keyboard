#include QMK_KEYBOARD_H

enum custom_keycodes {
    WIN_SHIFT_S = SAFE_RANGE,
    COPY
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_DEL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BACKSPACE,
        KC_RIGHT_BRACKET, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BACKSLASH,
        KC_PGUP, KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_ENTER,
        KC_PGDN, KC_N, KC_M, KC_COMMA, KC_PERIOD, KC_SLASH, KC_QUOTE,
        KC_SPACE, KC_F14, WIN_SHIFT_S, COPY, KC_DEL,
    );

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if(clockwise) {
        tap_code(KC_RIGHT); 
    }else{
        tap_code(KC_LEFT);
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case WIN_SHIFT_S:
            if (record->event.pressed) {
                tap_code16(LGUI(LSFT(KC_S))); 
            }
        return false;

        case COPY:
            if (record->event.pressed) {
                tap_code16(LCTRL(KC_C)); 
            }
        return false;
    }
    return true;
}


void matrix_scan_user(void){

}

