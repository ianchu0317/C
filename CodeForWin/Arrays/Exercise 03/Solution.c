#include <stdio.h>

// Calculate sum of elements using recursion
int sum(int *array, int count, int max){
  if (count > max)
    return 0;
  return array[count - 1] + sum(array, count + 1, max);
}

int main(){
  // User input data
  int elements;
  printf("Enter number of elements in array: ");
  scanf("%d", &elements);

  int array[elements];
  for (int i = 1; i <= elements; i++) scanf("%d", (array + i -1));

  // Output result
  printf("\nSum of all elements: %d\n", sum(array, 1, elements));

  return 0;
}
