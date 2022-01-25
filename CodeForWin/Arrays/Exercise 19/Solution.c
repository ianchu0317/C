#include <stdio.h>

void sort_array(int *array, int len) {
  int temp; // temp variable
  // For each element in array
  for (int i = 1; i <= len; i++){
    for (int x = 1; x <= len; x++){
      if (i != x && array[i-1] < array[x-1]){
        temp = array[x-1];
        array[x-1] = array[i];
        array[i-1] = temp;
        x -= 1;
      }
    }
  }
}

int main(){

  // User input data
  int size;
  printf("Input size of first array: ");
  scanf("%d", &size);

  int array[size];
  printf("Input %d elements in array: ", size);
  for (int i = 1; i <= size; i++) scanf("%d", &array[i-1]);

  sort_array(array, size);

  printf("\nSorted array: ");
  for (int i = 1; i <= size; i++) printf("%d ", array[i-1]);
  printf("\n");
  
  return 0;
}
