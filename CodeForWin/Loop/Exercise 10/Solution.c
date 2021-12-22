#include <stdio.h>
int main()
{
    int num, i, digits;
    i = 10;
    digits = 1;

    printf("Input num: ");
    scanf("%d", &num);

    while ((num / i) != 0)
    {
        i *= 10;
        digits += 1;
    }

    printf("\nNumber of digits: %d\n", digits);

    return 0;
}
