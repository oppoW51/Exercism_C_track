#include "binary.h"

int convert(const char *input){
    if (!*input)
        return INVALID;
    
    int result = 0; 
    for (; *input; input++){
        
        switch (*input){
            case '0':
                result *= 2;
                break;
            case '1':
                result = result * 2 + 1;
                break;
            default:
                return INVALID;
                break;
        }
    }
    return result;
}   
