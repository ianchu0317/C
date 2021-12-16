#include <stdio.h>
#include <stdlib.h>

int check(int);

int main()
{
	int number;
	printf("Input any positive number : ");
	scanf("%d", &number);

	int prime = check(number);

	if (prime){
		printf("The number %d is a prime number.", number);
	}
	else {
		printf("The number %d is not a prime number.", number);
	}

	return 0;
}


int check(int number)
{
	static int i = 2, divisor = 0;
	while (i < number) {
		printf("%d / %d = %d, divisor = %d\n", number, i, number%i, divisor);
		if (number % i == 0) {
			divisor += 1;
		}

		i++;
		check(number);
	}

	if (divisor > 0) {
		return 0;
	}
	else {
		return 1;
	}
}
