#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
  // TASK 3

  int first;
  int second;
  printf("Give two integers:\n");
  scanf("%i", &first);
  scanf("%i", &second);

  if (first > second)
  {
    printf("%i is bigger than %i.\n", first, second);
  }
  if (first == second)
  {
    printf("%i and %i are equal.\n", first, second);
  }
  if (first < second)
  {
    printf("%i is smaller than %i.\n", first, second);
  }

  int sum = first + second;
  printf("The sum is %i.\n", sum);

  float average = sum / (float)2;
  printf("The average is %.2f\n", average);

  int difference = abs(first - second);
  printf("The difference is %i\n", difference);

  float division;
  if (second != 0)
  {
    division = first / (float)second;
    printf("The division is %.2f\n", division);
  }

  int powerOf = pow(first,second);
  printf("%i to the power of %i is %i\n", first, second, powerOf);


  // TASK 4

  srand(time(0));

  int number = rand() % 100 + 1;
  printf("%i \n", number);

  if (number % 2 == 0)
  {
    printf("This number is even.\n");
  }
  else
  {
    printf("This number is odd.\n");
  }

  if (number % 3 == 0 && number % 8 == 0)
  {
    printf("%i is divisible by both 3 and 8!\n", number);
  }


  // TASK 5

  int array[10] = {3, 14, 25, 36, 47, 58, 69, 71, 82, 93};

  //printing the list
  for(int i = 0; i < 10; i++)
      printf("%d ", array[i]);
  printf("\n");

  //printing the list from end to beginning
  for(int i = 9; i >= 0; i--)
      printf("%d ", array[i]);
  printf("\n");

  //checking if the random number created earlier is in the array
  for(int i = 0; i < 10; i++)
    if (array[i] == number)
      printf("The random number %i is in the array!\n", number);


}
