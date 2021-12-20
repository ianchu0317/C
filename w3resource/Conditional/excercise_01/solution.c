#include <stdio.h>


void check(int*, int*);

int main()
{
	//Declare variables
	int num1, num2;

	//Ask user input
	printf("[+] Enter the first number : ");
	scanf("%d", &num1);
	printf("[+] Enter the second number : ");
	scanf("%d", &num2);
	check(&num1, &num2);

}

void check(int *num1, int *num2)
{
	if (*num1 == *num2)
	{
		printf("Number1 and Number2 are equal");
	}

}
