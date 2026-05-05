#include "resistor_color.h"


int color_code(resistor_band_t color){
    return color;
}


const resistor_band_t *colors(void){
    static resistor_band_t colors_table[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
    return colors_table;
}
