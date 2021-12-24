#include <stdio.h>

int checkPerfectNumber(int);

int main()
{
    /* User input */
    int num;
    printf("Input any number: ");
    scanf("%d", &num);

    /* Boolean value */
    int isPerfectNumber;

    /* Check if the entered value is a perfect number */
    isPerfectNumber = checkPerfectNumber(num);

    if (isPerfectNumber){
        printf("\n%d is PERFECT NUMBER\n", num);
    }
    else {
        printf("\n%d is not PERFECT NUMBER\n", num);
    }

    return 0;
}

/* Check if the number is a Perfect Number */
int checkPerfectNumber(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0){
            sum += i;
        }
    }

    if (num == sum){
        return 1;
    }
    else {
        return 0;
    }
}
