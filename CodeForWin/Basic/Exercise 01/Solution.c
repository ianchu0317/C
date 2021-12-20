#include <stdio.h>

int main()
{
    char character;
    signed short int num;

    printf("Enter a character: ");
    character = getchar();
    __fpurge(stdin);

    printf("Enter a signed short value: ");
    scanf("%hd", &num);
    __fpurge(stdin);

    printf("\n");

    printf("You entered character: %c\n", character);
    printf("You entered signed short: %hd\n", num);

    return 0;
}
