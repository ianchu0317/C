#include <stdio.h>

int recursive(int previous, int next, int count, int max){
  if (count == max)
    return previous + next;
  printf("%d (previous) + %d (next)= %d (previous + next)\n", previous, next, next+previous);

  return recursive(next, next + previous, count + 1, max);
}

int fibonacci(int num){
  int min = 2;
  return recursive(0, 1, min, num);
}

int main(int argc, char *argv[])
{
  // User input data
  int num;
  printf("Input any number: ");
  scanf("%d", &num);

  // Print out data
  int fibonacci_term = fibonacci(num);
  printf("\n%dth fibonacci term: %d\n", num, fibonacci_term);

  return 0;
}
