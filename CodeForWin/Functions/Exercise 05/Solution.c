#include <stdio.h>
#include <math.h>

/* Check if number is prime */
int checkPrime(int n){
  for (int i = 2; i <= n/2; i++){
    if (n % i == 0)
      return 0;
    else
      return 1;
  }
}


int checkArmstrong(int n){
  /* Find number digits len */
  int tempNum = n;
  int digitsCounter = 0;
  while (tempNum != 0){
    tempNum /= 10;
    digitsCounter++;
  }

  /* Sum the power of digits to digits length */
  int power = digitsCounter;
  int sum = 0;
  tempNum = n;
  while (tempNum != 0){
    sum += pow((tempNum % 10), power);
    tempNum /= 10;
    digitsCounter++;
  }

  if (sum == n)
    return 1;
  else
    return 0;
}

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
  /* User input number */
  int num;
  printf("Input any number: ");
  scanf("%d", &num);

  /* Find if its prime, armstrong or perfect */
  int isPrime, isArmstrong, isPerfect;

  isPrime = checkPrime(num);
  isArmstrong = checkArmstrong(num);
  isPerfect = checkPerfect(num);

  /* Print out result */
  if (isPrime)
    printf("\n%d is prime number\n", num);
  else
    printf("\n%d is not prime number\n", num);

  if (isArmstrong)
    printf("\n%d is armstrong number\n", num);
  else
    printf("\n%d is not armstrong number\n", num);

  if (isPerfect)
    printf("\n%d is perfect number\n", num);
  else
    printf("\n%d is not perfect number\n", num);

  return 0;
}
