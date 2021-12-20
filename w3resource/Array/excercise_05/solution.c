#include <stdio.h>


int main()
{
	// Get the array size
	int store;
	printf("Input the number of elements to be stored in the array : ");
	scanf("%d", &store);

	//Get the array content
	int array[store];
	printf("Input %d elements in the array : \n", store);
	for (int i=1; i<=store; i++)
	{
		printf("element - %d :", i);
		scanf("%d", array + i - 1);
	}

	//Check if there is duplicated
	int duplicated=0;
	for (int i=1; i<=store; i++)
	{
		for (int x=1; i<=store; i++)
		{
			if ((x!=i) && (array[i] == array[x]))
			{
				duplicated+=1;
			}
			else
			{
				continue;
			}
		}
	}
	//Print total duplicated numbers
	printf("Total number of duplicate elements found in the array is : %d", duplicated);
	return 0;
}
