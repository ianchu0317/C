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
    int new_array[(sizeof(array) / sizeof(int)) - 1];
    int position;
    printf("Input position to delete: ");
    scanf("%d", &position);
    int counter = 1;

    // Delete selected position
    for (int i = 1; i <= num; i++) {
        if (i != position){
            new_array[counter - 1] = array[i-1];
            counter++;
        }
    }
    // Output
    printf("\nArray elements: ");
    for (int i = 1; i <= (sizeof(new_array) / sizeof(int)); i++) printf("%d ", new_array[i-1]);
    printf("\n");

    return 0;
}
