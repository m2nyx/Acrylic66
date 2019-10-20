/* Copyright 2019 Matthew Tan
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
#include QMK_KEYBOARD_H

// Defines the keycodes used by our macros in process_record_user
/*
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = KEYMAP( /* Base */
      KC_ESC , KC_1   , KC_2   , KC_3  , KC_4  , KC_5  , KC_6  , KC_7  , KC_8   , KC_9  , KC_0   , KC_MINS  , KC_EQL  , KC_BSPC  ,                          \
      KC_TAB , KC_Q   , KC_W   , KC_E  , KC_R  , KC_T  , KC_Y  , KC_U  , KC_I   , KC_O  , KC_P   , KC_LBRC  , KC_RBRC , KC_BSLS  ,      KC_INS  ,          \
      KC_LCTL, KC_A   , KC_S   , KC_D  , KC_F  , KC_G  , KC_H  , KC_J  , KC_K   , KC_L  , KC_SCLN, KC_QUOT  ,           KC_ENT   ,      KC_DEL  ,           \
      KC_LSFT, KC_Z   , KC_X   , KC_C  , KC_V  , KC_B  , KC_N  , KC_M  , KC_COMM, KC_DOT, KC_SLSH,            KC_RSFT , KC_UP    ,                  \
      TT(1)  , KC_LGUI, KC_LALT,                 KC_SPC,           LCTL(LSFT(KC_ESC)) ,LGUI(KC_R),            KC_LEFT , KC_DOWN  ,      KC_RGHT ,    \
    ),

    [1] = KEYMAP(
      KC_TILD  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10  , KC_F11  , KC_F12  ,                         KC_DEL  ,                     \
        _______  , KC_BTN1  , KC_MS_U  , KC_BTN2  , KC_WH_U  , _______  , _______  , KC_BRIU  , _______  , _______  , KC_MPRV  , KC_MPLY  , KC_MNXT  , KC_MUTE  ,      KC_VOLU   ,    \
          KC_CAPS  , KC_MS_L  , KC_MS_D  , KC_MS_R  , KC_WH_D  , _______  , _______  , KC_BRID  , _______  , _______  , _______  , _______  ,      _______  ,          KC_VOLD  ,     \
            KC_LSFT  , KC_ACL0  , KC_ACL1  , KC_ACL2  , KC_BTN3  , _______  , KC_CALC  , KC_MYCM  , _______  , _______  , _______  ,    _______  ,      KC_PGUP  ,                    \
       _______  ,   _______  ,  _______  ,                      _______  ,           _______  , _______  ,                                   KC_HOME  , KC_PGDN  ,  KC_END  ,         \
    ),
};
/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}
*/
/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
*/
