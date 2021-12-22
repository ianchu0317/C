#include <stdio.h>

int main()
{
    int limit, total;
    total = 0;

    printf("Input upper limit: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++) {
        total += i;
    }

    printf("\nSum of natural numbers 1-%d: %d\n", limit, total);

    return 0;
}
