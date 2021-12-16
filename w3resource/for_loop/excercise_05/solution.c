#include <stdio.h>

void cube(int);

int main()
{
	int terms;

	printf("Input number of terms : ");
	scanf("%d", &terms);
	for (int i=1; i <= terms; i++)
	{
		printf("Number is : %d and cube of the %d is : ", i, i);
		cube(i);
		printf("\n");
	}

	return 0;
}


void cube(int n)
{
	printf("%d", n * n * n);
}
