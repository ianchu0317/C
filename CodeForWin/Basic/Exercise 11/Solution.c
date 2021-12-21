#include <stdio.h>

int pows(int, int);

int main()
{
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("\n%d ^ %d = %d\n", base, exponent, pows(base, exponent));

    return 0;
}

int pows(int x, int y)
{
    int result = x;
    for (int i = 2; i <= y; i++)
    {
        result = result * x;
    }

    return result;
}
