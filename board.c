/*
 * board.c
 * CS 375 — chess
 *
 * Author: Kevin Tieu
 *
 * Builds the 8x8 array, prints it, and turns a1-style names
 * into file and rank numbers.
 *
 * Compiled with the rest of the chess sources through make.
 */

#include "board.h"

#include <stdio.h>
#include <string.h>

/*
 * clear_board
 * Fill every square with '.' and reset the extra fields that exist
 * on this build of Board.
 *
 * board - the position we are about to use
 */
void clear_board(Board *board)
{
    int rank_index;
    int file_index;

    /* Rank 0 is White's back rank (1). Rank 7 is Black's back rank (8). */
    for (rank_index = 0; rank_index < BOARD_SIZE; rank_index++) {
        for (file_index = 0; file_index < BOARD_SIZE; file_index++) {
            board->squares[rank_index][file_index] = '.';
        }
    }
}
