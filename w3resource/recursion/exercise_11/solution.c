#include <stdio.h>
#include <stdlib.h>

//int *bin(int, int *, int);
int *bin(int *, int);

int main()
{
	int number;
	printf("Input any decimal number : ");
	scanf("%d", &number);
	__fpurge(stdin);

	int *binary = (int *) malloc(1 * sizeof(int));
	//binary = bin(1, binary, number);

	binary = bin(binary, number);

	printf("The Binary value of decimal no. %d is : ", number);

	for (int i=1; i <= (sizeof(binary) / sizeof(binary[0])); i++)
	{
		printf("%d", binary[(sizeof(binary) / sizeof(binary[0])) - 1]);
	}


	free(binary);
	return 0;
}

/*
int *bin(int counter, int *binary, int number)
{
	if (number != 0 || number != 1)
	{
		int i = 1;
		do
		{
			//printf("%d / %d = %d\n", number, i, number % i);
			/*if (i >= number)
			{
				break;
			}
			i++;
		} while ((number % i != 1) || (number % i != 0));

		counter++;
		binary = realloc(binary, (counter + 1) * sizeof(int));
		binary[counter - 1] = (number % i);
		bin(counter, binary, i);
	}
	else
	{
		C = counter;
		return binary;
	}
} */

int *bin(int *binary, int number)
{
	static int counter = 1;
	if (number > 1)
	{
		binary[counter - 1] = number % 2;
		counter++;
		binary = (int *) realloc(binary, counter * sizeof(int));
		bin(binary, number/2);
	}

	return binary;
}
