/*
 * main.c
 * chess
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
 * print_usage
 * Tell the user how to start the program.
 *
 * program_name - usually argument_list[0]
 */
static void print_usage(const char *program_name)
{
    printf("usage: %s\n", program_name);
}

/*
 * main
 * Read optional flags, then start the game.
 *
 * argument_count - number of command-line words
 * argument_list  - those words; argument_list[0] is the program name
 * return 0 after a normal game, 1 if the flags were wrong
 */
int main(int argument_count, char *argument_list[])
{
    if (argument_count > 1 && strcmp(argument_list[1], "-h") == 0) {
        print_usage(argument_list[0]);
        return 0;
    }
    printf("chess\n");
    print_usage(argument_list[0]);
    return 0;
}
