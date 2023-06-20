// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤Bsp│   │Ent├───┘
      *              wvzxxx         └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_Q,  XXXXXXX,    KC_LEFT, XXXXXXX   ,    KC_A,    XXXXXXX,                               XXXXXXX,    XXXXXXX,    KC_Jf    XXXXXXX,    KC_V,    XXXXXXX,
        KC_E, XXXXXXX,    KC_DOWN,    KC_UP,    KC_S,    KC_W,                                             KC_O,    XXXXXXX,    KC_K,    KC_I,    KC_X , KC_C,
        XXXXXXX, XXXXXXX,    KC_RIGHT,    XXXXXXX,    KC_D,    XXXXXXX,                               KC_U,    XXXXXXX,    KC_L, XXXXXXX,  KC_Z, XXXXXXX,
                                            XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX
    )
};

