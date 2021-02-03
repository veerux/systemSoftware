/*
Title: Exercise 4
Description: Different sum calculations for user inputs.
Author: Veera Määttänen
*/

#include <stdio.h>

void negativeNums(int input, int *negative);
void sumOfNums(int input, int *sum);
void sumOfPositive(int input, int *sum);

int main() {
  int input;
  int condition = 0;
  int negativeInts = 0;
  int numberSum = 0;
  int positiveSum = 0;

  while (condition == 0) {
    printf("Give an integer: ");
    scanf("%d", &input);
    if (input == 0) {
      condition ++;
    }
    negativeNums(input, &negativeInts);
    sumOfNums(input, &numberSum);
    sumOfPositive(input, &positiveSum);
  }
  // print the results
  printf("You gave %i negative integer(s).\n", negativeInts);
  printf("The sum of the numbers is: %i\n", numberSum);
  printf("The sum of positive integers that are divisible by three is: %i\n", positiveSum);
}

//checking for negative integers
void negativeNums(int input, int *negative) {
  if (input < 0) {
    *negative = *negative + 1;
  }
  return;
}

//counting the sum of the numbers user gave
void sumOfNums(int input, int *sum) {
  *sum += input;
  return;
}

//checking positive integers divisible by three and adding them to the sum
void sumOfPositive(int input, int *sum) {
  if (input % 3 == 0 && input > 0) {
    *sum += input;
  }
  return;
}
