#include <stdio.h>


int main()
{
    int num;
    printf("Input upper range: ");
    scanf("%d", &num);

    printf("Even numbers between 1 to %d:\n", num);

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
