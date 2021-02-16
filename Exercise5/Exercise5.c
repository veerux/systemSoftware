/*
Exercise 5, task 3
Description: Program takes an integer as a
            command line argument, prints it out and tests
            if it's a prime number. 
Author:     Veera Määttänen
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int check(char *input);
int isPrime(int input);

int main(int argc , char *argv[]) {
  if (argc == 2 && check(argv[1])) {
    printf("%s\n", argv[1]);

    if (atoi(argv[1]) == 1 || atoi(argv[1]) == 0) {
      printf("The number is not prime or composite number.\n");
    }
    else if (isPrime(atoi(argv[1]))) {
      printf("The number is prime number!\n");
    }
    else {
      printf("The number is not prime number.\n");
    }
  }
  else if (atoi(argv[1]) < 0 ) {
    printf("Please give a positive integer.\n");
  }
  else {
    printf("Please write: ./Exercise5 and an integer between 0 and 100000\n");
  }
  return 0;
}

int check(char *input) {
  for (int i = 0; i < (int)strlen(input); i++) {
    if (isdigit(input[i])) {
      // is digit
    }
    else {
      return 0;
    }
  }
  int arg = atoi(input);
  if (arg >= 0 && arg <= 100000) {
    return 1;
  }
  else {
    return 0;
  }
}

int isPrime(int input) {
  for (int i = 2; i < input; i++) {
    if (input % i == 0) {
      return 0;
    }
  }
  return 1;
}
