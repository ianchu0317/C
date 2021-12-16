#include <stdio.h>
#include <stdlib.h>

int check(int counter, int result);

int main()
{
	int number; // Number variable
	printf("Input a number : ");	// Print what user need to do
	scanf("%d", &number); // Input the variable value
	__fpurge(stdin); // Clean the buffer

	int counter = 1; // Digits counter
	counter = check(counter, number); // Run the function to checks

	// Print the result
	printf("The number of digits in the number is : %d", counter);

	return 0;
}


int check(int counter, int rest)
{
	// Print the process
	printf("%d / %d = %d\n", rest, 10, rest/10);
	/*
	The C programming language doesn't have float if you're using integer.
	For exemple, 15/10 Will return 1 and not 1.5.
		     5/10 will return 0.
	So, what we can do is just using recursion until it return 0 
	*/
	if (rest/10 == 0)
	{
		return counter;
	}

	// Counter += 1
	counter++;
	check(counter, rest/10); //Run recursion
}
