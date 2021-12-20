#include <stdio.h>

int main()
{
	int numbers, total;
	printf("Enter quantity : ");
	scanf("%d", &numbers);

	printf("The even numbers are : ");
	for (int i=2, counter=1; counter<=numbers; i += 2, counter++)
	{
		printf("%d ",i);
		total += i;
	}

	printf("\nThe Sum of even Natural up to %d terms : %d", numbers, total);
	return 0;

}
