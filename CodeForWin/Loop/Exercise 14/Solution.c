#include <stdio.h>

int main()
{
    int num;
    printf("Input any number: ");
    scanf("%d", &num);

    int i = 1;
    int sum = 0;
    int digit = 0;
    /*
    *Error: Yo recientemente habia puesto la variable "i"para que haga i*= en cada ronda.
    * Pero lo que deberia haber hecho es lo de abajo. Quitando el ultimo digito sumando uno por uno. repitiendo hasta que sea cero.
    *
    */

    while (num / i != 0) {
        digit = num % 10;
        sum += digit;
        num -= digit;
        num /= 10;
        //printf("\nSum : %d\nI: %d, num: %d\nDigit: %d\n", sum, i, num, digit);
    } //while (num / i != 0);

    printf("\nSum of digits: %d\n", sum);

    return 0;
}
