#include <stdio.h>
#include <math.h>

int main()
{
    /* Input number */
    int num;
    printf("Input number: ");
    scanf("%d", &num);
    
    int copyNum = num;
    int digits = 0;
    
    /* Count digits */
    while (copyNum != 0) {
        digits += 1;
        copyNum /= 10;
    }
    
    /* Sum the digits */
    int sumDigits = 0;
    copyNum = num;
    
    while (copyNum != 0){
        sumDigits += pow(copyNum % 10, digits);
        copyNum /= 10;   
    }

    if (sumDigits == num){
        printf("\n%d is armstrong number\n", num);
    }
    else{
        printf("\n%d is not armstrong number\n", num);
    }
    return 0;
}
