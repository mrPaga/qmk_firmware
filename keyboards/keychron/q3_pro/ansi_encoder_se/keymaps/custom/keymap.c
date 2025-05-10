/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

// clang-format off
enum layers{
  NORM_BASE,
  NORM_FN,
  CUST_BASE,
  CUST_FN,
  CUST_NUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [NORM_BASE] = LAYOUT_ansi_92(
        KC_MUTE,  KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  KC_SNAP,  KC_SIRI,  KC_SLEP,
                  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        _______,  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        _______,  KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        _______,  KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        _______,  KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  KC_RCTL, MO(NORM_FN), KC_LEFT,  KC_DOWN,  KC_RGHT
    ),

    [NORM_FN] = LAYOUT_ansi_92(
        RGB_TOG,  _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   _______,  _______,  RGB_TOG,
                  _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,  _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______
    ),

    [CUST_BASE] = LAYOUT_ansi_92(
        KC_MUTE,    KC_CAPS,                  KC_F1,      KC_F2,      KC_F3,    KC_F4,    KC_F5,       KC_F6,       KC_F7,       KC_F8,       KC_F9,     KC_F10,   KC_F11,     KC_F12,   KC_PSCR,  KC_CTANA, KC_SLEP,
                    KC_GRV,       KC_1,       KC_2,       KC_3,       KC_4,     KC_5,     KC_6,        KC_7,        KC_8,        KC_9,        KC_0,      KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        _______,    KC_TAB,       KC_Q,       KC_W,       KC_E,       KC_R,     KC_T,     KC_Y,        KC_U,        KC_I,        KC_O,        KC_P,      KC_BSLS,  KC_LBRC,    KC_RBRC,  KC_DEL,   KC_END,   KC_PGDN,
        _______,    KC_ESC, CTL_T(KC_A), GUI_T(KC_S), SFT_T(KC_D), ALT_T(KC_F), KC_G,     KC_H, ALT_T(KC_J), SFT_T(KC_K),  GUI_T(KC_L), CTL_T(KC_SCLN),  KC_QUOT,              KC_ENT,
        _______, MO(CUST_NUM),                KC_Z,       KC_X,       KC_C,     KC_V,     KC_B,        KC_N,        KC_M,        KC_COMM,     KC_DOT,    KC_SLSH,              KC_RSFT,            KC_UP,
        _______,    KC_LCTL,      KC_LWIN,    KC_LALT,                              LT(CUST_FN, KC_SPC),                                      KC_RALT,   KC_RWIN,  KC_RCTL, MO(CUST_FN), KC_LEFT,  KC_DOWN,  KC_RGHT
    ),

    [CUST_FN] = LAYOUT_ansi_92(
        RGB_TOG,  _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,    _______,  _______,  RGB_TOG,
                  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        DT_PRNT,  KC_GRV,   S(KC_1),  S(KC_2),  S(KC_3),  S(KC_4),  S(KC_5),  S(KC_6),  S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0),  KC_MINS,  XXXXXXX,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        DT_UP,    CW_TOGG,  KC_ESC,   KC_TAB,   _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_ENT,   KC_EQL,               KC_ENT,
        DT_DOWN,  _______,            _______,  KC_DEL,   _______,  _______,  _______,  _______,  _______,  KC_LBRC,  KC_RBRC,  KC_BSPC,              KC_RSFT,            KC_UP,
        _______,  _______,  _______,  _______,                                KC_SPC,                                 _______,  _______,  _______,    _______,  KC_LEFT,  KC_DOWN,  KC_RGHT
    ),

    [CUST_NUM] = LAYOUT_ansi_92(
        RGB_TOG,  _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    _______,  _______,  RGB_TOG,
                  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_4,     KC_5,     KC_6,     KC_ENT,   KC_EQL,               _______,
        _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,  KC_1,     KC_2,     KC_3,     KC_BSPC,              _______,            _______,
        _______,  _______,  _______,  _______,                                KC_0,                                   _______,  _______,  _______,    _______,  _______,  _______,  _______
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [NORM_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [NORM_FN]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [CUST_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [CUST_FN]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [CUST_NUM]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
};
#endif // ENCODER_MAP_ENABLE
