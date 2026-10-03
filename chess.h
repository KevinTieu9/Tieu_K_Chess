/*
 * chess.h
 * CS 375 — chess
 *
 * Author: Kevin Tieu
 *
 * Shared sizes, piece letters, and the Move / Board types.
 * Every other chess file includes this header.
 *
 */

#ifndef CHESS_H
#define CHESS_H

#define BOARD_SIZE 8           /* files and ranks on the board */
#define MOVE_TEXT_SIZE 8        /* e2e4 or e7e8Q plus a null byte */
#define PATH_BUFFER_SIZE 256    /* save / load file names */
#define LINE_BUFFER_SIZE 128    /* one typed command */

typedef struct {
    char squares[BOARD_SIZE][BOARD_SIZE]; /* [rank][file], rank 0 is rank 1 */
} Board;

#endif
