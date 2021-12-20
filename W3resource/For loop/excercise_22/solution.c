#include <stdio.h>


int main()
{
	int terms; char number[10000];
	printf("Input the number of rows : ");
	scanf("%d", &terms);

	for (int i=1; i<=terms; i++)
	{
		if (i%2 == 0)
		{
			number[i-1] = '0';
			printf("%s", number);
		}
		else if (i%2 != 0)
		{
			number[i-1] = '1';
			printf("%s", number);
		}

		printf("\n");
	}

	return 0;

}
