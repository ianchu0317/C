#include <stdio.h>


int main()
{

    int num;
    printf("Input any number: ");
    scanf("%d", &num);

    // Declare variables
    int firstDigit, lastDigit;
    int i = 1;

    /* Get the first digit */
    while (num / i != 0) {
        firstDigit = num / i;
        i *= 10;
    }

    /* Get the last digit */
    lastDigit = num % 10;

    //Testing
    //printf("First : %d\nLast: %d\nCounter: %d\n", firstDigit, lastDigit, i);

    /* Swap the first digit */
    num -= firstDigit * (i / 10);
    num += lastDigit * (i / 10);

    /* Swap the last digit */
    num -= lastDigit;
    num += firstDigit;

    printf("\nNumber after swapping first and last digit: %d\n", num);

    return 0;
}
