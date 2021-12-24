#include <stdio.h>


int main()
{
    int a, b;

    printf("Input first number: ");
    scanf("%d", &a);

    printf("Input second number: ");
    scanf("%d", &b);

    int HCF;
    int smallest;

    if (a < b)
        smallest = a;
    else
        smallest = b;

    for (int i = 1; i <= smallest; i++) {
        if ((a % i == 0) && (b % i == 0))
            HCF = i;
    }

    printf("\nHCF of %d and %d: %d\n", a, b, HCF);

    return 0;
}
