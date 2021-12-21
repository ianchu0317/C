#include <stdio.h>


int thirdAngle(int, int);

int main()
{
    int a, b;
    printf("Enter first angle: ");
    scanf("%d", &a);

    printf("Enter second angle: ");
    scanf("%d", &b);

    printf("\nThird angle = %d\n", thirdAngle(a, b));

    return 0;
}


int thirdAngle(int a, int b)
{
    return 180 - (a + b);
}
