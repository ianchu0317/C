#include <stdio.h>


void printNumber(int);

int main()
{
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    printf("\n");
    int reverseNumber = 0;

    while (num != 0) {
        reverseNumber *= 10;
        reverseNumber += num % 10;
        num /= 10;
    }

    while (reverseNumber != 0) {
        printNumber(reverseNumber % 10);
        reverseNumber /= 10;
    }

    printf("\n");
    return 0;
}


void printNumber(int num)
{
    switch (num){
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
        default:
            break;
    }

    printf(" ");
}
