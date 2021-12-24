#include <stdio.h>
#include <math.h>

int countDigits(int);
int checkArmstrong(int, int);

int main()
{
    /* Input values */
    int lowerLimit, upperLimit;
    
    printf("Input lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Input upper limit: ");
    scanf("%d", &upperLimit);
        
    /* Boolean value */
    int isArmstrong = 0;
    
    /* Check if the number is Armstrong and print it to the screen */
    printf("\nArmstrong numbers between %d to %d are:\n", lowerLimit, upperLimit);
    
    for (int i = lowerLimit; i <= upperLimit; i++){
        isArmstrong = checkArmstrong(i, countDigits(i));
        if (isArmstrong){
            printf("%d, ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}

/* Function for counting digits */
int countDigits(int num) 
{
    int digits = 0;
    
    while (num != 0) {
        digits += 1;
        num /= 10;
    }   
    
    return digits;
}

/* Function to check if the number is Armstrong */
int checkArmstrong(int num, int exponent)
{
    int sum = 0;
    int copyNum = num;
    
    // Creating the sum of the digits, elevated to the quantity of digits of the number
    while (copyNum != 0){
        sum += (int) pow(copyNum % 10, exponent);
        copyNum /= 10;   
    }
 
    // Return the values   
    if (sum == num) {
        return 1;
    } 
    else {
        return 0;
    }
}
