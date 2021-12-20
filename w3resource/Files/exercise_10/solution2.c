#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define max 256

//Declare variables for file name, file pointer and the line quantity
char name[max];
FILE *file;
int lines;
char content[max];
char line_content[] = "test line";


void read();



int main()
{
	//Input the file name
	printf("Input the file name to be opened : ");
	fgets(name, max, stdin);
	name[strlen(name)-1] = '\0';

	//Try to open the file or exit if cannot open the requested file
	file = fopen(name, "r");
	if (file == NULL)
	{
		printf("[!] Failed to open the requested file...");
		fclose(file);
		exit(0);
	}

	//Input the lines to add quantity
	printf("Input the number of lines to add : ");
	scanf("%d", &lines);


	//Get the current total line
	int total_lines = 1;
	char str = fgetc(file);
	while (str != EOF)
	{
		if (str == '\n')
		{
			total_lines += 1;
		}
		str = fgetc(file);
	}


	//Get the lines and write it
	printf("The lines are : \n");

	//Open again the same file but for writing
	fclose(file);
	file = fopen(name, "a");
	fprintf(file, "\n");

	//A for loop to loop each line
	for(int i = 1; i<=lines; i++, total_lines++)
	{
		fgets(line_content, max, file);
		printf("%s %d\n", line_content, total_lines);
		fprintf(file, "\n%s %d", line_content, total_lines);
	}

	fclose(file);

	read();

	return 0;
}


//Read the file
void read()
{
	FILE *file = fopen(name, "r");

	printf("The content of the file %s is:\n", name);
	//Loop by line
	while (!feof(file))
	{
		fgets(content, max, file);
		printf(content);
	}
	fclose(file);
}
