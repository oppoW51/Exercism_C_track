#include "grains.h"
#include <stdint.h>


uint64_t square(uint8_t index){
    uint64_t sum = 0;
    for (uint8_t i = 1; i <= index; i++){
        if (i != 1){
            sum = sum * 2;
        }else{
            sum = 1;
        }
    }
    return sum;
}


uint64_t total(void){
    return UINT64_MAX;
}