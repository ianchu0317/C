#include <stdio.h>
#include <stdlib.h>

int print(int i, int n, int *array);

int main()
{
	int n;
	printf("Input the number of elements to be stored in the array : ");
	scanf("%d", &n);
	__fpurge(stdin);

	int array[n];

	printf("\nInput %d elements in the array : \n", n);
	for (int i = 1; i <= n; i++)
	{
		printf("element - %d : ", i-1);
		scanf("%d", (array + i - 1));
		__fpurge(stdin);
	}

	int i = 1;
	printf("The elements in the array are : ");
	print(i, n, array);

	return 0;
}



int print(int i, int n, int *array)
{
	while(i <= n)
	{
		printf("%d ", array[i-1]);
		i++;
	}
}
