#include <stdio.h>



int main()
{
    /* Enter number */
    int num;
    printf("Input any number: ");
    scanf("%d", &num);

    /* Declare variable array */
    int Frequency[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    /* Pass the frequency value into array */
    while (num != 0) {
        Frequency[num % 10] += 1;
        num /= 10;
    }

    printf("\n");

    /* Print out result */
    for (int i = 1; i <= 10; i++)
        printf("Frequency of %d = %d\n", i-1, Frequency[i-1]);

    //Finish program
    return 0;
}
