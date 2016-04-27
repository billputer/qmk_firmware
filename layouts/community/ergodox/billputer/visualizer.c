/*
Note: this is a modified copy of ../default/visualizer.c, originally licensed GPL.
*/

#include "simple_visualizer.h"

// This function should be implemented by the keymap visualizer
// Don't change anything else than state->target_lcd_color and state->layer_text as that's the only thing
// that the simple_visualizer assumes that you are updating
// Also make sure that the buffer passed to state->layer_text remains valid until the previous animation is
// stopped. This can be done by either double buffering it or by using constant strings
static void get_visualizer_layer_and_color(visualizer_state_t* state) {
    if (state->status.layer & 0x2) {
        state->target_lcd_color = LCD_COLOR(236, 219, 95);
        state->layer_text = "billboard - symbol";
    } else {
        state->target_lcd_color = LCD_COLOR(192, 0xFF, 117);
        state->layer_text = "billboard";
    }
}
