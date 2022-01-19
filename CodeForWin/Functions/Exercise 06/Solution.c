#include <stdio.h>

int checkPrime(int num){
  for (int i = 2; i <= num/2; i++){
    if (num % i == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  /* User input data */
  int lowerLimit, upperLimit;
  printf("Input lower limit: ");
  scanf("%d", &lowerLimit);
  printf("Input upper limit: ");
  scanf("%d", &upperLimit);

  /* Print out result */
  int isPrime;
  printf("\nPrime numbers between %d-%d are: ", lowerLimit, upperLimit);
  for (int i = lowerLimit; i <= upperLimit; i++){
    isPrime = checkPrime(i);
    if (isPrime)
      printf("%d, ", i);
  }

  printf("\n");
  return 0;
}
