#include <stdio.h>

int main()
{
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    int factorial = 1;

    for (int i = 1; i <= num; i++) {

        factorial *= i;
    }

    printf("\nFactorial: %d\n", factorial);

    return 0;
}
