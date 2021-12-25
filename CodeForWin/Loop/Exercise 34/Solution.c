#include <stdio.h>

int factorialNumber(int);
int checkStrongNumber(int);

int main()
{
    /* User input number */
    int num;
    printf("Input number: ");
    scanf("%d", &num);
    
    /* Check if the number is a Strong Number */
    int isPerfectNumber = checkStrongNumber(num);
    
    if (isPerfectNumber){
        printf("\n%d is STRONG NUMBER\n", num);
    }   
    else {
        printf("\n%d is not STRONG NUMBER\n", num);
    }


    return 0;
}

/* Function to find factorial of a number */
int factorialNumber(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++){
        factorial *= i;
    }
       
    return factorial;
}

/* Function to check if a number is a Strong Number */
int checkStrongNumber(int num)
{
    int sum = 0;
    int copyNum = num;
    
    while (copyNum != 0) {
        sum += factorialNumber(copyNum / 10);
        copyNum /= 10;
    }
    
    if (sum == num){
        return 1;
    }
    else{
        return 0;
    }
}
