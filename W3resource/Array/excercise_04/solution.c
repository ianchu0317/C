#include <stdio.h>

void copy(int *array_1, int *array_2)
{
	for (int i=1; i<=(sizeof(array_1)/sizeof(int)+1); i++)
	{
		array_2[i-1] = array_1[i-1];
	}

}


int main()
{
	int store;

	//Input array size
	printf("Input the number of elements to be stored in the array : ");
	scanf("%d", &store);
	int array_1[store], array_2[store];

	//Store the array
	printf("Input %d elements in the array : \n");
	for (int i=1; i<=store; i++)
	{
		printf("element - %d : ", i);
		scanf("%d", &array_1[i-1]);
	}

	//Print the first array
	printf("\n\nThe elements stored in the first array : \n");
	for (int i=1; i<=store; i++)
	{
		printf("%d ", array_1[i-1]);
	}

	//Copy the array
	copy(array_1, array_2);

	//print the second array
	printf("\nThe elements copied into the second array are : \n");
	for (int i=1; i<=store; i++)
	{
		printf("%d ", array_2[i-1]);
	}

	return 0;
}
