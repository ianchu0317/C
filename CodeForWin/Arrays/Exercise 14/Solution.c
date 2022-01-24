#include <stdio.h>


int main(){
  // User input data
  int number;
  printf("Input number of elements to store in array: ");
  scanf("%d", &number);

  int array[number];
  printf("Enter %d elements in array:\n", number);
  for (int i = 1; i <= number; i++) scanf("%d", &array[i-1]);

  // For each element in current array
  for (int i = 1; i <= number; i++){
    // Check If its duplicated
    for (int x = 1; x <= number; x++){
        // If its the same item
        if (array[i-1] == array[x-1]){
          // Remove duplicated by shifting one element foward
          for (int j = x; j <= number; j++){
            array[j-1] = array[j];
          }
          number -= 1;
        }
    }
  }


  //Output
  printf("After removing all duplicate elements\n");
  printf("Elements of array are: ");
  for (int i = 1; i <= number; i++) printf("%d ", array[i-1]);
  printf("\n");

  return 0;
}
