#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(){
	//Declare variables
	int num1, num2;
	int *ptr1 = &num1, *ptr2 = &num2;

	//Input and asigne variables
	printf("Input the first number : ");
	scanf("%d%*c", &num1);
	fflush(stdin);
	printf("\nInput the second number : ");
	scanf("%d%*c", &num2);
	fflush(stdin);

	//Print out the resut
	printf("\n\nThe sum of the entered numbers is %d", (*ptr1 + *ptr2));

	return 0;
}
