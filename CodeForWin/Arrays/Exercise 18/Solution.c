#include <stdio.h>

int main(){

  // User input data
  int size;
  printf("Input size of first array: ");
  scanf("%d", &size);

  int array[size];
  printf("Input %d elements in array: ", size);
  for (int i = 1; i <= size; i++) scanf("%d", &array[i-1]);

  int search;
  printf("Input element to search: ");
  scanf("%d", &search);

  //Find element index
  int index;

  for (int i = 1; i <= size; i++){
    if (array[i-1] == search){
      index = i-1;
      break;
    }
  }

  printf("\nElement to search is: %d\n", search);
  printf("Element found at index %d\n", index);
  printf("Elements in array are: ");
  for (int i = 1; i <= size; i++) printf("%d ", array[i-1]);
  printf("\n");

  return 0;
}
