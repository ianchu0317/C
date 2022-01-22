#include <stdio.h>

int find_max(int *array, int max, int counter, int limit){
  if (counter > limit)
    return max;
  else if (array[counter - 1] > max){
    return  find_max(array, array[counter - 1], counter + 1, limit);
  } else
    return find_max(array, max, counter +1, limit);
}


int find_min(int *array, int min, int counter, int limit){
  if (counter > limit)
    return min;
  else if (array[counter - 1] < min){
    return  find_min(array, array[counter - 1], counter + 1, limit);
  } else
    return find_min(array, min, counter +1, limit);
}


int main(){
  // User input data
  int number_of_elements;
  printf("Input number of elements: ");
  scanf("%d", &number_of_elements);

  int array[number_of_elements];
  for (int i = 1; i <= number_of_elements; i++) scanf("%d", &array[i-1]);

  // Output
  printf("\nMin: %d\n", find_min(array, 0, 1, number_of_elements));
  printf("Max: %d\n", find_max(array, 0, 1, number_of_elements));

  return 0;
}
