/**
 * A game of hangman
 * Authors: Johannes Busch, Merlin Schmidt
 */

#include <stdio.h>
#include <stdlib.h>
#include "end_game.h"
#include "input_check.h"
#include "timer.h"
#include "game_state.h"
#include "input.h"
#include "game_state.h"

int main()
{
    struct guess this_guess;

    this_guess = new_game();

    start_timer();

    do {
        this_guess = input_letter(this_guess);

        print_result(this_guess);

    }while(check_win_or_lose(this_guess));


    return 0;
}
