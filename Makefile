CC=gcc
OPTIONS=-Wall -Wextra

.PHONY: clean

main: main.o
	$(CC) main.o -o main

main.o: main.c
	$(CC) $(OPTIONS) -c main.c

clean:
	rm -f *.o
	rm -f main
