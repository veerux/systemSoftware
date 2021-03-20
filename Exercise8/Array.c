/*
 * File:   		Array.c
 * Author:		Veera Määttänen
 * Description:	Creating and printing an array.
*               Function for reading arrays and allocating memory.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Array.h"
#include "Calculation.h"

#define SIZE 50

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

int fileArray(void) {
  FILE *filePointer = NULL;
  int *newArray = NULL;
  newArray = (int*) malloc(SIZE * sizeof(int));
  if (newArray == NULL) {
    printf("Dynamic memory allocation did not succeed.\n");
    return 0;
  }

  filePointer = fopen("tess.txt", "r");
  if (filePointer == NULL) {
    printf("Error: Couldn't open the file.\n");
    return 0;
  }

  int size = 0;
  while (fscanf(filePointer, "%i", &newArray[size]) != EOF) {
    size++;
  }
  printf("\n");
  fclose(filePointer);

  if (size < 5) {
    printf("Error: The file must have at least 5 integers.\n");
  }
  else {
    printArray(newArray,size);
    printf("%i\n", calculation(newArray,size));
  }
  free(newArray);
  return 0;
}
