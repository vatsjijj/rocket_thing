exec = rs
CC = gcc
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wpedantic -O2 -march=native
LDFLAGS = -flto

$(exec): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(exec) $(LDFLAGS)

%.o: %.c include/%.h
	$(CC) -c $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	clear
	rm src/*.o