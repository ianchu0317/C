#include <stdio.h>

int main()
{
    int num;
    printf("Input any number : ");
    scanf("%d", &num);

    int reversedNum = 0;
    int copy_num = num;

    /*
     * En el ejercicio anterior he puesto reversedNum*=10 abajo,
     * lo cual no me dejaba un resultado decente, y siempre sobraba un 0 al final.
     * En este caso como lo puse antes, ahora funciona bien
     */
    while (copy_num != 0) {
        reversedNum *= 10;
        reversedNum += copy_num % 10;
        copy_num /= 10;
    }

    /* Chequear igualdad */
    if (num == reversedNum)
        printf("\n%d is palindrome\n", reversedNum);
    else
        printf("\n%d is not palindrome\n", reversedNum);

    return 0;
}
