#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fix(char *string)
{
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1] == '\n')
		{
			string[i-1] = '\0';
		}
	}
}

int main()
{
	char name[100];
	printf("Input the file name to be opened : ");
	fgets(name, sizeof(name), stdin);
	fix(name);
	FILE *file = fopen(name, "r");
	if (file == NULL)
	{
		printf("File doesn't exist");
	}
	else
	{
		char str = fgetc(file);
		printf("The content of the file %s is : \n", name);
		while (str != EOF)
		{
			printf("%c", str);
			str = fgetc(file);
		}
		fclose(file);
	}
	return 0;
}
