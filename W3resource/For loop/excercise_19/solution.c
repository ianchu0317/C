#include <stdio.h>

int main()
{
	float total, x=1.0;
	int terms;

	printf("[+] Input the number of terms : ");
	scanf("%d", &terms);

	printf("\n");

	for (int i=1; i<= terms; i++)
	{
		printf("1/%d + ", i);
		total += 1/x;
		x++;
	}

	printf("\nSum of Series up to 5 terms : %f", total );

	return 0;

}
