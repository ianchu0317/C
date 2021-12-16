#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	//Input the elemtnes and create the array
	int elements;
	char *array = (char *) calloc(2, sizeof(char));
	printf("Input total number of elements(1 to 100) : ");
	scanf("%d", &elements);

	for (int i=1; i<=elements; i++)
	{
		printf("Number %d: ", i);
		scanf("%d", (array + i-1));
		array = realloc(array, (i+2)*sizeof(char));
	}


	//Find the largest element
	int max = 0;
	for (int i=1; i<= elements; i++)
	{
		if (array[i-1] > max)
		{
			max = array[i-1];
		}
	}


	printf("The Largest element is : %d", max);

	free(array);
	return 0;
}
