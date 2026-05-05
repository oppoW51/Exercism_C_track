#include "darts.h"
#include "math.h"
#include "stdint.h"

uint8_t score(coordinate_t position){
    float distance = sqrt(pow(position.x, 2) + pow(position.y, 2));
    if (distance > 10.0){
        return 0;
    }
    if (distance > 5.0){
        return 1;
    }
    if (distance > 1.0){
        return 5;
    }
    return 10;
}
