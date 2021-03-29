CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: Exercise9

Exercise9: Exercise9.o Pet.o
	$(CC) $(CFLAGS) -o Exercise9 Exercise9.o Pet.o

Exercise9.o: Exercise9.c Pet.h
	$(CC) $(CFLAGS) -c Exercise9.c

Array.o: Pet.c Pet.h
	$(CC) $(CFLAGS) -c Pet.c

clean:
	$(RM) Exercise9 *.o *~
