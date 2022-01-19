#include <stdio.h>

void printInterval(int min, int max){
  if (min <= max){
    printf("%d, ", min);
    printInterval(min + 1, max);
  }
}

int main(){
  /* User input data */
  int lowerLimit, upperLimit;
  printf("Input lower limit: ");
  scanf("%d", &lowerLimit);
  printf("Input upper limit: ");
  scanf("%d", &upperLimit);

  /* Print out result */
  printf("Natural numbers between %d to %d: ", lowerLimit, upperLimit);
  printInterval(lowerLimit, upperLimit);
  printf("\n");

  return 0;
}
