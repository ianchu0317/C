#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int suma(int num1, int num2){
	return num1 + num2;
}

int main(){
	int num1 = 45;
	int num2 = 43;

	int result = suma(num1, num2);
	char string[30];
	strcpy(string, "Ian");
	printf("Enter your name: ");
	printf("%s", string);

	return 0;
}
