#include "rna_transcription.h"
#include <stdlib.h>

char *to_rna(const char *dna){
    int len = 0;
    for (const char *p = dna; *p != '\0'; p++){
        len++;
    }
    char *rna = malloc(len + 1);
    const char *r = dna;
    char *w = rna;
    while (*r != '\0'){
        if (*r == 'G')
            *w = 'C';
        if (*r == 'C')
            *w = 'G';
        if (*r == 'T')
            *w = 'A';
        if (*r == 'A')
            *w = 'U';
        r++;
        w++;
    }
    *w = '\0';
    return rna;
}
