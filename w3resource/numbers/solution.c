#include <stdio.h>


void main()
{
	int number;
	printf("Input an integer number : ");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("It isn't an ugly number.");
	}
	else
		printf("It is an ugly number.");
}
