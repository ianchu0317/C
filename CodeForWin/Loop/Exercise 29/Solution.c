#include <stdio.h>

int main()
{
    int num;

    printf("Input any number: ");
    scanf("%d", &num);

    int isPrime = 1;

    printf("\nPrime factors of %d: ", num);

    for (int i = 2; i <= num-1; i++) {

        /* Find factors of principal number */
        if (num % i == 0) {

            /* Check if the factor is prime or not */
            for (int x = 2; x <= i / 2; x++) {

                if (i % x == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime){
                printf("%d, ", i);
            }
        }
    }

    printf("\n");
    return 0;
}

