#include <stdio.h>


int main(){
  // User input data
  int array[10];
  printf("Input array: \n");
  for (int i = 1; i <= (sizeof(array) / sizeof(int)); i++) scanf("%d", (array + i -1));

  // Output data
  printf("Output: ");
  for (int i = 1; i <= (sizeof(array) / sizeof(int)) ; i++) if (array[i-1] < 0) printf("%d ", array[i-1]);
  printf("\n");

  return 0;
}
