#include <stdio.h>
#include <stdlib.h>

int main(){
    // User input data
    int num;
    printf("Input number of elements to store in array: ");
    scanf("%d", &num);

    int array[num];
    printf("Input %d numbers of elements in array:\n", num);
    for (int i = 1; i <= num; i++) scanf("%d", &array[i-1]);


    // at least min size of original array
    int duplicate_count = 0;
    int *done = (int *) malloc(sizeof(int));
    int done_count = 1;

    // For each number in the first array
    for (int i = 1; i <= num; i++){
      // Count frecuency in current list
      for (int x = 1; x <= num; x++){
        // If the number is repeated in array and are not the same item
        if (array[i-1] == array[x-1] && x != i){
          // Check if the number has already been saved before
          for (int x = 1; x <= done_count; x++){
            // If the number is not done and its already the last element
            printf("\n%d (done) == %d(array)", done[x], array[i-1]);
            if (done[x-1] != array[i-1] && x == done_count){
              duplicate_count += 1;
              // Add element to done array
              done[done_count] = array[i-1];
              done_count += 1;
              done = (int *) realloc(done, sizeof(int) * done_count);
              // Debug
              printf("\n%d", array[i-1]);
            } else if (done[x-1] == array[i-1]) break;
          }
        }
      }
    }

    // Output
    printf("\nTotal number of duplicate elements: %d\n", duplicate_count);
    return 0;

}
