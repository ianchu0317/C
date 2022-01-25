#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

void print_array(int *array, int size){
    for (int i = 1; i <= size; i++) printf("%d ", array[i-1]);
    printf("\n");
}

void swap(int *n1, int *n2){
  int temp;
  temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}
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
  print_array(array, size);

  // Sort array
  // 1 4 5 6 8
  //

  for (int i = 1; i <= size; i++) {
    for (int x = i; x <= size; x++){
      if (array[i-1] % 2 != 0 && x != i){
        swap(&array[i-1], &array[x-1]);
      } /*else if (array[i-1] % 2 != 0 && array[i-1] > array[x-1] && x != i){
        swap(&array[i-1], &array[x-1]);
      }*/

      print_array(array, size); // Debug
    }
  }

  // Final output
  printf("\nSorted array: ");
  print_array(array, size);

  return 0;
}
