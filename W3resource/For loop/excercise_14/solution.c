#include <stdio.h>

int main()
{
	int row, pattern=1;
	printf("Enter row number : ");
	scanf("%d", &row);

	for (int i=1; i<=row; i++)
	{
		//Print space
		for (int x=1; x <= row-i; x++)
		{
			printf(" ");
		}

		//Print the asterisc
		for (int z=1; z<=i; z++)
		{
			printf("* ");
		}
		printf("\n");

	}
	return 0;
}
