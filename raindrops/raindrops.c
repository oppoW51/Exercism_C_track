#include "raindrops.h"

void convert(char result[], int drops){
    char *p = result;
    if (drops % 3 == 0){
        *p++ = 'P';
        *p++ = 'l';
        *p++ = 'i';
        *p++ = 'n';
        *p++ = 'g';
    }
    if (drops % 5 == 0){
        *p++ = 'P';
        *p++ = 'l';
        *p++ = 'a';
        *p++ = 'n';
        *p++ = 'g';
    }
    if (drops % 7 == 0){
        *p++ = 'P';
        *p++ = 'l';
        *p++ = 'o';
        *p++ = 'n';
        *p++ = 'g';
    }

    if (p == result){
    int len = 0;
    char buff[10];
    while (drops > 0){
        buff[len] = drops % 10;
        drops /= 10;
        len++;
    } 
    for (int i = len - 1; i >= 0; i--){
        *p++ = '0' + buff[i];
    }
    *p++ = '\0';
    }
}
