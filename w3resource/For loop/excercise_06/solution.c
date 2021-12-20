#include <stdio.h>

int main()
{
	int n;
	printf("Input the number (Table to be calculated) : ");
	scanf("%d", &n);

	for (int i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i);
	}

	return 0;
}
