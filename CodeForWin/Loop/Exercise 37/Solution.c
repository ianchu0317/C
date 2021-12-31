#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BINARY_SIZE 8

void _findComplementBinaryNumber(char *, char *);

int main()
{
    /* User input binary number */
    char binaryNumber[BINARY_SIZE];
    
    printf("Input binary number: ");
    fgets(binaryNumber, sizeof(binaryNumber), stdin);
    binaryNumber[strlen(binaryNumber)] = '\0';

    /* New complement number */
    char complementBinaryNumber[BINARY_SIZE];

    _findComplementBinaryNumber(complementBinaryNumber, binaryNumber);

    /* Print out result */
    printf("\nComplement binary number: %s\n", complementBinaryNumber);

    return 0;
}

/* Function to find complement binary number */
void _findComplementBinaryNumber(char *complementBinaryNumber, char *binaryNumber)
{
    for (int i = 1; i <= BINARY_SIZE; i++)
    {
        if (binaryNumber[i - 1] == '1') {
            complementBinaryNumber[i - 1] = '0';
        } else if (binaryNumber[i - 1] == '0'){
            complementBinaryNumber[i - 1] = '1';
        }
    }
}
