#include <stdio.h>
#include <stdlib.h>


int main()
{

	int *test_1 = (int *) malloc(4*sizeof(int));

	/*for (int i = 1; i <= 5; i++)
	{
		printf("Test[%d] = %p\n", i-1, &test[i-1]);
	}*/

	int arrays = (sizeof(test_1) / sizeof(test_1[0]));
	printf("Have %d items", arrays);

	free(test_1);
	return 0;
}
