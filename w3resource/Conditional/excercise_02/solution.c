#include <stdio.h>

void check(int *);

int main()
{
	int number;
	printf("------ Integer odd checker ------\n\n");
	printf("[+] Enter the number : ");
	scanf("%d", &number);
	check(&number);
	return 0;
}


void check(int *num)
{
	if (*num % 2 == 0)
	{
		printf("\n%d is not an odd integer", *num);
	}
	else
	{
		printf("\n%d is an odd integer", *num);

	}
}
