#include <stdio.h>

// Define macro
#define SUM(A,X) A+X

int main(int argc, char const *argv[]) {
  /* User input numbers */
  int a, b;
  printf("Input number A: ");
  scanf("%d", &a);

  printf("Input number B: ");
  scanf("%d", &b);

  /* Print out results */
  printf("\n%d + %d = %d\n", a, b, SUM(a, b));
  return 0;
}
