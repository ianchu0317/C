#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum;

    printf("Input first number: ");
    scanf("%d", &num1);

    printf("Input second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\nSum = %d\n", sum);

    return 0;
}
