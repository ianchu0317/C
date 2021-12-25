#include <stdio.h>

int main()
{
    /* User input array size */
    int arraySize;
    printf("Input array size: ");
    scanf("%d", &arraySize);

    int array[arraySize];
    
    /* User input values to store into array */
    printf("Input elements: \n");
    for (int i = 1; i <= arraySize; i++){
        scanf("%d", (array + i - 1));
    }
    
    /* Print out array content */
    printf("\nArray elements: ");
    for (int i = 1; i <= arraySize; i++){
        printf("%d ", *(array + i - 1));
    }
    
    printf("\n");

    return 0;
}
