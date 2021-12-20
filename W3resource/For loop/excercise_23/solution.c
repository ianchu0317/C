#include <stdio.h>

int main()
{
	int x, terms; float sum;

	printf("Input the value of x : ");
	scanf("%d", &x);
	printf("Input the value of terms : ");
	scanf("%d", &terms);

	sum = 1+(float)x;

	for (int i=1; i<=terms; i++)
	{
		sum +=  x *  i / (float) i;
	}

	printf("The sum is : %f", sum);


	return 0;

}
