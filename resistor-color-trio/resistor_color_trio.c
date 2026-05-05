#include "resistor_color_trio.h"

resistor_value_t color_code(resistor_band_t arr[]){
    resistor_value_t res;
    
    static const unsigned long long pow[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
    unsigned long long value = (arr[0] * 10 + arr[1]) * pow[arr[2]];
    
    if (value == 0){
        res.value = 0;
        res.unit = OHMS;
        return res;
    }

    if (value >= 1000000000){
        res.value = value / 1000000000;
        res.unit = GIGAOHMS;
        return res;
    }
    if (value >= 1000000){
        res.value = value / 1000000;
        res.unit = MEGAOHMS;
        return res;
    }
    if (value >= 1000){
        res.value = value / 1000;
        res.unit = KILOOHMS;
        return res;
    }
    res.value = value;
    res.unit = OHMS;
    return res;
}
