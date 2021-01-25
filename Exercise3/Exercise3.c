#include <stdio.h>

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


int main()
{
  printf("%i\n", sumOfNumbers(100));
  printf("%i\n", sumOfEven(1000));

}
