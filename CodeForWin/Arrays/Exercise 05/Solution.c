#include <stdio.h>

int main(){
    // User input data
    int number;
    printf("Input number of elements in array: ");
    scanf("%d", &number);

    // Input array data
    int array[number];
    for (int i = 1; i <= number; i++) scanf("%d", &array[i-1]);

    // Find max and second max number in array
    int max, second_max;
    max, second_max = 0;
    for (int i = 1; i <= number; i++){
        if (array[i-1] > max){
            second_max = max;
            max = array[i-1];
        }
    }

    printf("\nSecond larguest: %d\n", second_max);

    return 0;
}
