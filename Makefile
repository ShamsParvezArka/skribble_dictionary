CC = gcc
CFLAGS = -ggdb -Wall -Wextra

output: main.c
	$(CC) -o a.out main.c $(CFLAGS)