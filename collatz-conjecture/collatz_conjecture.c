#include "collatz_conjecture.h"


int steps(int start){
    int path = 0;
    if (start <= 0){
        return ERROR_VALUE;
    }else{
        while (start != 1){
            path++;
            if (start % 2 == 0){
                start /= 2;
            }else{
                start = start * 3 + 1;
            }
        }
    }
    return path;
}
