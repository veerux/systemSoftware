CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: Main

Main: Main.o Cipher.o Vote.o
	$(CC) $(CFLAGS) -o Main Main.o Cipher.o Vote.o

Main.o: Main.c Cipher.h Vote.h
	$(CC) $(CFLAGS) -c Main.c

Cipher.o: Cipher.c Cipher.h
	$(CC) $(CFLAGS) -c Cipher.c

Vote.o: Vote.c Vote.h
	$(CC) $(CFLAGS) -c Vote.c

clean:
	$(RM) Main *.o *~
