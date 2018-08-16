#include "66.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _WM 0
#define _JP 1
#define _MS 2
#define _FN 3

#define KC_TABM LT(_MS, KC_TAB) // press for tab, hold for mouse layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _WM: Workman layout
   * ,-----------------------------------------------------------.   ,---.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  `| BS|   |INS|
   * |-----------------------------------------------------------|   |---|
   * |Tab  |  Q|  D|  R|  W|  B|  J|  F|  U|  P|  ;|  [|  ]|    \|   |DEL|
   * |-----------------------------------------------------------|   `---'
   * |Cap   |  A|  S|  H|  T|  G|  Y|  N|  E|  O|  I|  '| Enter  |
   * |---------------------------------------------------------------.
   * |Fn |Shft|  Z|  X|  M|  C|  V|  K|  L|  ,|  .|  /| Shft |Fn | UP|
   * |-------------------------------------------------------------------.
   * |Ctl |OS |Alt | MuHK| Space | Space | HK |Alt |Menu|Ctl |LFT|DWN|RIG|
   * `-------------------------------------------------------------------'
   */
[_WM] = LAYOUT(
  KC_GESC, KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,     KC_MINS,  KC_EQL,  KC_GRV,  KC_BSPC,          KC_PGUP,
  KC_TABM, KC_Q,    KC_D,   KC_R,   KC_W,   KC_B,   KC_J,   KC_F,   KC_U,   KC_P,    KC_SCLN,  KC_LBRC,  KC_RBRC, KC_BSLS,                   KC_PGDN,
  KC_BSPC, KC_A,    KC_S,   KC_H,   KC_T,   KC_G,   KC_Y,   KC_N,   KC_E,   KC_O,    KC_I,     KC_QUOT,  KC_NUHS, KC_ENT,
  MO(_FN), KC_LSFT, KC_Z,   KC_X,   KC_M,   KC_C,   KC_V,   KC_K,   KC_L,   KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT, MO(_FN), KC_UP,
  KC_LCTL, KC_LGUI, KC_LALT,KC_MHEN,        KC_SPC,         KC_SPC,         KC_HENK, KC_RALT,  MO(_FN),  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
),

  /* Japanese (QWERTY)
   * ,-----------------------------------------------------------.   ,---.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  `| BS|   |INS|
   * |-----------------------------------------------------------|   |---|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|   |DEL|
   * |-----------------------------------------------------------|   `---'
   * |Cap   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| Enter  |
   * |---------------------------------------------------------------.
   * |Fn |Shft|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Shft |Fn | UP|
   * |-------------------------------------------------------------------.
   * |Ctl |OS |Alt | MuHK| Space | Space | HK |Alt |Menu|Ctl |LFT|DWN|RIG|
   * `-------------------------------------------------------------------'
   */
[_JP] = LAYOUT(
  KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7, KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV, KC_BSPC,       KC_INS,
  KC_TABM, KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U, KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,               KC_DEL,
  KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,
  MO(_FN), KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N, KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(_FN), KC_UP,
  KC_LCTL, KC_LGUI, KC_LALT, KC_MHEN,         KC_SPC,         KC_SPC,        KC_HENK, KC_RALT, MO(_FN), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
),

  /* Keymap _MS: Mouse layer
   * ,-----------------------------------------------------------.   ,---.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |-----------------------------------------------------------|   |---|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |   |   |
   * |-----------------------------------------------------------|   `---'
   * |      |   |fst|med|slw|   |lft| up|dwn|rgt|   |   |        |
   * |---------------------------------------------------------------.
   * |    |   |   |   |   |   |   |   |   |   |   |   |      |   |   |
   * |-------------------------------------------------------------------.
   * |    |   |    |     |  lc   |  rc   |    |    |    |    |   |   |   |
   * `-------------------------------------------------------------------'
   */
[_MS] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
  _______, _______, KC_ACL2, KC_ACL1, KC_ACL0, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
  _______, _______, _______, _______,          KC_BTN1,          KC_BTN2,                   _______, _______, _______, _______, _______, _______, _______
),

  /* Keymap _FN: Function Layer
   * ,-----------------------------------------------------------.   ,---.
   * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |Cap|   | V+|
   * |-----------------------------------------------------------|   |---|
   * |     |L-J|   |   |   |   |   |Hom|PDn|PUp|End|   |   |     |   | V-|
   * |-----------------------------------------------------------|   `---'
   * |      |L-W|   |   |   |   |   |LFT|DWN|UP |RIG|   |        |
   * |---------------------------------------------------------------.
   * |    |  `|   |   |   |   |   |   |   |   |   |   |      |   |PUp|
   * |-------------------------------------------------------------------.
   * |    |   |    |     |       |       |    |    |    |    |Hom|PDn|End|
   * `-------------------------------------------------------------------'
   */
[_FN] = LAYOUT(
  KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______, KC_CAPS,          KC_VOLU,
  _______, DF(_JP), _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,   _______,  _______,  _______,                   KC_VOLD,
  KC_DEL,  DF(_WM), _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  _______,  _______,  _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,          KC_PGUP,
  _______, _______, _______, _______,          _______,          _______,                   _______,  _______,  _______,  _______, KC_HOME, KC_PGDN, KC_END
),

};
