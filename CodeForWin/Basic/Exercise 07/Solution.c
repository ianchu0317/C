#include <stdio.h>

int main()
{
    int cm;
    float m, km;

    printf("Enter length in centimeter : ");
    scanf("%d", &cm);

    m = (float) cm / 100;
    km = (float) cm / 100000;

    printf("Length in meter = %f m\n", m);
    printf("Length in kilometer = %f km\n", km);

    return 0;
}
