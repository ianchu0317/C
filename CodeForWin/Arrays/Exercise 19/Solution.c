#include <stdio.h>

#define TRUE 1

int main(){

  // User input data
  int size;
  printf("Input size of first array: ");
  scanf("%d", &size);

  int array[size];
  printf("Input %d elements in array: ", size);
  for (int i = 1; i <= size; i++) scanf("%d", &array[i-1]);

  // Output unsorted array
  printf("\nUnsorted array: ");
  for (int i = 1; i <= size; i++) printf("%d ", array[i-1]);
  printf("\n");

  // Sort array by swapping numbers
  int swapped, temp;
  while (TRUE){
    swapped = 0;
    for (int i = 1; i < size; i++){
      if (array[i-1] > array[i]){
        temp = array[i-1];
        array[i-1] = array[i];
        array[i] = temp;
        swapped = 1;
      }
    }

    if (!swapped){
      break;
    }
  }

  // Final output for sorted array
  printf("\nSorted array: ");
  for (int i = 1; i <= size; i++) printf("%d ", array[i-1]);
  printf("\n");

  return 0;
}
