#include <stdio.h>


int main(){

  // User input data
  int size;
  printf("Input size of first array: ");
  scanf("%d", &size);

  int array[size];
  printf("Input %d elements in array: ", size);
  for (int i = 1; i <= size; i++) scanf("%d", &array[i-1]);

  // find reverse
  int temp;
  for (int i = 0; i < size / 2; i++){
    //printf("\nArray[i] = %d, Array[(size-1)-i] = ");
    temp = array[i];
    array[i] = array[(size - 1) - i];
    array[(size-1) - i] = temp;
  }

  // Output
  printf("\nArray elements after reverse: ");
  for (int i = 1; i <= size; i++) printf("%d ", array[i-1]);
  printf("\n");

  return 0;
}
