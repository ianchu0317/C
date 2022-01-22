#include <stdio.h>

int main()
{
    // User input data
    int number;
    printf("Input number of elements in array: ");
    scanf("%d", &number);
    __fpurge(stdin);

    int array[number];
    printf("\nInput %d elements:\n", number);
    for (int i = 1; i <= number; i++) scanf("%d", &array[i-1]);

    //  Even number and Odd number counter
    int even_counter, odd_counter;
    even_counter = odd_counter = 0;

    for (int i = 1; i <= number; i++){
        if (array[i-1] % 2 == 0)
            even_counter += 1;
        else
            odd_counter += 1;
    }

    // Output
    printf("\nTotal even elements: %d\n", even_counter);
    printf("Total odd elements: %d\n", odd_counter);

    return 0;
}
