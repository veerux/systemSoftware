/*
 * File:   		Exercise7.c
 * Author:    Veera Määttänen
 * Description: Main function file for the PrimeFactor and Armstrong functions.
 */

#include <stdio.h>

#include "Armstrong.h"
#include "PrimeFactor.h"

int main() {
  int array[20];
  int *arrPointer = NULL;
  arrPointer = &array[0];

  testArmstrong(arrPointer);

  for (int i = 0; i < 20; i++) {
    printf("%d ", *(arrPointer + i));
  }
  printf("\n");
  return 0;
}
