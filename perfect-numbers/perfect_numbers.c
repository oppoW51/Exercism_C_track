#include "perfect_numbers.h"
#include <math.h>

kind classify_number(int number){
    if (number <= 0)
        return ERROR;
    if (number == 1)
        return DEFICIENT_NUMBER;
    int sum = 1;
    int sqrt_n = (int)sqrt(number);
    
    if (sqrt_n * sqrt_n == number){
        sum += sqrt_n;
        sqrt_n--;
    }

    for (int i = 2; i <= sqrt_n; i++){
        if (number % i == 0)
            sum = sum + i + (number / i);
    }
    if (sum == number)
        return PERFECT_NUMBER;
    if (sum < number)
        return DEFICIENT_NUMBER;
    if (sum > number)
        return ABUNDANT_NUMBER;
    return ERROR;
}
