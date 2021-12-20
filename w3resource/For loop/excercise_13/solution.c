#include <stdio.h>

int main()
{
	int row, pattern=1, s;

	printf("Enter the row number : ");
	scanf("%d", &row);

	for (int i=1; i<=row; i++)
	{
		for (s=1; s <= row-i; s++)
                {
                        printf(" ");
                }

	        for (int x=1; x<=i; x++)
                {
                        printf("%d ", pattern);
                        pattern++;
                }

		printf("\n");
	}

	return 0;
}
