#include <stdio.h>
#include <math.h>


int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    double result = sqrt(num);

    printf("\nSquare root of %d = %.0f\n", num, result);
    return 0;
}
