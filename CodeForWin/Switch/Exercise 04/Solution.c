#include <stdio.h>

int main()
{
  int a, b;
  printf("Input first number: ");
  scanf("%d", &a);
  printf("Input second number: ");
  scanf("%d", &b);

  switch(a > b){
    case 1:
      printf("\nMaximum: %d\n", a);
      break;
    default:
      printf("\nMaximum: %d\n", b);
      break;
  }
  return 0;
}
