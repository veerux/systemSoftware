#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
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

  float average = sum / 2;
  printf("The average is %.2f\n", average);

  int difference = abs(first - second);
  printf("The difference is %i\n", difference);

  float division;
  if (second != 0)
  {
    division = first / second;
    printf("The division is %.2f\n", division);
  }

  int powerOf = pow(first,second);
  printf("%i to the power of %i is %i\n", first, second, powerOf);



  printf("%i \n", rand() % 100 );
}
