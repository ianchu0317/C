#include <stdio.h>

int main()
{
	//Ask how many numbers
	int elements;
	printf("Input the numbers of elemets to store in the array : ");
	scanf("%d", &elements);

	//Create storage of numbers
	int numbers[elements], i;

	//Storage user input numbers
	printf("Input %d numbers of elemets in the array : \n", elements);
	for (i=0; i<elements; i++)
	{
		printf("element - %d : ", i);
		scanf("%d", numbers+i);
	}


	//Output stored  numbers
	printf("The elements you entered are : \n");
	for (i=0; i<elements; i++)
	{
		printf("element - %d : %d \n", i, *(numbers+i));
	}
	return 0;


}
