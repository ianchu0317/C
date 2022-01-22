#include <stdio.h>

int main(){
    // User input data
    int num;
    printf("Input number of elements to store in array: ");
    scanf("%d", &num);

    int array[num];

    printf("Input %d numbers of elements in array:\n", num);
    for (int i = 1; i <= num; i++) scanf("%d", &array[i-1]);

    // New array and enter position to delete
    int frequency[num][2];
    int found_num = 0;
    int freq_count = 0;
    /*
    it should look something like this
    element 1: 1
    element 2: 2
    etc...
    */

    // For each number in the first array
    for (int i = 1; i <= num; i++){
      // Count frecuency
      for (int x = 1; x <= num; x++){
        if (array[i-1] == array[x-1]){
          freq_count += 1;
        }

      }
      for (int x = 1; x <= i; x++){
        if (frequency[x-1][0] == array[i-1]) break;
        else if (frequency[x-1][0] != array[i-1] && x == i){
          frequency[found_num][0] = array[i-1];
          frequency[found_num][1] = freq_count;
          found_num += 1;
        }
      }
      freq_count = 0; // reset counter
    }

    // Output
    printf("\n\n");
    while (found_num != 0) {
      printf("Frequency of %d: %d\n", frequency[found_num - 1][0], frequency[found_num - 1][1]);
      found_num -= 1;
    }

    return 0;
}
