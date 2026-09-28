/*
 * main.c
 * CS 375 — chess
 *
 * Author: Kevin Tieu
 *
 * Starts the chess program. Reads flags when they exist, then
 * either prints a short line or hands control to play_game.
 *
 * gcc -Wall -Wextra -std=c11 -o chess main.c
 * ./chess
 */

#include "chess.h"

#include <stdio.h>
#include <string.h>

/*
 * main
 * Print the program name. Later days grow this function.
 *
 * return 0 when the program finishes
 */
int main(void)
{
    printf("chess\n");
    return 0;
}
