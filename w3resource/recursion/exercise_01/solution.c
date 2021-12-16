#include <stdio.h>
#include <stdlib.h>

int add(int i)
{
	printf("%d ", i);
	i++;
	return i;
}

int main()
{
	int i = 1;
	printf("The natural numbers are : ");
	while (i<=50)
	{
		i = add(i);
	}

	return 0;
}
