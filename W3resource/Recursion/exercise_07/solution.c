#include <stdio.h>
#include <stdlib.h>


int check(int, int, int, int, int);

int main()
{

	int number_1;
	printf("Input 1st number: ");
	scanf("%d", &number_1);

	int number_2;
	printf("Input 2nd number: ");
	scanf("%d", &number_2);

	int smallest;

	if (number_1 <= number_2) {
		smallest = number_1;
	}
	else {
		smallest = number_2;
	}

	int GCD = 0;
	GCD = check(1, GCD, number_1, number_2, smallest);

	printf("THe GCD of %d and %d is: %d", number_1, number_2, GCD);
	return 0;
}

int check(int i, int GCD, int number_1, int number_2, int smallest)
{
	printf("%d\n", i);
	if ((number_1 % i == 0) && (number_2 % i == 0)) {
		GCD = i;
	}

	if (i == smallest) {
		return GCD;
	}

	i++;
	check(i, GCD, number_1, number_2, smallest);
}
