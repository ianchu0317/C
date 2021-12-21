#include <stdio.h>

int triangleArea(int, int);

int main()
{
    int base, height;

    printf("Enter base of the triangle: ");
    scanf("%d", &base);
    printf("Enter height of the triangle: ");
    scanf("%d", &height);

    printf("\nArea of the triangle = %d sq. units\n", triangleArea(base, height));

    return 0;
}

int triangleArea(int a, int b)
{
    return (a * b) / 2;
}
