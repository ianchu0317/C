#include <stdio.h>
#include <stdlib.h>

int main()
{
	int terms, total;
	char total_[100000];
	printf("[+] Input the number of terms : ");
	scanf("%d", &terms);

	for (int i=1; i<=terms; i++)
	{
		for (int x=1; x<=i; x++)
		{
			printf("9");
			total_[i-1] = '9';
		}

		printf(" ");
		total += atoi(total_);
	}

	printf("\nThe sum of the series = %d", total);
	return 0;
}
