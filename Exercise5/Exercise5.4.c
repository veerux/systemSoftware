/*
Exercise 5, task 4
Description: Creates an array of randomly generated numbers.
Author:     Veera Määttänen
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arrPrint(int arr[], int lenght);
int arrCreate(int arr[]);
int arrArrange(int arr[]);

int main() {
  int array[10];
  arrCreate(array);
  arrPrint(array, 10);
  arrArrange(array);
  arrPrint(array, 10);
  return 0;
}

void arrPrint(int arr[], int lenght) {
  for (int i = 0; i < lenght; i++) {
    printf("%i ", arr[i]);
  }
  printf("\n");
}

int arrCreate(int arr[]) {
  srand(time(0));
  for (int i = 0; i < 10; i++) {
    arr[i] = rand() % 1000001;
  }
  return * arr;
}

int arrArrange(int arr[]) {
  for (int i = 0; i < 10; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (arr[i] < arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return * arr;
}
