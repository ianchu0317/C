#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Input the file name
	char name[20];
	printf("Input the file name to be opened : ");
	scanf("%s", name);

	//Counter of lines
	int counter = 0;

	//File pointer
	FILE *file = fopen(name, "r");

	if (file==NULL)
	{
		printf("File doesn't exist");
	}
	else
	{
		//int counter = 1;
		char str = fgetc(file);
		while (str!=EOF)
		{
			if (str == '\n')
				counter++;
			str=fgetc(file);
		}
	}

	printf("The lines in the file %s are : %d", name, counter);
	return 0;
}
