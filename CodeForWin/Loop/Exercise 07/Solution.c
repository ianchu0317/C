#include <stdio.h>

int main()
{
    int limit, total;
    total = 0;

    printf("Input upper limit of even number: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++) {
        if (i % 2 == 0)
            total += i;
    }

    printf("\nSum of even numbers between 1 to %d: %d\n", limit, total);

    return 0;
}
