#include <stdio.h>

#define MAX_SIZE 10

void printArray(int *);

int main()
{
    /* User input array elements */
    int array[MAX_SIZE];
    printf("Input array1 elements: ");
    
    for (int i = 1; i <= MAX_SIZE; i++){
        scanf("%d", (array + i - 1));
    }
    
    /* New array */
    int copyArray[MAX_SIZE];
    
    /* Copy content */
    for (int i = 1; i <= MAX_SIZE; i++){
        *(copyArray + i - 1) = *(array + i - 1);
    }
    
    /* Print out final content  */
    printf("\nArray 1: ");
    printArray(array);
    printf("Array 2: ");
    printArray(copyArray);
    
    return 0;
}

void printArray(int *array)
{
    for (int i = 1; i <= MAX_SIZE; i++){
        printf("%d ", *(array + i - 1));
    }
    
    printf("\n");
}
