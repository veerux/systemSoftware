CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: Exercise8

Exercise8: Exercise8.o Array.o Finder.o Calculation.o
	$(CC) $(CFLAGS) -o Exercise8 Exercise8.o Array.o Finder.o Calculation.o-lm

Exercise8.o: Exercise8.c Array.h Finder.h Calculation.h
	$(CC) $(CFLAGS) -c Exercise8.c

Array.o: Array.c Array.h
	$(CC) $(CFLAGS) -c Array.c

Finder.o: Finder.c Finder.h
	$(CC) $(CFLAGS) -c Finder.c

Calculation.o: Calculation.c Calculation.h
	$(CC) $(CFLAGS) -c Calculation.c

clean:
	$(RM) Exercise8 *.o *~
