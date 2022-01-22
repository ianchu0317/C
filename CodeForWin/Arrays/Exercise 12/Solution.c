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


    int freq_count = 0;
    int *done = (int *) malloc(sizeof(int) * 2);
    int done_count = 1;
    // Output
    printf("\nAll unique elements in the array are: ");
    // For each number in the first array
    for (int i = 1; i <= num; i++){
      // Count frecuency
      for (int x = 1; x <= num; x++){
        if (array[i-1] == array[x-1]){
          freq_count += 1;
        }
      }
      if (freq_count == 1){
        for (int x = 1; x <= done_count; x++){
          if (done[x-1] != array[i-1] && x == done_count){
            printf("%d ", array[i-1]);
            done[done_count] = array[i-1];
            done_count += 1;
            done = (int *) realloc(done, sizeof(int) * done_count);
          }
        }
      }

      freq_count = 0; // reset counter
    }

    printf("\n");
    free(done);
    return 0;
}
