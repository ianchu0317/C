#include <stdio.h>

#define SQUARE(X) (X*X)
#define CUBE(X) SQUARE(X)*X

int main(){
  /* Input number */
  int number;
  printf("Input number: ");
  scanf("%d", &number);

  /* Print out result */
  printf("Square of %d is %d\n", number, SQUARE(number));
  printf("Cube of %d is %d\n", number, CUBE(number));

  return 0;
}
