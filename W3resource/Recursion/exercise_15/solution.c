#include <stdio.h>
#include <stdlib.h>


int main()
{
	int rows_1, columns_1;
	printf("Input number of rows for the first matrix : ");
	scanf("%d", &rows_1);
	__fpurge(stdin);
	printf("Input number of columns for the first matrix : ");
	scanf("%d", &columns_1);
	__fpurge(stdin);

	int rows_2, columns_2;
	printf("Input number of rows for the second matrix : ");
	scanf("%d", &rows_2);
	__fpurge(stdin);
	printf("Input number of columns for the second matrix : ");
	scanf("%d", &columns_2);
	__fpurge(stdin);

	return 0;
}

