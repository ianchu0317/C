#include <stdio.h>


int main()
{
    int a, b;

    printf("Input number 1: ");
    scanf("%d", &a);

    printf("Input number 2: ");
    scanf("%d", &b);

/*
    int greatest;

    if (a > b)
        greatest = a;
    else
        greatest = b;
*/

    int i = 1;

    while ((a * i) % b != 0) {
        i++;
    }
    int LCM = a*i;

    printf("\nLCM = %d\n", LCM);

    return 0;
}
