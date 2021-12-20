#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *array = (int *) malloc(7 * sizeof(int));

	for (int i = 1; i <= 7; i++)
	{
		array[i-1] = i;
	}

	for (int i = 1; i<= 8; i++)
	{
		printf("array[%d] = %d\n", i-1, array[i-1]);
	}

	free(array);
	return 0;
}
