#include <stdio.h>
#include <math.h>

int main(){
  /* User input numbers and operation */
  float num1, num2;
  char operation;
  printf("Input calculation (<number 1> <operator> <number 2>):\n");
  scanf("%f %c %f", &num1, &operation, &num2);

  /* Print out result */
  float result;
  switch (operation) {
    case '+':
      result = num1 + num2;
      printf("\n%.1f %c %.1f = %.1f\n", num1, operation, num2, result);
      break;
    case '-':
      result = num1 - num2;
      printf("\n%.1f %c %.1f = %.1f\n", num1, operation, num2, result);
      break;
    case '*':
      result = num1 * num2;
      printf("\n%.1f %c %.1f = %.1f\n", num1, operation, num2, result);
      break;
    case '/':
      result = num1 / num2;
      printf("\n%.1f %c %.1f = %.1f\n", num1, operation, num2, result);
      break;
    case '^':
      result = pow(num1, num2);
      printf("\n%.1f %c %.1f = %.1f\n", num1, operation, num2, result);
      break;
    default:
      printf("\n[!] Invalid operation !\n");
      break;
  }
  return 0;
}
