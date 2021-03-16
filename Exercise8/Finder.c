/*
 * File:   		Finder.c
 * Author:		Veera Määttänen
 * Description: Asks for input and checks if it's
              on the given list.
 */

#include <stdio.h>
#include "Finder.h"

int* check(int *array, int input, int size);

void valueFinder(int *array, int size) {
  int input;
  printf("Give an integer: ");
  scanf("%i", &input);

  int *value = check(array, input, size);
  if (value == NULL) {
    printf("The integer is not on the list.\n");
  }
  else {
    printf("The integer is on the list. \n");
    printf("Its value is: %i\n", *value);
    printf("And its memory address is: %p\n", value);
  }
}

int* check(int *array, int input, int size) {
  for (int i = 0; i < size; i++) {
    if (*(array + i) == input) {
      return (array + i);
    }
  }
  return NULL;
}
