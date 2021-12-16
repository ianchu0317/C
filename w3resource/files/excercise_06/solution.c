#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//User input file name
	char name[100];
	printf("Input the file name to be opened : ");
	scanf("%s", name);

	//File pointer and counters
	int lines = 0;	//Count lines
	char content[100];

	FILE *file = fopen(name, "r");
	if (file == NULL)
	{
		printf("The requested file doesn't exist");
	}
	else
	{
		int i=0;
		char str = fgetc(file);
		while (str!=EOF)
		{
			if (str == '\n')
				lines++;

			content[i] = str;
			str = fgetc(file);
			i++;
		}
	}
	content[strlen(content)-1] = '\0';

	//Print the result
	printf("The content of the file %s are : \n%s\nThe lines in the file are : %d", name, content, lines);
	return 0;
}
