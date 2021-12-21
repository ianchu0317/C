#include <stdio.h>

int main()
{
    float principle, time, rate;
    float SimpleInterest;

    printf("Enter principle: ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    SimpleInterest = (principle * time * rate) / 100;

    printf("\nSimple Interest = %.2f\n", SimpleInterest);

    return 0;
}
