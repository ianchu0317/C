#include <stdio.h>

int main()
{
	int total, numbers[10];
	float average;

	printf("Input the 10 numbers : \n");
	for (int i = 0; i<=9; i++)
	{
		printf("Number-%d : ", i+1);
		scanf("%d", (numbers+i));
		total += *(numbers +i) ;
	}

	average = total/10;

	printf("The sum of 10 numbers is : %d\n", total);
	printf("The Average is : %f", average);

	return 0;

}
