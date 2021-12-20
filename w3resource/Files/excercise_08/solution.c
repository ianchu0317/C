#include <stdio.h>
#include <string.h>
#include <stdlib.h>



#define max 100


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

void read(FILE *);

int main()
{
	//User input the information
	char name[max]; int line;
	printf("Input the file name to be opened : ");
	fgets(name, max, stdin);
	fix(name);
	printf("Input the line you want to remove : ");
	scanf("%d", &line);

	FILE *file = fopen(name, "r");

	// Exit program if can't open requested file
	if (file == NULL)
	{
		printf("[!] Can't open the requested file !");
		fclose(file);
		exit(0);
	}

	//Proceed if can open the file
	char new_content[max];
	int current_line = 1, i=0;
	char letter = fgetc(file);

	while (letter != EOF)
	{
		if (letter == '\n')
		{
			current_line += 1;
		}
		while (current_line != line)
		{
			new_content[i] = letter;
			i += 1;
		}

		letter = getc(file);
	}

	fclose(file);
	FILE *file = fopen(name, "w");
	
	fprintf(file, new_content);
	fclose(file);
	FILE *file = fopen(name, "r")
	printf("The content of the file %s is : \n", name);
	read(file);
	fclose(file);
	return 0;
}


void read(FILE *file)
{
	char str = getc(file);
	while (str != EOF)
	{
		printf("%c", str);
	}
}
