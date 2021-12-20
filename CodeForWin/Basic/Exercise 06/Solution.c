#include <stdio.h>
#include <math.h>

#define PI 3.141519

int main()
{
    int radius, diameter;
    float circumference, area;

    printf("Enter radius : ");
    scanf("%d", &radius);

    diameter = radius * 2;
    circumference = ((float) diameter) * PI;
    area = (float) pow(radius, 2) * PI;

    printf("\nDiameter = %d units\n", diameter);
    printf("Circumference = %f units\n", circumference);
    printf("Area = %f sq. units\n", area);

    return 0;
}
