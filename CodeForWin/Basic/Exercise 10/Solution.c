#include <stdio.h>

int main()
{
    int day, years, weeks, days;

    printf("Enter days : ");
    scanf("%d", &day);

    years = day / 365;
    weeks = (day - 365 * years) / 7;
    days = day - (years * 365 + weeks * 7);

    printf("\n%d days = %d year/s, %d week/s and %d day/s\n", day, years, weeks, days);

    return 0;
}

