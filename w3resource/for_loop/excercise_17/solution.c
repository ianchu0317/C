#include <stdio.h>

int main()
{
	int rows;
	printf("[+] Enter the rows number : ");
	scanf("%d", &rows);

	for (int i=1; i<=rows; i++)
	{
		//Print space
		for (int x=1; x<=rows-i; x++)
		{
			printf(" ");
		}

		//Print the number
		for (int x=1; x<=i; x++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
