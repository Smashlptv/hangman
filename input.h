#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED
#include "game_state.h"

struct guess input_letter(struct guess this_guess);

int check_input(char input);

#endif // INPUT_H_INCLUDED
