/*
Exercise 6, task 3
Description: Creates an array of randomly generated numbers.
             Uses pointers when iterating through.
Author:      Veera Määttänen
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int *arrPointer, int size);
int arrCreate(int *arrPointer, int size);
int arrArrange(int *arrPointer, int size);

int main () {
  int array[10];
  int * arrPointer = NULL;
  arrPointer = &array[0];
  arrCreate(arrPointer, 10);
  printArray(arrPointer, 10);
  arrArrange(arrPointer, 10);
  printArray(arrPointer, 10);
  return 0;
}

void printArray(int *arrPointer, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d\t", *(arrPointer + i));
  }
  printf("\n");
}

int arrCreate(int *arrPointer, int size) {
  srand(time(0));
  for (int i = 0; i < size; i++) {
    *(arrPointer + i) = rand() % 1000001;
  }
  return *arrPointer;
}

int arrArrange(int *arrPointer, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (*(arrPointer + i) < *(arrPointer + j)) {
        int temp = *(arrPointer + i);
        *(arrPointer + i) = *(arrPointer + j);
        *(arrPointer + j) = temp;
      }
    }
  }
  return *arrPointer;
}
