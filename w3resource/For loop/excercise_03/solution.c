#include <stdio.h>

int main()
{

	//Create variables
	int number, total;

	//User input the value
	printf("Test Data : ");
	scanf("%d", &number);

	//Print out the number
	for (int i = 1; i <= number; i++)
	{
		printf("%d ", i);
		total += i; 	//Store the total Sum
	}


	printf("\nThe Sum of Natural Number up to %d terms : %d", number, total);

	return 0;

}
