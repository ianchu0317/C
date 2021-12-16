#include <stdio.h>

int main()
{
	int store, total=0;

	printf("input the number of elemets to be stored in the array : ");
	scanf("%d", &store);

	int array[store];
	printf("Input %d elements in the array :", store);
	for (int i=1; i<=store; i++)
	{
		printf("\nelement - %d : ", i);
		scanf("%d", &array[i-1]);
		total += array[i-1];
	}
	printf("\n\nSum of all elements stored in the array is : %d", total);
	return 0;
}
