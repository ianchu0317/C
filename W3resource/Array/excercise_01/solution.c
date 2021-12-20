#include <stdio.h>

int main()
{
	int numbers[10];

	printf("Input 10 elements in the arrays : ");
	for (int i=1; i<=10; i++)
	{
		printf("\n element - %d : ", i);
		scanf("%d", (numbers + i-1));
	}

	printf("\n\nElements in the array are : ");
	for (int i=1; i<=10; i++)
	{
		printf("%d ", numbers[i-1]);
	}

	return 0;
}
