/*
File:         Exercise3.c
Author:       Veera Määttänen
Description:  Sum of numbers and sum of even numbers in given range.
              Creating a random int 2-20 and multiplying itself.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int sumOfNumbers (int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i;
  }
  return sum;
}

int sumOfEven (int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      sum = sum + i;
    }
  }
  return sum;
}

int randomInt(int max, int min)
{
  srand(time(NULL)); // program will pick a new integer each time
  int r = rand() % (max - min) + min;
  return r;
}

int multiplyInt(int i)
{
  // Maximum value for int is calculated: pow(128,4) * 8 -1
  // because the calculation causes overflow, the number is hardcoded.
  // To prevent large numbers multiplying and causing overflow
  // the program takes a squareroot and compares it to the variable i

  printf("The maximum value for integer is 2147483647\n");
  double maxValue = sqrt((double)2147483647);

  int squareroot = maxValue;
  while (squareroot > i)
  {
    i = i*i;
  }
  return i;
}

bool fibonacciCalc(int random)
{
  int first = 0;
  int second = 1;
  int result = 0;

  while (first + second < 100000)
  {
    if (random == result)
    {
      return 1;
    }
    result = first + second;
    first = second;
    second = result;
  }
  return 0;
}



int main()
{
  //printf("Sum of numbers 1-100 is %i\n", sumOfNumbers(100));
  //printf("Sum of even numbers between 1-1000 is %i\n", sumOfEven(1000));
  //printf("The size of an integer in bytes is %lu\n", sizeof(int));
  int randomNumber = randomInt(20,0);
  printf("Random number generated is %i\n", randomNumber);
  //printf("The multiplication stopped on number %i\n", multiplyInt(randomNumber));

  if (fibonacciCalc(randomNumber))
  {
    printf("The number %i belongs to Fibonacci series!\n", randomNumber);
  }
  else
  {
    printf("The number %i doesn't belong to Fibonacci series.\n", randomNumber);
  }
}
