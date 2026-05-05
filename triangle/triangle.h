#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <stdbool.h>

typedef struct {
   double a;
   double b;
   double c;
} triangle_t;

bool is_scalene(triangle_t sides);
bool is_equilateral(triangle_t sides);
bool is_isosceles(triangle_t sides);

static inline bool is_exist(triangle_t sides){
    double a = sides.a;
    double b = sides.b;
    double c = sides.c;
    return (a > 0 && b > 0 && c > 0 && a + b >= c && b + c >= a && c + a >= b);
}

static inline bool is_isosceles_real(triangle_t sides){
    return sides.a == sides.b || sides.b == sides.c
      || sides.c == sides.a;
}

#endif
