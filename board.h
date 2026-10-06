/*
 * board.h
 * CS 375 — chess
 *
 * Author: Kevin Tieu
 *
 * Functions that create, print, and name squares on the board.
 *
 */

#ifndef BOARD_H
#define BOARD_H

#include "chess.h"

/*
 * clear_board
 * Fill every square with '.' and reset the extra fields that exist
 * on this build of Board.
 *
 * board - the position we are about to use
 */
void clear_board(Board *board);
/*
 * setup_start_position
 * Put the standard chess pieces on the board.
 * Rank 1 and 2 are White. Rank 7 and 8 are Black.
 *
 * board - filled in with the starting position
 */
void setup_start_position(Board *board);

#endif
