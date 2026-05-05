#include "pangram.h"

bool is_pangram(const char *sentence){
    if (sentence == NULL)
        return false;
    
    unsigned int res = 0;

    while (*sentence != '\0'){
        unsigned char c = (*sentence++ | 0x20) - 'a';
        if (c > 25)
            continue;

        res |= (1u << c);
    }

    if (res == ((1u << 26) - 1))
        return true;
    return false;
}
