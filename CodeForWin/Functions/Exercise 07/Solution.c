#include <stdio.h>

void printStrongNumbers(int lower, int upper){
  printf("\nStrong numbers between %d to %d: ", lower, upper);
  int sum = 0;
  int n, factorial;
  /* Nested loop*/
  /* For each number in range */
  for (int i = lower; i <= upper; i++){
    /* For all digits of number */
    n = i;
    while (n != 0){
      /* Find sum of factorials*/
      factorial = 1;
      for (int x = n % 10; x >= 1; x--){
        factorial *= x;

      }
      sum += factorial;
      // *Debugging* printf("n = %d, n mod 10 = %d, factorial = %d\n", n, n%10, sum);
      n /= 10;
    }

    /* Print number if its strong number */
    if (sum == i){
      printf("%d, ", i);
    }

    sum = 0;
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
  printStrongNumbers(lowerLimit, upperLimit);

  return 0;
}
