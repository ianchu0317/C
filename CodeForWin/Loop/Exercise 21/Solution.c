#include <stdio.h>


int main()
{
    int a, b;
    printf("Input base: ");
    scanf("%d", &a);

    printf("Input exponent: ");
    scanf("%d", &b);

    int result = 1;
    for (int i = 1; i <= b; i++) {
        result *= a;
    }

    printf("\n%d ^ %d = %d\n", a, b, result);

    return 0;
}
