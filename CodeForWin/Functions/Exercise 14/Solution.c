#include <stdio.h>


int find_sum(int min, int max){
  if (min >= max){
    return 0;
  }
  else
    return min + find_sum(min + 2, max);
}

int main(){
  // User input data
  int lowerLimit, upperLimit;
  printf("Input lower limit: ");
  scanf("%d", &lowerLimit);
  printf("Input upper limit: ");
  scanf("%d", &upperLimit);

  // Find sum of numbers in range
  int result = find_sum(lowerLimit, upperLimit);
  printf("\nSum of odd/even numbers between %d to %d: %d\n", lowerLimit, upperLimit, result);

  return 0;
}
