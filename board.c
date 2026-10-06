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

/*
 * setup_start_position
 * Put the standard chess pieces on the board.
 * Rank 1 and 2 are White. Rank 7 and 8 are Black.
 *
 * board - filled in with the starting position
 */
void setup_start_position(Board *board)
{
    clear_board(board);
    board->squares[0][0] = 'R';
    board->squares[0][1] = 'N';
    board->squares[0][2] = 'B';
    board->squares[0][3] = 'Q';
    board->squares[0][4] = 'K';
    board->squares[0][5] = 'B';
    board->squares[0][6] = 'N';
    board->squares[0][7] = 'R';
    board->squares[1][0] = 'P';
    board->squares[1][1] = 'P';
    board->squares[1][2] = 'P';
    board->squares[1][3] = 'P';
    board->squares[1][4] = 'P';
    board->squares[1][5] = 'P';
    board->squares[1][6] = 'P';
    board->squares[1][7] = 'P';
    board->squares[6][0] = 'p';
    board->squares[6][1] = 'p';
    board->squares[6][2] = 'p';
    board->squares[6][3] = 'p';
    board->squares[6][4] = 'p';
    board->squares[6][5] = 'p';
    board->squares[6][6] = 'p';
    board->squares[6][7] = 'p';
    board->squares[7][0] = 'r';
    board->squares[7][1] = 'n';
    board->squares[7][2] = 'b';
    board->squares[7][3] = 'q';
    board->squares[7][4] = 'k';
    board->squares[7][5] = 'b';
    board->squares[7][6] = 'n';
    board->squares[7][7] = 'r';
}
