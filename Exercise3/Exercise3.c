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


int main()
{
  printf("%i\n", sumOfNumbers(100));

}
