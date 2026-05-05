#include "binary_search.h"


const int *binary_search(int value, const int *arr, size_t length){
    if (!arr || length == 0)
        return NULL;
    const int *right = arr + length;
    const int *left = arr;
    while (left <= right){
        arr = left + (right - left) / 2;
        if (*arr == value)
            return arr;
        if (*arr > value){
            right = arr-1;
        }
        else{
            left = arr+1;
        }
    }
    return NULL;
}
