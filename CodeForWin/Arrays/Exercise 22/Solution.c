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

  int shift;
  printf("Input number of times to rotate: ");
  scanf("%d", &shift);


  int temp;
  int tmp;
  int i, x;

  // Shift times
  for (i = 1; i <= shift; i++){
    temp = array[size-1];
    // Shift to right
    for (x = size-1; x >= 1; x--){
      tmp = array[x];
      array[x] = array[x-1];
    }
    array[0] = temp;
    print_array(array, size); // Debug
  }

  // Output
  printf("\nArray after left rotation %d times: ", shift);
  print_array(array, size);

  return 0;
}
