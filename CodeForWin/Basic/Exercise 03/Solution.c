#include <stdio.h>


int main()
{
    int num1, num2;
    printf("First number : ");
    scanf("%d", &num1);
    printf("Second number : ");
    scanf("%d", &num2);

    printf("\nSum = %d\n", num1 + num2);
    printf("Difference = %d\n", num1 - num2);
    printf("Product = %d\n", num1 * num2);
    printf("Quotient = %d\n", num1 / num2);
    printf("Modulus = %d \n", num1 % num2);

    return 0;
}
