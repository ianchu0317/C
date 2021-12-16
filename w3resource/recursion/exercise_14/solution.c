#include <stdio.h>
#include <stdlib.h>

int *check(int, int *, int *);
void print(int *, int);

int main()
{
	int range;
	printf("Input the range to print starting from 1 : ");
	scanf("%d", &range);
	__fpurge(stdin);

	int *even = (int *) malloc(1 * sizeof(int));
	int *odd = (int *) malloc(1 * sizeof(int));

	even, odd = check(range, even, odd);

	printf("\nAll even numbers from 1 to %d are : ", range);
	print(even, range);
	printf("\nAll odd numbers from 1 to %d are : ", range);
	print(odd, range);
printf("Even : %p\nOdd : %p", even, odd);
	free(even);
	free(odd);

	return 0;
}

int *check(int range, int *even, int *odd)
{
	static int i = 1, even_c = 1, odd_c = 1;

	if (i <= range)
	{
		printf("##%d##\n", i);
		if (i % 2 == 0) {
			even_c += 1;
			printf("- Even : %d, even_c = %d\n", i, even_c);
			even = (int *) realloc(even, (sizeof(even) + sizeof (int)));
			even[even_c - 1] = i;
		}
		else {
			odd_c += 1;
			printf("- Odd : %d, odd_c = %d\n", i, odd_c);
			odd = (int *) realloc(odd, (sizeof(odd) + sizeof(int)));
			odd[odd_c - 1] = i;
		}

		i++;

		check(range, even, odd);
	}
	else{
		return even, odd;
	}
}

void print(int *array, int range)
{
	for (int i = 1; i <= range; i++)
	{
		if (array[i-1] == 0) {
			break;
		}

		printf("%d ", array[i-1]);
	}
}
