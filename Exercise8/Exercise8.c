/*
 * File:   		Exercise8.c
 * Author:    Veera Määttänen
 * Description: Main function and function calls
              for Finder, Array and Calculation.
 */

#include <stdio.h>
#include <stdlib.h>

#include "Array.h"
#include "Finder.h"
#include "Calculation.h"

#define SIZE 10

int main(void) {
  int *arrPointer = NULL;
  arrPointer = (int*) malloc(SIZE * sizeof(int));
  if (arrPointer == NULL) {
    printf("Dynamic memory allocation did not succeed.\n");
    return 0;
  }

  createArray(arrPointer, SIZE);
  printArray(arrPointer, SIZE);
  valueFinder(arrPointer, SIZE);

  free(arrPointer);
  return 0;
}
