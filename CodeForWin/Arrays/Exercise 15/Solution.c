#include <stdio.h>

int find_max(int n1, int n2){
  if (n1 >= n2) return n1;
  else return n2;
}

// Sort array in ascending order
/*
void sort_array(int *array){
  int temp;
  for (int i = 1; i <= sizeof(array) / sizeof(int); i++){
    for (int x = 1; x <= sizeof(array) / sizeof(int); x++){
      if (array[i-1] < array[x-1] && i != x){
        temp = array[x-1];
        for (int j = x; j <= sizeof(array))

      }
    }
  }
}
*/
int main(){

  // User input data
  int size_1;
  printf("Input size of first array: ");
  scanf("%d", &size_1);

  int size_2;
  printf("Input size of second array: ");
  scanf("%d", &size_2);

  int first_array[size_1];
  printf("Input %d elements for first array: ", size_1);
  for (int i = 1; i <= size_1; i++) scanf("%d", &first_array[i-1]);

  int second_array[size_2];
  printf("Input %d elements for second array: ", size_2);
  for (int i = 1; i <= size_2; i++) scanf("%d", &second_array[i-1]);


  // Merge both array
  int merged_array[size_1 + size_2];
  int merge_count = 1;


  // For each element in both array
  for (int i = 1; i <= find_max(size_1, size_2); i++){
    // If the element is within the array size
    if (i <= size_1){
      merged_array[merge_count-1] = first_array[i-1];
      merge_count += 1;
    }
    if (i <= size_2){
      merged_array[merge_count-1] = second_array[i-1];
      merge_count += 1;
    }
}

 // Output
  printf("\nMerged array is: ");
  for (int i = 1; i <= (size_1 + size_2); i++) printf("%d ", merged_array[i-1]);
  printf("\n");

  return 0;
}
