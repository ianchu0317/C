#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    int Factors[100];
    int counter = 0;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            Factors[counter] = i;
            counter++;
            printf("%d ", i);
        }
    }

    printf("\nFactors of %d: ", num);

    for (int i = 1; i <= counter; i++) {
        printf("%d, ", Factors[i-1]);
    }

    //printf("sizeof(int) = %ld", sizeof(Factors));
    printf("\n");

    return 0;
}
