#include <stdio.h>

int main(){

  // User input data
  int size;
  printf("Input size of first array: ");
  scanf("%d", &size);

  int array[size];
  printf("Input %d elements in array: ", size);
  for (int i = 1; i <= size; i++) scanf("%d", &array[i-1]);

  // Separate odd number from even numbers
  int odd_numbers[(size / 2) + 1];
  int odd_counter = 0;
  int even_numbers[(size / 2) + 1];
  int even_counter = 0;

  // For each element in array
  for (int i = 1; i <= size; i++){
    if (array[i-1] % 2 == 0){
      even_numbers[even_counter] = array[i-1];
      even_counter += 1;
    } else {
      odd_numbers[odd_counter] = array[i-1];
      odd_counter += 1;
    }
  }

  // Output
  printf("\nOutput even elements in array: ");
  for (int i = 0; i < even_counter; i++) printf("%d ", even_numbers[i]);

  printf("\nOutput odd elements in array: ");
  for (int i = 0; i < odd_counter; i++) printf("%d ", odd_numbers[i]);
  printf("\n");
  
  return 0;
}
