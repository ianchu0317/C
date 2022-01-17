#include <stdio.h>

int cube(int n){
  int result = 1;
  for (int i = 1; i <= 3; i++){
    result *= n;
  }
  return result;
}


int main () {
  /* User input number */
  int num;
  printf("Input any number: ");
  scanf("%d", &num);

  /* Print out result */
  printf("Cube of %d = %d\n", num, cube(num));

  return 0;
}
