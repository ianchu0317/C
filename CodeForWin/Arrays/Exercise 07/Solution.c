#include <stdio.h>

int main(){
    // User input data
    int number;
    printf("Input numbers of elements to store in array: ");
    scanf("%d", &number);

    // USer inptu array info
    int array[number];
    printf("Input %d numbers for array: ", number);
    for (int i = 1; i <= number; i++) scanf("%d", &array[i-1]);

    // Count negative numbers
    int negativeNumberCounter = 0;
    for (int x = 1; x <= number; x++) if (array[x-1] < 0) negativeNumberCounter += 1;

    printf("\nTotal number of negative elements: %d\n", negativeNumberCounter);
    return 0;
}
