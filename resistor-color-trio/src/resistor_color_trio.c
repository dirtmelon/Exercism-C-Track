#include "resistor_color_trio.h"
#include <math.h>

resistor_value_t color_code(resistor_band_t colors[]) {
    const uint16_t value = colors[0] * 10 + colors[1];
    uint64_t total = (uint64_t)pow(10, colors[2]) * value;
    resistor_unit_t unit = 0;
    while (total / 1000 >= 1) {
        unit += 1;
        total /= 1000;
    }
    return (resistor_value_t){total, unit};
}
