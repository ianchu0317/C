#include <stdio.h>
#include <math.h>

int main()
{
    float principle, time, rate;
    float CompoundInterest;

    printf("Enter principle: ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    CompoundInterest = principle * pow((1 + rate / 100), time);

    printf("\nCompound Interest = %f\n", CompoundInterest);

    return 0;
}
