/*
 * File:   		Calculation.c
 * Author:		Veera Määttänen
 * Description:	To calculate the greatest sum of
 *              five adjacent numbers.
 */

#include <stdio.h>
#include "Calculation.h"

int calculation(int *array, int size) {
  int sum = 0;
  int result = 0;

  for (int i = 0; i < size - 4; i++) {
    for (int j = 0; j < 5; j++) {
      sum += *(array+j);
      printf("%i ", sum);
    }
    printf("\n");
    if (sum > result) {
      result = sum;
    }
    sum = 0;
    array += 1;
  }
  return result;
}
