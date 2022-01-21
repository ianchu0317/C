#include <stdio.h>

#define SIZE 10

int main(){
  // User input data
  int array[SIZE];
  printf("Input elements: \n");
  for (int i = 1; i <= SIZE; i++){
    scanf("%d", (array + i - 1));
  }

  // Output data
  printf("Output: ");
  for (int i = 1; i <= SIZE; i++) printf("%d ", array[i-1]);
  printf("\n");
  return 0;
}
