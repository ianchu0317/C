#include <stdio.h>

int checkPrime(int);

int main()
{

    int lowerLimit, upperLimit;

    printf("Input lower limit: ");
    scanf("%d", &lowerLimit);

    printf("Input upper limit: ");
    scanf("%d", &upperLimit);

    printf("Prime numbers between %d-%d: ", lowerLimit, upperLimit);
    for (int i = lowerLimit; i <= upperLimit; i++) {
        if(checkPrime(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

int checkPrime(int num) {
    for (int i = 2; i <= num / 2; i++)
    {
            if (num % i == 0) {
                return 0;
                break;
            }
    }

    return 1;
}
