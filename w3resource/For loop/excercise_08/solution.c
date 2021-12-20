#include <stdio.h>

int main()
{
	int terms, counter=0, total; //int i = 1 if we want to use while loop
	printf("Input number of terms : ");
	scanf("%d", &terms);

	printf("The odd numbers are : ");

	for (int i = 1; counter < terms; i+=2)
	{
		printf("%d ", i);
		counter += 1;
		total += i;
	}

	/*
	while (counter < terms)
	{
	printf("%d ", i);
	counter++;
	total += i;
	i += 2;
	}*/

	printf("\nThe Sum of odd Natural Number up to %d terms : %d", terms, total);
	return 0;
}
