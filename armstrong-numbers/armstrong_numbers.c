#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int candidate){
    if (candidate < 0)
        return false;
    int len = (int)log10(candidate) + 1;
    int res = 0;
    int d_candidate = candidate;
    for (int i = 0; i < len; i++){
        int remainder = d_candidate % 10;
        res += pow(remainder, len);
        d_candidate /= 10;
    }
    bool condition = candidate == res;
    return condition;
}
