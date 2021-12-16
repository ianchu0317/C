#include <stdio.h>

int main()
{
	int sum, i;

	printf("The first 10 natural number is :\n");
	for (i; i<=10; i++)
	{
		printf("%d ", i);
		sum += i;
	}
	printf("\nThe Sum is : %d", sum);
	return 0;
}
