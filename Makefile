# chess
# Author: Kevin Tieu
#
# Build the program in this folder.
#   make
#   ./chess
#
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g 
BIN = chess

all: $(BIN)

$(BIN): main.c
	$(CC) $(CFLAGS) -o $(BIN) main.c

clean:
	rm -f $(BIN)

