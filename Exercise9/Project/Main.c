/*
* File:   		Main.c
* Author:    Veera Määttänen
* Description: Main file with function calls.
*/

#include <stdio.h>
#include <stdlib.h>
#include "Cipher.h"

int main() {
  int input;
  printf("Give a key: ");
  scanf("%i", &input);
  toCipher(input);

}
