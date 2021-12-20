#include <stdio.h>
#include <stdlib.h>

int check_array(int, int, int, int*);

int main()
{
	int n;
	printf("Input the number of elements to be stored in the array : ");
	scanf("%d", &n);
	__fpurge(stdin);

	int array[n];

	printf("Input %d elements in the array : \n", n);
	for (int i = 1; i <= n; i++) {
		printf("element - %d : ", i-1);
		scanf("%d", &array[i-1]);
		__fpurge(stdin);
	}


	int largest = 0;
	int counter = 1;
	largest = check_array(largest, counter, n, array);

	printf("\nThe largest element of an array is : %d", largest);
	return 0;
}


int check_array(int largest, int counter, int limit, int *array)
{
	if (array[counter] > largest) {
		largest = array[counter-1];
	}

	if (counter == limit) {
		return largest;
	}

	counter++;
	check_array(largest, counter, limit, array);
}
