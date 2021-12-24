#include <stdio.h>

int checkPrime(int);

int main()
{

    int lowerLimit, upperLimit;

    printf("Input lower limit: ");
    scanf("%d", &lowerLimit);

    printf("Input upper limit: ");
    scanf("%d", &upperLimit);

    int sum = 0;

    for (int i = lowerLimit + 1; i <= upperLimit; i++) {
        if(checkPrime(i))
            sum += i;
    }

    printf("Sum of prime numbers between %d-%d: %d\n", lowerLimit, upperLimit, sum);
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
