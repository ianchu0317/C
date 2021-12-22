#include <stdio.h>


int main()
{
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    int first, last;
    int i = 1;

    while (num / i != 0)
    {
        first = num / i;
        i *= 10;
    }

    last = num % 10;

    printf("Sum of first and last digit: %d\n", first + last);

    return 0;
}

