#include <stdio.h>
#include <math.h>

void printArmstrongNumbers(int lower, int upper){
  int sum; // Sum power of digits
  int currentNumber, currentDigit; // Copy of the current number and curretn digit
  int digitsCounter;

  printf("\nArmstrong numbers between %d to %d are: ", lower, upper);
  for (int i = lower; i <= upper; i++){
    currentNumber = i;
    digitsCounter = 0;
    sum = 0;

    while (currentNumber != 0){
      currentNumber /= 10;
      digitsCounter += 1;
    }

    currentNumber = i;

    while (currentNumber != 0){
      currentDigit = currentNumber % 10;
      sum += pow(currentDigit, digitsCounter);
      currentNumber /= 10;
    }

    if (sum == i){
      printf("%d, ", i);
    }
  }
  printf("\n");
}


int main()
{
  /* User input data */
  int lowerLimit, upperLimit;
  printf("Input lower limit: ");
  scanf("%d", &lowerLimit);
  printf("Input upper limit: ");
  scanf("%d", &upperLimit);

  /* Print out result */
  printArmstrongNumbers(lowerLimit, upperLimit);

  return 0;
}
