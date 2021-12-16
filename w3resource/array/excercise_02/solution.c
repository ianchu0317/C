#include <stdio.h>
#include <stdlib.h>


int main()
{
	int store;

	printf("Input the number of elemets to store in the array : ");
	scanf("%d", &store);

	int array[store];
	printf("Input %d number of elements in the array : ", store);
	for (int i=1; i<=store; i++)
	{
		printf("\nelement - %d : ", i);
		scanf("%d", (array + (i-1)));
	}

	printf("\n\nThe values store into the array are : \n");
	for (int i=1; i<=store; i++)
	{
		printf("%d ", array[i-1]);
	}

	printf("\n\nThe values store into the array in reverse are : \n");
	for (int i=1; i<=store; i++)
	{
		printf("%d ", array[ sizeof(array) / sizeof(int) - i]);
	}

	return 0;

}
