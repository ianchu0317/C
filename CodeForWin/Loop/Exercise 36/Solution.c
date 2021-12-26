#include <stdio.h>

void printFibonacciSeries(int);

int main()
{
    /* User input terms quantity */ 
    int terms;
    
    printf("Input number of terms: ");
    scanf("%d", &terms);
        
    /* Start adding */
    printf("\nFibonacci series: \n");
    printFibonacciSeries(terms);

    return 0;
}

/* Function to print Fibonacci series */
void printFibonacciSeries(int terms){

    int num = 0;
    int previous = 1;
    
    for (int i = 1; i <= terms; i++){
        printf("%d ", num);
        num += previous;
        previous = num - previous;
    }
    
    printf("\n");
}
