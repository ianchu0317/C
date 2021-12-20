#include <stdio.h>
#include <stdlib.h>

/*
	In this program i was trying to print out the limit of an array,
	with the purpose of analyse the output and find the way to know the size or the ending of an int array.
*/
int main()
{
	int number;
	printf("Input elements : ");
	scanf("%d", &number);
	__fpurge(stdin);

	int array[number];
	for (int i = 1; i <= number; i++)
	{
		printf("element[%d] : ", (i-1));
		scanf("%d", (array + i - 1));
		__fpurge(stdin);
	}
	for (int i = 1; i <= (number + 1); i++)
        {
                printf("element[%d] : %d\n", (i - 1), array[i-1]);
        }
}
