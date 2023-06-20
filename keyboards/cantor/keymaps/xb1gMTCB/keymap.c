// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCLN RCTL_T(KC_SCLN)

enum combos {
  Q_A_DLR,
  A_Z_PERC,
  W_S_LBRC,
  S_X_LT,
  E_D_RBRC,
  D_C_GT,
  R_F_ESC,
  F_V_GRV,
  T_G_EXLM,
  G_B_AT,
  Y_H_AMPR,
  H_N_PIPE,
  U_J_LPRN,
  J_M_LCBR,
  I_K_RPRN,
  K_COMM_RCBR,
  O_L_PLUS,
  L_DOT_MINS,
  P_SCLN_CIRC,
  SCLN_SLSH_QUES,

};

const uint16_t PROGMEM q_a_dlr[] = { KC_Q, CTL_A, COMBO_END};
const uint16_t PROGMEM a_z_perc[] = { CTL_A, KC_Z, COMBO_END};
const uint16_t PROGMEM w_s_lbrc[] = { KC_W, ALT_S, COMBO_END};
const uint16_t PROGMEM s_x_lt[] = { ALT_S, KC_X, COMBO_END};
const uint16_t PROGMEM e_d_rbrc[] = { KC_E, GUI_D, COMBO_END};
const uint16_t PROGMEM d_c_gt[] = { GUI_D, KC_C, COMBO_END};
const uint16_t PROGMEM r_f_esc[] = { KC_R, SFT_F, COMBO_END};
const uint16_t PROGMEM f_v_grv[] = { SFT_F, KC_V, COMBO_END};
const uint16_t PROGMEM t_g_exlm[] = { KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM g_b_at[] = { KC_G, KC_B, COMBO_END};
const uint16_t PROGMEM y_h_ampr[] = { KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM h_n_pipe[] = { KC_H, KC_N, COMBO_END};
const uint16_t PROGMEM u_j_lprn[] = { KC_U, SFT_J, COMBO_END};
const uint16_t PROGMEM j_m_lcbr[] = { SFT_J, KC_M, COMBO_END};
const uint16_t PROGMEM i_k_rprn[] = { KC_I, GUI_K, COMBO_END};
const uint16_t PROGMEM k_comm_rcbr[] = { GUI_K, KC_COMM, COMBO_END};
const uint16_t PROGMEM o_l_plus[] = { KC_O, ALT_L, COMBO_END};
const uint16_t PROGMEM l_dot_mins[] = { ALT_L, KC_DOT, COMBO_END};
const uint16_t PROGMEM p_scln_circ[] = { KC_P, CTL_SCLN, COMBO_END};
const uint16_t PROGMEM scln_slsh_ques[] = { CTL_SCLN, KC_SLSH, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [Q_A_DLR] = COMBO(q_a_dlr, KC_DLR),
  [A_Z_PERC] = COMBO(a_z_perc, KC_PERC),
  [W_S_LBRC] = COMBO(w_s_lbrc, KC_LBRC),
  [S_X_LT] = COMBO(s_x_lt, KC_LT),
  [E_D_RBRC] = COMBO(e_d_rbrc, KC_RBRC),
  [D_C_GT] = COMBO(d_c_gt, KC_GT),
  [R_F_ESC] = COMBO(r_f_esc, KC_ESC),
  [F_V_GRV] = COMBO(f_v_grv, KC_GRV),
  [T_G_EXLM] = COMBO(t_g_exlm, KC_EXLM),
  [G_B_AT] = COMBO(g_b_at, KC_AT),
  [Y_H_AMPR] = COMBO(y_h_ampr, KC_AMPR),
  [H_N_PIPE] = COMBO(h_n_pipe, KC_PIPE),
  [U_J_LPRN] = COMBO(u_j_lprn, KC_BSPC),
  [J_M_LCBR] = COMBO(j_m_lcbr, KC_DEL),
  [I_K_RPRN] = COMBO(i_k_rprn, KC_LPRN),
  [K_COMM_RCBR] = COMBO(k_comm_rcbr, KC_LCBR),
  [O_L_PLUS] = COMBO(o_l_plus, KC_RPRN),
  [L_DOT_MINS] = COMBO(l_dot_mins, KC_RCBR),
  [P_SCLN_CIRC] = COMBO(p_scln_circ, KC_CIRC),
  [SCLN_SLSH_QUES] = COMBO(scln_slsh_ques, KC_HASH),

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     /* base
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼─$─┼─[─┼─]─┼esc┼─!─┤       ├─&─┼─(─┼─)─┼─+─┼─^─┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼─%─┼─<─┼─>─┼[`]┼─@─┤       ├─|─┼─{─┼─}─┼─-─┼─?─┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │ _ │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤L1 ├───┐   ┌───┤L2 ├───┘
      *                   └───┤Spc│   │Ent├───┘
      *                       └───┘   └───┘
      *
      */

[0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,  CTL_A,   ALT_S,   GUI_D,   SFT_F,   KC_G,                          KC_H,  SFT_J,   GUI_K,   ALT_L,  CTL_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                        KC_N,    KC_M, KC_COMM,   KC_DOT, KC_SLSH, KC_MINS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCMD,   MO(1),  KC_SPC,   KC_ENT, MO(2), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),
       /* layer1
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ESC│   │   │   │   │   │       │ 7 │ 8 │ 9 │ 0 │pg^│pgd│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│CAP│   │   │   │   │       │ 4 │ 5 │ 6 │hom│up │end│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│   │   │rec│prt│ALT│       │ 1 │ 2 │ 3 │lft│dwn│rgh│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤L3 ├───┘
      *                   └───┤Spc│   │Ent├───┘
      *                       └───┘   └───┘
      */
  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,  XXXXXXX, XXXXXXX, LCTL(KC_UP), KC_CAPS, XXXXXXX,                         KC_7,    KC_8,    KC_9,    KC_0, KC_PGUP, KC_PGDN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, LCTL(KC_LEFT), LCTL(KC_DOWN), LCTL(KC_RIGHT), LCTL(KC_GRV),  KC_4,    KC_5,    KC_6, KC_HOME,   KC_UP,  KC_END,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_LNG2, XXXXXXX, LSG(KC_5),LSG(KC_4),KC_LALT,                       KC_1,    KC_2,    KC_3,KC_LEFT, KC_DOWN,KC_RIGHT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCMD, KC_TRNS,  KC_SPC,    KC_ENT,   MO(3), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
      /* layer2
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │   │ ! │ @ │ # │ $ │       │ & │ % │ [ │ ] │Del│Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │ ? │ * │ ` │ ^ │       │ - │ = │ ( │ ) │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │ ' │ \ │ | │ ~ │       │ _ │ + │ { │ } │   │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤L3 ├───┐   ┌───┤   ├───┘
      *                   └───┤Spc│   │Ent├───┘
      *                       └───┘   └───┘
      */
  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR,                      KC_AMPR, KC_PERC, KC_LBRC, KC_RBRC,  KC_DEL, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_QUES, KC_ASTR,  KC_GRV, KC_CIRC,                      KC_MINS,  KC_EQL, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_QUOT, KC_BSLS, KC_PIPE, KC_TILD,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCMD, MO(3), KC_LSFT,    KC_SPC, KC_TRNS, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
      /* layer3
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │   │   │   │   │l4 │       │mpv│mpy│mnx│   │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │f4 │f5 │f6 │🔊 │       │🔆 │f10│f11│f12│   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │f1 │f2 │f3 │🔉 │       │🔅 │f7 │f8 │f9 │   │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤Spc│   │Ent├───┘
      *                       └───┘   └───┘
      */
  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, DF(0) , DF(5),   TO(4),                      KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_F4,KC_F5,KC_F6, KC_KB_VOLUME_UP,                     KC_BRIU,   KC_F10,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_F1, KC_F2,KC_F3, KC_KB_VOLUME_DOWN,                   KC_BRID,    KC_F7,   KC_F8,   KC_F9, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCMD, KC_TRNS, KC_SPC,    KC_ENT, KC_TRNS, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,  KC_3,   KC_1,      KC_W,    KC_E,    KC_R,                        KC_ESC,    KC_G,    KC_C,    KC_R,    KC_L, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_2, KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,                          KC_D,    KC_H,    KC_T,     KC_N,   KC_S, KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LCTL,  KC_B,    KC_7,    KC_G,    KC_B,                        KC_B,    KC_M,    KC_W,     KC_V,   KC_Z, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_K,   KC_SPC ,  MO(9),       KC_ENT, KC_RALT, TO(0)
                                      //`--------------------------'  `--------------------------'

  ),
  //colemakdh
 [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,     KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                        KC_J,    KC_L,    KC_U,   KC_Y,  KC_SCLN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                        KC_M,    KC_N,    KC_E,  KC_I,  KC_O, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                        KC_K,  KC_H, KC_COMM,   KC_DOT, KC_SLSH, KC_MINS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCMD,   MO(6),  KC_SPC,   KC_ENT, MO(7), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),
  [6] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,  XXXXXXX, XXXXXXX, LCTL(KC_UP), KC_CAPS, XXXXXXX,                         KC_7,    KC_8,    KC_9,    KC_0, KC_PGUP, KC_PGDN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, LCTL(KC_LEFT), LCTL(KC_DOWN), LCTL(KC_RIGHT), LCTL(KC_GRV),  KC_4,    KC_5,    KC_6, KC_HOME,   KC_UP,  KC_END,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_LNG2, XXXXXXX, LSG(KC_5),LSG(KC_4),KC_LALT,                       KC_1,    KC_2,    KC_3,KC_LEFT, KC_DOWN,KC_RIGHT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCMD, KC_TRNS,  KC_SPC,    KC_ENT,   MO(8), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [7] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR,                      KC_AMPR, KC_PERC, KC_LBRC, KC_RBRC,  KC_DEL, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_QUES, KC_ASTR,  KC_GRV, KC_CIRC,                      KC_MINS,  KC_EQL, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_QUOT, KC_BSLS, KC_PIPE, KC_TILD,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCMD, MO(8), KC_LSFT,    KC_SPC, KC_TRNS, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
  [8] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX , DF(0), XXXXXXX,                      KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_F4,KC_F5,KC_F6, KC_KB_VOLUME_UP,                     KC_BRIU,  KC_F10,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_F1, KC_F2,KC_F3, KC_KB_VOLUME_DOWN,                  KC_BRID,   KC_F7,   KC_F8,   KC_F9, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCMD, KC_TRNS, KC_SPC,    KC_ENT, KC_TRNS, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
  [9] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,  KC_1,   KC_2,      KC_3,    KC_5,    KC_Q,                        KC_F,    KC_G,    KC_C,    KC_R,    KC_L, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_Y,    KC_A,    KC_S,    KC_T,    KC_F,                          KC_D,    KC_H,    KC_T,     KC_N,   KC_S, KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_COMM,  KC_Q,    KC_G,    KC_C,    KC_X,                        KC_B,    KC_M,    KC_W,     KC_V,   KC_Z, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_V,  KC_SPC,  KC_SPC,   KC_ENT, KC_RALT, TO(0)
                                      //`--------------------------'  `--------------------------'

  ),
};

