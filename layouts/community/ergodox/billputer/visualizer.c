#include "simple_visualizer.h"
#include "util.h"

static void get_visualizer_layer_and_color(visualizer_state_t* state) {
  uint8_t layer = biton32(state->status.layer);

  switch (layer) {
    case 1:
      // #8EEBC9 / hsv(43.91%, 39.57%, 92.16%)
      state->layer_text       = "billboard - symbol";
      state->target_lcd_color = LCD_COLOR(112, 101, 189);
      break;
    case 2:
      // #93D2F4 / hsv(55.84%, 39.75%, 95.69%)
      state->layer_text       = "billboard - mouse";
      state->target_lcd_color = LCD_COLOR(143, 102, 245);
      break;
    default:
      // TODO: determine proper hex code for this color
      state->layer_text       = "billboard";
      state->target_lcd_color = LCD_COLOR(192, 0xFF, 117);
      break;
  }
}
