#include QMK_KEYBOARD_H
#include "features/caps_word.h"

// Layers
enum {
  BASE,
  NAV,
  MOUSE,
  MEDIA,
  NUM,
  SYM,
  FUN,
};

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used
#define U_RDO SCMD(KC_Z)
#define U_PST LCMD(KC_V)
#define U_CPY LCMD(KC_C)
#define U_CUT LCMD(KC_X)
#define U_UND LCMD(KC_Z)

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_caps_word(keycode, record)) { return false; }
  // macros here

  return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_split_3x6_3(
    KC_GRV, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, KC_BSLS,
    KC_LBRC, LCTL_T(KC_A), LALT_T(KC_R), LGUI_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, RSFT_T(KC_N), RGUI_T(KC_E), LALT_T(KC_I), RCTL_T(KC_O), KC_EQL,
    KC_RBRC, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_SCLN,
    LT(FUN, KC_ESC), LT(NUM, KC_SPC), LT(SYM, KC_TAB), LT(MOUSE, KC_ENT), LT(NAV, KC_BSPC), LT(MEDIA, KC_DEL)
  ),

  [NAV] = LAYOUT_split_3x6_3(
    U_NU, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_INS, U_NA, U_NA, U_NA, U_NA, RESET, U_NU,
    U_NU, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_CAPS, U_NA, KC_RSFT, KC_LGUI, KC_LALT, KC_LCTL, U_NU,
    U_NU, U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_NA, U_NA, U_NA, KC_ALGR, U_NA, U_NU,
    KC_ESC, KC_SPC, KC_TAB, U_NA, U_NA, U_NA
  ),

  [MOUSE] = LAYOUT_split_3x6_3(
    U_NU, KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, U_NU, U_NA, U_NA, U_NA, U_NA, RESET, U_NU,
    U_NU, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, U_NU, U_NA, KC_RSFT, KC_LGUI, KC_LALT, KC_LCTL, U_NU,
    U_NU, U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_NA, U_NA, U_NA, KC_ALGR, U_NA, U_NU,
    KC_BTN3, KC_BTN1, KC_BTN2, U_NA, U_NA, U_NA
  ),

  [MEDIA] = LAYOUT_split_3x6_3(
    U_NU, RGB_SAI, RGB_HUI, KC_VOLU, RGB_MOD, RGB_TOG, U_NA, U_NA, U_NA, U_NA, RESET, U_NU,
    U_NU, RGB_VAI, KC_MPRV, KC_VOLD, KC_MNXT, OUT_AUTO, U_NA, KC_RSFT, KC_LGUI, KC_LALT, KC_LCTL, U_NU,
    U_NU, U_NU, U_NU, U_NU, U_NU, U_NU, U_NA, U_NA, U_NA, KC_ALGR, U_NA, U_NU,
    KC_MUTE, KC_MPLY, KC_MSTP, U_NA, U_NA, U_NA
  ),

  [NUM] = LAYOUT_split_3x6_3(
    U_NU, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, U_NU,
    U_NU, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, U_NA, KC_EQL, KC_4, KC_5, KC_6, KC_SCLN, U_NU,
    U_NU, U_NA, KC_ALGR, U_NA, U_NA, U_NA, KC_BSLS, KC_1, KC_2, KC_3, KC_GRV, U_NU,
    U_NA, U_NA, U_NA, KC_MINS, KC_DOT, KC_0
  ),

  [SYM] = LAYOUT_split_3x6_3(
    U_NU, RESET, U_NA, U_NA, U_NA, U_NA, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NU,
    U_NU, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, U_NA, KC_PLUS, KC_DLR, KC_PERC, KC_CIRC, KC_COLN, U_NU,
    U_NU, U_NA, KC_ALGR, U_NA, U_NA, U_NA, KC_PIPE, KC_EXLM, KC_AT, KC_HASH, KC_TILD, U_NU,
    U_NA, U_NA, U_NA, KC_UNDS, KC_LPRN, KC_RPRN
  ),

  [FUN] = LAYOUT_split_3x6_3(
    U_NU, RESET, U_NA, U_NA, U_NA, U_NA, KC_PSCR, KC_F7, KC_F8, KC_F9, KC_F12, U_NU,
    U_NU, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, U_NA, KC_SLCK, KC_F4, KC_F5, KC_F6, KC_F11, U_NU,
    U_NU, U_NA, KC_ALGR, U_NA, U_NA, U_NA, KC_PAUS, KC_F1, KC_F2, KC_F3, KC_F10, U_NU,
    U_NA, U_NA, U_NA, KC_ENT, KC_BSPC, KC_APP
  )
};
