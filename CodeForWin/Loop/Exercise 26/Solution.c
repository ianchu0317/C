#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    printf("Input any number: ");
    scanf("%d", &num);

    bool isPrime = true;

    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            isPrime = false;
            break;
    }


    if (isPrime) {
        printf("\n%d is prime number\n", num);
    }
    else {
        printf("\n%d is not prime number\n", num);
    }
    return 0;
}
