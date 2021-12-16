#include <stdio.h>
#include <stdlib.h>


void suma(int *num_1, int *num_2);

int main(){
	int num_1;
	int num_2;

	printf("Enter the first number: ");
	scanf("%d", &num_1);
	printf("Enter the second number: ");
	scanf("%d", &num_2);
	suma(num_1,num_2);
	return 0;
}

void suma(int num_1, int num_2){
	int result = num_1 + num_2;
	printf("The answer is %d", result);
}
