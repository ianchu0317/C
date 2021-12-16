#include <stdio.h>

int main()
{
	int row, pattern=1;

	printf("Enter the row number : ");
	scanf("%d", &row);

	for (int i=1; i<=row; i++)
	{
		for (int x=1; x<=i; x++)
		{
			printf("%d ", pattern);
			pattern ++;
		}
		printf("\n");
	}


	return 0;
}
