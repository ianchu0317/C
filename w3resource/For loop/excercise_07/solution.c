#include <stdio.h>

int main()
{
	int n, i, x;
	printf("Input up to the table number starting from 1 : ");
	scanf("%d", &n);

	for (i=1; i<=n; i++)
	{
		printf("\n\nTable of %i:\n", i);
		for ( x=1; x<=10; x++)
		{
			printf("%d x %d = %d\n", i, x, i*x);
		}
		x = 0;
	}
}

