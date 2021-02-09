/*
Title: Exercise 4
Description: Different sum calculations for user inputs.
Author: Veera Määttänen
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void negativeNums(int input, int *negative);
void sumOfNums(int input, int *sum);
void sumOfPositive(int input, int *sum);
int randomNum(int first, int second);
void grading(int exerPoints, int examPoints);

int main() {
  int input;
  int input2;
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
  //print the results
  // printf("You gave %i negative integer(s).\n", negativeInts);
  //printf("The sum of the numbers is: %i\n", numberSum);
  //printf("The sum of positive integers that are divisible by three is: %i\n", positiveSum);
  printf("Give the first integer: ");
  scanf("%d", &input);
  printf("Give the second integer: ");
  scanf("%d", &input2);
  printf("A random number %i has been created based on the range you gave. \n", randomNum(input, input2));
  int exercise = randomNum(0, 100);
  int exam = randomNum(0, 100);
  grading(exercise, exam);
  }


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

int randomNum(int first, int second) {
  if (first > second) {
    srand(time(0));
    int random = rand() % (second - first) + second;
    return random;
  }
  else if (first < second) {
    srand(time(0));
    int random = rand() % (first - second) + first;
    return random;
  }
  else {
    return first;
  }
}

void grading(int exerPoints, int examPoints) {
  int sum = exerPoints + examPoints;
  if (exerPoints < 50 || examPoints < 50) {
     printf("You failed the course because you didn't meet the minimum 50 points on each exercises and exam. "
            "You got %i points in total.\n", sum);
  }
  else if (sum < 120) {
    printf("You got grade 1 with %i points.\n", sum);
  }
  else if (sum < 140) {
    printf("You got grade 2 with %i points.\n", sum);
  }
  else if (sum < 160) {
    printf("You got grade 3 with %i points.\n", sum);
  }
  else if (sum < 180) {
    printf("You got grade 4 with %i points.\n", sum);
  }
  else if (sum >= 180) {
    printf("Congratulations! You got grade 5 with %i points.\n", sum);
  }
  return;
}
