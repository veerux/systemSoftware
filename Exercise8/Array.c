/*
 * File:   		Array.c
 * Author:		Veera Määttänen
 * Description:	Creating and printing an array.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Array.h"

void createArray(int *array, int size) {
  srand(time(0));
  for (int i = 0; i < size; i++) {
    *(array + i) = rand() % 101;
  }
}

void printArray(int *array, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", *(array + i));
  }
  printf("\n");
}
