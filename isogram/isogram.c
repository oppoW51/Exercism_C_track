#include "isogram.h"


bool is_isogram(const char phrase[]){
    if (!phrase)
        return false;
    unsigned res = 0;
    while (*phrase){
        unsigned char c = (*phrase++ | 0x20) - 'a';
        if (c > 25)
            continue;
       if ((res >> c) & 1){
           return false;
       }
       else{
            res |= (1u << c);
       }
    }
    return true;
}
