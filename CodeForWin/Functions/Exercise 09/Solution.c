#include <stdio.h>

/* Check perfect number */
int checkPerfect(int n){
  int sum = 0;
  for (int i = 1; i <= n / 2; i ++){
    if (n % i == 0)
      sum += i;
  }

  if (sum == n)
    return 1;
  else
    return 0;
}

int main(){
  /* User input data */
  int lowerLimit, upperLimit;
  printf("Input lower limit: ");
  scanf("%d", &lowerLimit);
  printf("Input upper limit: ");
  scanf("%d", &upperLimit);

  /* Print out result */
  int isPerfect;
  printf("\nPerfect numbers between %d to %d are: ", lowerLimit, upperLimit);
  for (int i = lowerLimit; i <= upperLimit; i++){
    isPerfect = checkPerfect(i);
    if (isPerfect)
      printf("%d, ", i);
  }

  printf("\n");
  return 0;
}
