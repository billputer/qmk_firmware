#include QMK_KEYBOARD_H
#include "version.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Layer 0: Default
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `    |   1  |   2  |   3  |   4  |   5  | ESC  |           | P/P  |   6  |   7  |   8  |   9  |   0  | Bspace |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  |OSL(  |           |TG(L1)|   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|  L1) |           |      |------+------+------+------+------+--------|
 * |  LCtrl |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  | ;|L1 |   '    |
 * |--------+------+------+------+------+------| Enter|           | Del  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   Up |   /    |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | LWin | Mute |  VDn |  VUp |Space |                                       | RAlt | RCtrl| Left | Down | Right |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        | Home | End |        |  [   |   ]    |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | PgUp |       |  =   |        |      |
 *                                 | LAlt |Bspace|------|       |------|  Enter |Space |
 *                                 |      |      | PgDn |       |  -   |        |      |
 *                                 `--------------------'       `----------------------'
 */
[0] = LAYOUT_ergodox(
  // left hand
  KC_GRAVE,       KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_ESCAPE,
  KC_TAB,         KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   OSL(1),
  KC_LCTRL,       KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
  KC_LSHIFT,      KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   KC_ENTER,
  KC_LGUI,        KC_MUTE,     KC_VOLD,KC_VOLU, KC_SPACE,
                                                KC_HOME, KC_END,
                                                         KC_PGUP,
                                       KC_LALT,KC_BSPACE,KC_PGDOWN,
  // right hand
  KC_MPLY,     KC_6,   KC_7,    KC_8,     KC_9,    KC_0,     KC_BSPACE,
  TG(1),       KC_Y,   KC_U,    KC_I,     KC_O,    KC_P,     KC_BSLS,
               KC_H,   KC_J,    KC_K,     KC_L,    LT(1,KC_SCLN),  KC_QUOT,
  KC_DELETE,   KC_N,   KC_M,    KC_COMM,  KC_DOT,  KC_UP,    KC_SLASH,
                       KC_RALT, KC_RCTRL, KC_LEFT, KC_DOWN,  KC_RIGHT,
  KC_LBRACKET, KC_RBRACKET,
  KC_EQUAL,
  KC_MINUS, KC_ENTER, KC_SPACE
),
/* Layer 1: Symbols
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |  F11 |  F12 |  F13 |  F14 |  F15 |      |           | TG(2)|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |PrevT |      |NextT |      |      |------|           |------| Left | Down |  Up  | Right|      |        |
 * |--------+------+------+------+------+------|      |           |INSERT|------+------+------+------+------+--------|
 * | DEBUG  |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | RESET|      |      |      |      |                                       |      |      |      |      |       |
 *   `----------------------------------'                                       `-----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |BL_TOG|       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |BL_INC|       |      |      |      |
 *                                 |      |      |------|       |------|      |    |
 *                                 |      |      |BL_DEC|       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[1] = LAYOUT_ergodox(
  // left hand
  KC_TRNS,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_TRNS,
  KC_TRNS,  KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_TRNS,
  KC_TRNS,  KC_MPRV,KC_TRNS,KC_MNXT,KC_TRNS,KC_TRNS,
  DEBUG,    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
  RESET,    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                 KC_TRNS,BL_TOGG,
                                         BL_INC,
                         KC_TRNS,KC_TRNS,BL_DEC,
  // right hand
  KC_TRNS,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
  TG(2),    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_TRNS, KC_TRNS,
  KC_INS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS,  KC_TRNS,
  KC_TRNS,
  KC_TRNS,  KC_KP_ENTER, KC_TRNS
),
/* Layer 2: Mouse
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |     |       |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |TO(0) |WHL_UP|      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|M_LEFT|M_DOWN| M_UP |M_RGHT|      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |WHL_DWN|     |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |M_BTN1|M_BTN2|      |      |       |
 *   `----------------------------------'                                       `-----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[2] = LAYOUT_ergodox(
  // left hand
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                             KC_TRNS, KC_TRNS,
                                      KC_TRNS,
                    KC_TRNS, KC_TRNS, KC_TRNS,
  // right hand
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  TO(0),   KC_MS_WH_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
           KC_MS_LEFT,KC_MS_DOWN,KC_MS_UP,KC_MS_RIGHT,KC_TRNS,KC_TRNS,
  KC_TRNS, KC_MS_WH_DOWN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                    KC_MS_BTN1, KC_MS_BTN2, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS,
  KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS
),
};

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 0:
        // no lights on default layer
        break;
      case 1:
        ergodox_right_led_2_on();
        ergodox_right_led_2_set(LED_BRIGHTNESS_LO);
        break;
      case 2:
        ergodox_right_led_3_on();
        ergodox_right_led_3_set(LED_BRIGHTNESS_LO);
        break;
      default:
        break;
    }
    return state;

};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}
