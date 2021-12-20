#include <stdio.h>

int main()
{
	int rows;
	printf("Enter the rows : ");
	scanf("%d", &rows);

	for (int i=1; i<=rows; i++)
	{
		for (int x = 1; x <= i; x++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
