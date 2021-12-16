#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 100

char name[max]; //File name to be open
int line; //Line to remove

//fix the fgets character
void fix(char *string)
{
	for (int i = 1; i<=strlen(string); i++)
	{
		if (string[i-1]=='\n')
		{
			string[i-1] = '\0';
		}
	}
}


int main()
{
	//Get user input file name
	printf("Input the file name to be opened : ");
	fgets(name, sizeof(name), stdin);
	fix(name);
	//Get user input the line to remove
	printf("Input the line you want to remove : ");
	scanf("%d", &line);


	//Try to create file pointer and open the file by name
	FILE *file = fopen(name, "r");

	//If the file is null; then close the file and exit the program
	if (file == NULL)
	{
		printf("[!] Failed to open file");
		fclose(file);
		exit(0);
	}

	//Current letter and a counter of the current line
	char letter = getc(file);
	int current_line = 1, i=0;
	char content[max];

	while (letter != EOF)
	{
		if (letter == '\n')
		{
			current_line += 1;
		}
		if (current_line != line)
		{
			content[i] = letter;
			i++;
		}

		letter = getc(file);
	}

	fclose(file);

	//Create a new pointer and open the same file, overwriting its content
	FILE *new_file = fopen(name, "w");
	//write the content to the file
	fprintf(new_file,"%s", content);

	//Print the content
	printf("The new content of the file is : \n%s", content);
	fclose(new_file); //Close the new file

	return 0;
}
