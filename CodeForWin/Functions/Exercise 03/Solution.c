#include <stdio.h>

int findMaximum(int a, int b){
  int max;
  if (a > b)
    max = a;
  else
    max = b;
  return max;
}

int findMinimum(int a, int b){
  int min;
  if (a < b)
    min = a;
  else
    min = b;
  return min;
}

int main()
{
  /* User input number */
  int a, b;
  printf("Input first number: ");
  scanf("%d", &a);
  printf("Input second number: ");
  scanf("%d", &b);

  /* Find maximum and find minimum */
  int max = findMaximum(a, b);
  int min = findMinimum(a, b);

  /* Print out result */
  printf("\nMaximum: %d\n", max);
  printf("Minimum: %d\n", min);

  return 0;
}
