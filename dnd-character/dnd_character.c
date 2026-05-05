#include "dnd_character.h"
#include <stdlib.h>

int ability(void){
    int score = 0;
    int num = 7;
    for (int i = 0; i < 4; i++){
        int random = rand() % 6 + 1;
        score += random;
        if (random < num)
            num = random;
    }
    return score - num;
}


int modifier(int score){
    return score / 2 - 5;
}
dnd_character_t make_dnd_character(void){
    srand(66);
    dnd_character_t new_character;
    new_character.charisma = ability();
    new_character.constitution = ability();
    new_character.dexterity = ability();
    new_character.intelligence = ability();
    new_character.strength = ability();
    new_character.wisdom = ability();
    new_character.hitpoints = 10 + modifier(new_character.constitution);
    return new_character;
}
