#include <stdio.h>

int sum_of_digits(int num){
  if (num != 0)
    return (num % 10) + sum_of_digits(num / 10);
  else
    return 0;
}


int main(int argc, char *argv[]){
  // User input data
  int number;
  printf("Input number: ");
  scanf("%d", &number);

  // Find sum of digits
  int sum = sum_of_digits(number);
  printf("\nSum of digits: %d\n", sum);

  return 0;
}
