#include <stdio.h>

int recursive(int previous, int next, int count, int max){
  if (count == max)
    return 0;
  previous = next - previous;
  return (next + previous) + recursive(next, next + previous, count + 1, max);
}

int fibonacci(int num){
  int min = 1;
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
