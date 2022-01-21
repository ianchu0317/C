#include <stdio.h>

int find_sum(int n, int max){
  static int sum = 0;
  if (n <= max){
    sum += n;
    find_sum(n + 1, max);
  }
  else
    return sum;
}

int main(){
  // User input data
  int min, max;
  printf("Input lower limit: ");
  scanf("%d", &min);
  printf("Input upper limit: ");
  scanf("%d", &max);

  // Find sum in range
  int result = find_sum(min, max);
  printf("\nSum of natural numbers from %d to %d: %d\n", min, max, result);

  return 0;
}
