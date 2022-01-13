#include <stdio.h>

int main()
{
  /* User input number */
  int number;
  printf("Input number: ");
  scanf("%d", &number);

  /* Check if its even or odd */
  switch(number % 2){
    case 0:
      printf("\nEven number\n");
      break;
    case 1:
      printf("\nOdd number\n");
      break;
  }
  
  return 0;
}
