#include <stdio.h>

int fact(int, int, int);

int main()
{
	int number;
	printf("Input a number : ");
	scanf("%d", &number);

	int factorial = 1;

	factorial = fact(1, number, factorial);

	printf("\nThe factorial of %d is %d", number, factorial);

	return 0;
}

int fact(int counter, int number, int factorial)
{
	if (counter <= number)
	{
		printf("%d * %d = %d\n", factorial, counter, counter*factorial);
		factorial = factorial * counter;
		counter++;
		fact(counter, number, factorial);
	}
	else
	{
		return factorial;
	}
}
