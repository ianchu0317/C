#include <stdio.h>


int main()
{
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    int i = 1;
    int digit;
    int reverseNumber = 0;

    while ((num*10 / i) / 10 != 0)
    {
        digit = (num / i) % 10;
        reverseNumber += digit;
        //printf("\nRN: %d\n", reverseNumber);
        reverseNumber *= 10;

        //if ((num / i) / 10 != 0)
        //    printf("RN: %d\n", reverseNumber);
        i *= 10;
    }

    reverseNumber /= 10;

    printf("\nReverse of %d = %d\n", num, reverseNumber);

    return 0;
}
