#include <stdio.h>

void check(int*);

int main()
{
	int number;

	printf("-------- Integer positive or negative checker -------\n\n");
	printf("[+] Enter a number : ");
	scanf("%d", &number);
	check(&number);
	return 0;

}



void check(int *num)
{
	if (*num >= 0)
	{
		printf("The entered number is positive");
	}
	else if (*num < 0)
	{
		printf("The entered number is negative");
	}
	else
	{
		printf("The entered number is invalid");
	}
}
