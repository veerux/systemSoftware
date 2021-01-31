/*
Exercise 4
Description:
Author: Veera Määttänen
*/

#include <stdio.h>

int untilZero()
{
  int nCount = 0;
  while (1) {
    int givenNumber;
    printf("Give an integer: ");
    scanf("%i", &givenNumber );
    if (givenNumber < 0)
    {
      nCount++;
    }
    if (givenNumber == 0)
    {
      break;
    }
  }
  return nCount;
}

int main()
{
  printf("You gave %i negative integer(s).\n", untilZero());
}
