#include <stdio.h>

int checkPerfectNumber(int);

int main()
{
    /* User input */
    int upperLimit;
    printf("Input upper limit: ");
    scanf("%d", &upperLimit);
    
    /* Boolean value */
    int isPerfectNumber;
    
    /* Print out all the perfect numbers starting from 1 to the entered integer value */
    printf("\nPerfect numbers between 1 to %d: ", upperLimit);
    for (int i = 1; i <= upperLimit; i++) {
        isPerfectNumber = checkPerfectNumber(i);
        
        if (isPerfectNumber){
            printf("%d, ", i);
        }
    }
    
    printf("\n");
    return 0;
}

/* Check if the number is a Perfect Number */
int checkPerfectNumber(int num)
{
    int sum = 0;
 
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0){
            sum += i;
        }
    }
    
    if (num == sum){
        return 1;
    }   
    else {
        return 0;
    }
}
