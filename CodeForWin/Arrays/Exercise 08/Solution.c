#include <stdio.h>
#include <stdlib.h>

int *copy_array(int *array)
{
    int *cp_array = (int *) malloc(sizeof(int));
    for (int i = 1; i <= (sizeof(array) / sizeof(int)); i++){
        cp_array = (int *) realloc(cp_array, sizeof(int) * i);
        cp_array[i-1] = array[i-1];
    }

    return cp_array;
}

int main(){
    // User input data
    int num;
    printf("Input number of elements to store in array: ");
    scanf("%d", &num);

    int array[num];
    printf("Input %d numbers for array:\n", num);
    for (int i = 1; i <= num; i++) scanf("%d", &array[i-1]);

    int *cp_array = copy_array(array);

    // Output
    printf("Array 1: ");
    for (int i = 1; i <= num; i++) printf("%d ", array[i-1]);
    printf("\n");

    printf("Array 2: ");
    for (int i = 1; i <= num; i++) printf("%d ", cp_array[i-1]);
    printf("\n");

    free(cp_array);
    return 0;
}
