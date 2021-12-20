#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Temperature in fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;
    printf("\nTemperature in celsius = %.2f C\n", celsius);

    return 0;
}
