#include <stdio.h>

int sum(int *num1, int *num2);

int main(){
	//Declare variables
	int num1, num2;

	//User input define variable value
	printf("Input the first number : ");
	scanf("%d", &num1);
	printf("Input the second number : ");
	scanf("%d", &num2);

	//Calculate the result 
	int result = sum(&num1, &num2);

	//Output result
	printf("The sum of %d and %d is %d", num1, num2, result);
	return 0;
}

//SUM By passing reference pointer
int sum(int *num1, int *num2){
	int result = *num1 + *num2;
	return result;
}
