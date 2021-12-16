#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max_size 100

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
	char name[max_size];
	printf("Input the file name to be opened : ");
	fgets(name, max_size, stdin);
	fix(name);

	FILE *file = fopen(name, "r");

	if (file == NULL)
	{
		printf("[!] The requested file cannot be opened !");
		exit(0);
	}

	//Print the file content
	printf("The content of the file %s are : \n", name);
	char letter = getc(file);
	int words = 0, characters = 0;

	while (letter != EOF)
	{
		printf("%c", letter);

		//If there is any space or line, its another word
		if (letter == '\n' || letter == ' ')
		{
			words += 1;
		}

		letter = getc(file);
		characters += 1;
	}
	fclose(file);

	printf("\nThe number of words in the file %s are : %d\n", name, words);
	printf("The number of characters in the file %s are : %d", name, characters);
	return 0;
}
