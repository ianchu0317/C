#include <stdio.h>
#include <stdlib.h>

int add(int, int, int);

int main()
{
	int i=1;
	int n;
	int sum = 0;
	printf("Input the last number of the range starting from 1 : ");
	scanf("%d", &n);
	__fpurge(stdin);

	sum = add(sum, i, n);

	printf("%d", sum);

	return 0;
}


int add(int sum, int i, int n)
{
	while (i<=n)
	{
		sum += i;
		i++;
		add(sum, i, n);
	}
	return sum;
}
