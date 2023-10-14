// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┐ ┌───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ q │ w │ e │ r │ t │ - │ │ = │ y │ u │ i │ o │ p │ \ │
     * ├───┼───┼───┼───┼───┼───┼───┤ ├───┼───┼───┼───┼───┼───┼───┤
     * │ctl│ a │ s │ d │ f │ g │ [ │ │ ] │ h │ j │ k │ l │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┼───┤ ├───┼───┼───┼───┼───┼───┼───┤
     * │sht│ z │ x │ c │ v │ b │Fn1│ │Fn2│ n │ m │ , │ . │ / │sht│
     * ├───┼───┼───┼───┼───┼───┼───┤ ├───┼───┼───┼───┼───┼───┼───┤
     * │ctl│alt│cmd│Fn6│Fn5│spc│bak│ │sht│ent│Fn4│Fn3│cmd│alt│ctl│
     * └───┴───┴───┴───┴───┴───┴───┘ └───┴───┴───┴───┴───┴───┴───┘
     */

    /*  LAYOUT Template
     * [] = LAYOUT(
     *    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
     *    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
     *    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
     *    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX
     * )
     */

    [0] = LAYOUT(
        KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_MINS,      KC_EQL,   KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSLS,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_LBRC,      KC_RBRC,  KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_SPC,       MO(3),    KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
        KC_LCTL,  KC_LALT,  KC_LGUI,  MO(1),    MO(2),    KC_SPC,   KC_BSPC,      KC_RSFT,  KC_ENT,   MO(3),    KC_SPC,   KC_RGUI,  KC_RALT,  KC_RCTL
    ),

    [1] = LAYOUT(
        KC_GRV,   KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_MINS,      KC_EQL,   KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  _______,
        KC_TAB,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_LPRN,      KC_RPRN,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,      _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,      _______,  _______,  _______,  _______,  _______,  _______,  _______
    ),
    
    [2] = LAYOUT(
        KC_GRV,   XXXXXXX,  XXXXXXX,  KC_UP,    XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        KC_TAB,   XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_F5,    XXXXXXX,      XXXXXXX,  XXXXXXX,  SGUI(KC_LBRC),XXXXXXX,SGUI(KC_RBRC),XXXXXXX,  XXXXXXX,
        XXXXXXX,  KC_F6,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  KC_BSPC,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,      _______,  _______,  _______,  _______,  _______,  _______,  _______
    ),

    [3] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      KC_VOLU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    XXXXXXX,      KC_VOLD,  XXXXXXX,  SGUI(KC_LBRC),XXXXXXX,SGUI(KC_RBRC),XXXXXXX,  XXXXXXX,
        XXXXXXX,  KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   XXXXXXX,      XXXXXXX,  XXXXXXX,  KC_BSPC,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,      _______,  _______,  _______,  _______,  _______,  _______,  _______
    )


};
