#include QMK_KEYBOARD_H

enum layers {_Base, _Fn};

/* Matrix Layout
 *
 * Col:  0   1   2   3   4   5   6   7   8   9   10   11   12   13   14
 * Row0: Esc 1   2   3   4   5   6   7   8   9   0    -    =    Bksp Knob Push
 * Row1: Tab Q   W   E   R   T   Y   U   I   O   P    [    ]	\    Del
 * Row2: Cap A   S   D   F   G   H   J   K   L   ;    '	   ---  Ent  PgUp
 * Row3: LSh Z   X   C   V   B   N   M   ,   .   /    RSh  ---  ↑    PgDn
 * Row4: Ctl Win LAl --- --- Spa --- --- RAl Fn  ---  ←    ---  ↓    →
 *
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_Base] = LAYOUT(

	KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_MUTE,
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,     KC_ENT, KC_PGUP,
       KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_PGDN,
   KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,          KC_RALT, MO(_Fn),   KC_LEFT,         KC_DOWN, KC_RGHT),

    [_Fn] = LAYOUT(
   
	KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_MUTE,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS)};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
	[0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }, 
	[1] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) }, };
#endif
