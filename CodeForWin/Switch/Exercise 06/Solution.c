#include <stdio.h>

int main(){
  /* User input number */
  int number;
  printf("Input number: ");
  scanf("%d", &number);

  /* Using nested switch to check the number */
  switch(number > 0){
    case 0:
      switch(number < 0){
        case 1:
          printf("\n%d is negative\n", number);
          break;
        case 0:
          printf("\n%d is zero\n", number);
          break;
      }
      break;
    case 1:
      printf("\n%d is positive\n", number);
      break;
  }
  return 0;
}
