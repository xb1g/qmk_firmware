// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
#define CTL_A LCTL_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define GUI_S LGUI_T(KC_S)
#define SHFT_T LSFT_T(KC_T)

// Right-hand home row mods
#define SFT_N RSFT_T(KC_N)
#define GUI_E RGUI_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define CTL_O RCTL_T(KC_O)
enum combos { 
  Q_A_DLR,
  A_Z_PERC,
  W_R_LBRC,
  R_X_LT,
  F_S_RBRC,
  S_C_GT,
  P_T_ESC,
  T_D_GRV,
  B_G_EXLM,
  G_V_AT,
  J_M_AMPR,
  M_K_PIPE,
  L_N_BSPC,
  N_H_DEL,
  U_E_LPRN,
  E_COMM_LCBR,
  Y_I_RPRN,
  I_DOT_RCBR,
  SCLN_O_CIRC,
  O_SLSH_HASH,
  
};

const uint16_t PROGMEM q_a_dlr[] = { KC_Q, CTL_A, COMBO_END};
const uint16_t PROGMEM a_z_perc[] = { CTL_A, KC_Z, COMBO_END};
const uint16_t PROGMEM w_r_lbrc[] = { KC_W, ALT_R, COMBO_END};
const uint16_t PROGMEM r_x_lt[] = { ALT_R, KC_X, COMBO_END};
const uint16_t PROGMEM f_s_rbrc[] = { KC_F, GUI_S, COMBO_END};
const uint16_t PROGMEM s_c_gt[] = { GUI_S, KC_C, COMBO_END};
const uint16_t PROGMEM p_t_esc[] = { KC_P, SHFT_T, COMBO_END};
const uint16_t PROGMEM t_d_grv[] = { SHFT_T, KC_D, COMBO_END};
const uint16_t PROGMEM b_g_exlm[] = { KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM g_v_at[] = { KC_G, KC_V, COMBO_END};
const uint16_t PROGMEM j_m_ampr[] = { KC_J, KC_M, COMBO_END};
const uint16_t PROGMEM m_k_pipe[] = { KC_M, KC_K, COMBO_END};
const uint16_t PROGMEM l_n_bspc[] = { KC_L, SFT_N, COMBO_END};
const uint16_t PROGMEM n_h_del[] = { SFT_N, KC_H, COMBO_END};
const uint16_t PROGMEM u_e_lprn[] = { KC_U, GUI_E, COMBO_END};
const uint16_t PROGMEM e_comm_lcbr[] = { GUI_E, KC_COMM, COMBO_END};
const uint16_t PROGMEM y_i_rprn[] = { KC_Y, ALT_I, COMBO_END};
const uint16_t PROGMEM i_dot_rcbr[] = { ALT_I, KC_DOT, COMBO_END};
const uint16_t PROGMEM scln_o_circ[] = { KC_SCLN, CTL_O, COMBO_END};
const uint16_t PROGMEM o_slsh_hash[] = { CTL_O, KC_SLSH, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [Q_A_DLR] = COMBO(q_a_dlr, KC_DLR),
  [A_Z_PERC] = COMBO(a_z_perc, KC_PERC),
  [W_R_LBRC] = COMBO(w_r_lbrc, KC_LBRC),
  [R_X_LT] = COMBO(r_x_lt, KC_LT),
  [F_S_RBRC] = COMBO(f_s_rbrc, KC_RBRC),
  [S_C_GT] = COMBO(s_c_gt, KC_GT),
  [P_T_ESC] = COMBO(p_t_esc, KC_ESC),
  [T_D_GRV] = COMBO(t_d_grv, KC_GRV),
  [B_G_EXLM] = COMBO(b_g_exlm, KC_EXLM),
  [G_V_AT] = COMBO(g_v_at, KC_AT),
  [J_M_AMPR] = COMBO(j_m_ampr, KC_AMPR),
  [M_K_PIPE] = COMBO(m_k_pipe, KC_PIPE),
  [L_N_BSPC] = COMBO(l_n_bspc, KC_BSPC),
  [N_H_DEL] = COMBO(n_h_del, KC_DEL),
  [U_E_LPRN] = COMBO(u_e_lprn, KC_LPRN),
  [E_COMM_LCBR] = COMBO(e_comm_lcbr, KC_LCBR),
  [Y_I_RPRN] = COMBO(y_i_rprn, KC_RPRN),
  [I_DOT_RCBR] = COMBO(i_dot_rcbr, KC_RCBR),
  [SCLN_O_CIRC] = COMBO(scln_o_circ, KC_CIRC),
  [O_SLSH_HASH] = COMBO(o_slsh_hash, KC_HASH),
  
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     /* base
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ F │ P │ B │       │ J │ L │ U │ Y │ ; │Bsp│
      * ├───┼─$─┼─[─┼─]─┼esc┼─!─┤       ├─&─┼─⌫─┼─(─┼─)─┼─^─┼───┤
      * │Ctl│ A │ R │ S │ T │ G │       │ H │ N │ E │ I │ O │ ' │
      * ├───┼─%─┼─<─┼─>─┼[`]┼─@─┤       ├─|─┼─⌦─┼─{─┼─}─┼─#─┼───┤
      * │Sft│ Z │ X │ C │ D │ V │       │ k │ H │ , │ . │ / │ - │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤L1 ├───┐   ┌───┤L2 ├───┘
      *                   └───┤Spc│   │Ent├───┘
      *                       └───┘   └───┘
      */
 [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,    KC_Q,    KC_W,   KC_F,    KC_P,    KC_B,                        KC_J,    KC_L,    KC_U,   KC_Y,   KC_SCLN,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,  CTL_A,   ALT_R,   GUI_S,   SHFT_T,   KC_G,                        KC_M,   SFT_N,    GUI_E,   ALT_I,  CTL_O,   KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,   KC_H,    KC_COMM,  KC_DOT, KC_SLSH, KC_MINS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCMD,   MO(1),  KC_SPC,   KC_ENT, MO(2), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
       /* layer1
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ESC│   │   │⎈up│   │   │       │ 7 │ 8 │ 9 │ 0 │pg^│pgd│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│CAP│⎈lf│⎈dw│⎈Ri│⌘` │       │ 4 │ 5 │ 6 │hom│up │end│
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
      KC_ESC,  XXXXXXX, XXXXXXX, LCTL(KC_UP), XXXXXXX, XXXXXXX,                         KC_7,    KC_8,    KC_9,    KC_0, KC_PGUP, KC_PGDN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_CAPS, LCTL(KC_LEFT), LCTL(KC_DOWN), LCTL(KC_RIGHT), LGUI(KC_GRV),  KC_4,    KC_5,    KC_6, KC_HOME,   KC_UP,  KC_END,
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
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX , XXXXXXX,   TO(4),                      KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX,
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
      KC_TAB,  KC_4,   KC_Q,      KC_W,    KC_E,    KC_R,                        KC_F,    KC_G,    KC_C,    KC_R,    KC_L, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_Y,    KC_A,    KC_S,    KC_D,    KC_F,                          KC_D,    KC_H,    KC_T,     KC_N,   KC_S, KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_COMM,  KC_Q,    KC_G,    KC_C,    KC_X,                        KC_B,    KC_M,    KC_W,     KC_V,   KC_Z, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_V,  KC_SPC,  KC_SPC,   KC_ENT, KC_RALT, TO(0)
                                      //`--------------------------'  `--------------------------'

  ),
 
};

