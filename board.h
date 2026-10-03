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

#endif
