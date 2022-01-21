#include <stdio.h>


int fact(int num){
  if (num == 0)
    return 1;
  return num * fact(num - 1);
}
// This is equal to 5 * (4 * (3 * (2 * (1 * (1)))))

int main()
{
  // User input data
  int number;
  printf("Input number: ");
  scanf("%d", &number);

  // Print out result
  int factorial = fact(number);
  printf("\nFactorial of %d = %d\n", number, factorial);

  return 0;
}
