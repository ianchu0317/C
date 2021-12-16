#include <stdio.h>

int main()
{
	int row;

	printf("Enter the row number : ");
	scanf("%d", &row);

	for (int i=1; i<=row; i++)
	{
		for (int x=1; x<=i; x++)
		{
			printf("%d", i);
		}
		printf("\n");
	}

	return 0;
}
