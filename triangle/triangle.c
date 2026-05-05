#include "triangle.h"

bool is_equilateral(triangle_t sides){
    if (sides.a == sides.b && sides.a == sides.c && sides.b == sides.c && is_exist(sides))
        return true;
    return false;
}

bool is_isosceles(const triangle_t sides) {
    return is_exist(sides) &&
           is_isosceles_real(sides);
}

bool is_scalene(triangle_t sides) {
  return is_exist(sides) &&  
         !is_isosceles_real(sides);
}
