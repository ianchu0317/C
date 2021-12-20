#include <stdio.h>

int main(){
	//Define variables and pointers
	int num1, num2, *ptr1=&num1, *ptr2=&num2;

	printf("Input the first number : ");
	scanf("%d", &num1);
	printf("Input the second number : ");
	scanf("%d", &num2);

	if (*ptr1 < *ptr2){
		printf("%d is the maximum number", *ptr2);
	}
	else{
		printf("%d is the maximum number", *ptr1);
	}

	return 0;
}
