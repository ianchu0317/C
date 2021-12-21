#include <stdio.h>


int main()
{
    int n;

    printf("Input upper limit: ");
    scanf("%d", &n);


    printf("\nNatural numbers from 1 to %d: ", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
