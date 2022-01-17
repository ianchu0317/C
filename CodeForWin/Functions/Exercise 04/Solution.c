#include <stdio.h>

int checkEven(int num){
  if (num % 2 == 0)
    return 1;
  else
    return 0;

}

int main()
{
  /* User input data */
  int number;
  printf("Input any number: ");
  scanf("%d", &number);

  /* Check even or odd */
  int isEven = checkEven(number);
  if (isEven){
    printf("\n%d is Even.\n", number);
  } else{
    printf("\n%d is Odd.\n", number);
  }
  return 0;
}
