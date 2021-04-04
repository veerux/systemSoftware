CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: Main

Main: Main.o Cipher.o
	$(CC) $(CFLAGS) -o Main Main.o Cipher.o

Main.o: Main.c Cipher.h
	$(CC) $(CFLAGS) -c Main.c

Cipher.o: Cipher.c Cipher.h
	$(CC) $(CFLAGS) -c Cipher.c

clean:
	$(RM) Main *.o *~
