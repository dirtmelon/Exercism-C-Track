#include "resistor_color_duo.h"

uint16_t color_code(const resistor_band_t * resistor_band_colors)
{
    return (*resistor_band_colors) * 10 + *(resistor_band_colors + 1);
}
