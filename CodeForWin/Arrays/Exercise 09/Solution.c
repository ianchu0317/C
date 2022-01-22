#include <stdio.h>
#include <stdio_ext.h>

int main(){
    // User input data
    int length;
    printf("Input number of elements to store in array: ");
    scanf("%d", &length);
    __fpurge(stdin);

    // User input array data
    int array[length];
    printf("Input %d elements in array:\n", length);
    __fpurge(stdin);

    for (int i = 1; i <= length; i++) {
        scanf("%d", &array[i-1]);
        __fpurge(stdin);
    }
    // User input new element to store
    int new_element;
    printf("Input element to insert: ");
    scanf("%d", &new_element);

    // User input position
    int position;
    printf("Input position where to insert: ");
    scanf("%d", &position);

    // Change value of data in array
    for (int i = 1; i <= length; i++){
        if (i == position) array[i-1] = new_element;
    }

    // Output
    printf("\nElements of array are: ");
    for (int i = 1; i <= length; i++) printf("%d ", array[i-1]);
    printf("\n");

    return 0;
}
