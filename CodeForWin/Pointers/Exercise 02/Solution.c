#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Input num 1: ");
    scanf("%d", &num1);
    
    printf("Input num 2: ");
    scanf("%d", &num2);
    
    int *ptrNum1 = &num1;
    int *ptrNum2 = &num2;
    
    printf("\nSum: %d\n", *ptrNum1 + *ptrNum2);
    printf("Difference: %d\n", *ptrNum1 - *ptrNum2);
    printf("Product: %d\n", (*ptrNum1) * (*ptrNum2));
    printf("Quotient: %d\n", *ptrNum1 / *ptrNum2);
    return 0;
}
