#include <stdio.h>
int main()
{
  int c, k;

  for (c = 1; c <= 4; c++)
  {
    for(k = 1; k <= c; k++)
      printf("*");

    printf("\n");
  }

  return 0;
}
