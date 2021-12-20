#include <stdio.h>

int check(int[], int, int);

int main()
{
	int n;
	printf("Input the number of elements to store in the array : ");
	scanf("%d", &n);
	__fpurge(stdin);

	int array[n];
	for (int i = 1; i <= n; i++)
	{
		printf("element - %d : ", i-1);
		scanf("%d", (array + i - 1));
		__fpurge(stdin);
	}

	int search;
	printf("\nInput the number to search : ");
	scanf("%d", &search);
	__fpurge(stdin);

	int len = sizeof(array) / sizeof(array[0]);
	int found = check(array, search, len);

	if (found) {
		printf("The search number found in the array.");
	}
	else {
		printf("The search number is not found in the array.");
	}
	return 0;
}

int check(int array[], int search, int len)
{
	static int i = 1;

	while (i <= len)
	{
		if (array[i-1] == search) {
			return 1;
			break;
		}

		i++;
		check(array, search, len);
	}

	return 0;
}
