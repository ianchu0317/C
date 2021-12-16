#include <stdio.h>


int main()
{
	int rows;
	printf("[+] Enter the number of rows : ");
	scanf("%d", &rows);

	for (int i = 1; i<=rows; i++)
	{
		//Print out the space
		for (int x = 1; x<=rows-i; x++)
		{
			printf(" ");
		}
		for (int x = 1; x<=i*2-1; x++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
