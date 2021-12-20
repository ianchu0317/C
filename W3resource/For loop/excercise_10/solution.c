#include <stdio.h>

int main()
{
	int row;
	printf("Enter row number : ");
	scanf("%d", &row);

	for (int i; i<=row; i++)
	{
		for (int x=1; x<=i; x++)
		{
			printf("%d", x);
		}
		printf("\n");
	}
	return 0;
}
