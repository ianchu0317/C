#include <stdio.h>

void swapIntegerValue(int *, int*);

int main()
{
    
    /* User input */
    int num1, num2;
    
    printf("Input num 1: ");
    scanf("%d", &num1);
    
    printf("Input num 2: ");
    scanf("%d", &num2);
    
    //int *ptrValueNum1 = &num2;
    //int *ptrValueNum2 = &num1;
    
    swapIntegerValue(&num1, &num2);

    /* Print out the final value of each variable */
    printf("\nNum 1 = %d\n", num1);
    printf("Num 2 = %d\n", num2);

    return 0;
}

/* Function to swap two integer variables using their address */
void swapIntegerValue(int *num1, int *num2)
{
    int temp;
    
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
