#include <stdio.h>


int main()
{
    /* Enter variable */
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    /* Product of digits */
    int product = 1;

    /* Go through every digits in the number */
    while (num / 10 != 0) {
        product *= num % 10;
        num /= 10;
    }

    /* Print out the result */
    printf("\nProduct of digits: %d\n", product);

    return 0;
}
