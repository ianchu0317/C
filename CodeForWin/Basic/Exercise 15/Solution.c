#include <stdio.h>
#include <math.h>

float areaOfEquilateralTriangle(int);

int main()
{
    int side;
    printf("Enter side of the equilateral triangle: ");
    scanf("%d", &side);

    printf("\nArea of equilateral triangle = %.1f sq. units\n", areaOfEquilateralTriangle(side));

    return 0;
}

float areaOfEquilateralTriangle(int base)
{
    float height = sqrt(pow(base, 2) - pow(base / 2, 2));
    return (height * base) / 2;
}
