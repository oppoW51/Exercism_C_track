#include "two_fer.h"
#include <stdio.h>

void two_fer(char *buffer, const char *name) {
    if (name == NULL) {
        snprintf(buffer, BUFSIZ, "One for you, one for me.");
    } else {
        snprintf(buffer, BUFSIZ, "One for %s, one for me.", name);
    }
}

