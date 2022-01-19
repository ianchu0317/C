#include <stdio.h>

void printOdd(int min, int max){
  if (min > max)
    return;
  if (min % 2 != 0)
    printf("%d, ", min);
  printOdd(min + 1, max);
}

void printEven(int min, int max){
  if (min > max)
    return;
  if (min % 2 == 0)
    printf("%d, ", min);
  printEven(min + 1, max);
}

int main(){
  /* User input data */
  int lowerLimit, upperLimit;
  printf("Input lower limit: ");
  scanf("%d", &lowerLimit);
  printf("Input upper limit: ");
  scanf("%d", &upperLimit);

  /* Print out result */
  printf("Even numbers between %d to %d: ", lowerLimit, upperLimit);
  printEven(lowerLimit, upperLimit);
  printf("\n");
  printf("Odd numbers between %d to %d: ", lowerLimit, upperLimit);
  printOdd(lowerLimit, upperLimit);
  printf("\n");

  return 0;
}
