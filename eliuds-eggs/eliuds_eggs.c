#include "eliuds_eggs.h"

int egg_count(int egg_code){
    int result = 0;
    while (egg_code > 0){
        if (egg_code % 2 == 1)
            result++;
        egg_code /= 2;
    }
    return result;
}
