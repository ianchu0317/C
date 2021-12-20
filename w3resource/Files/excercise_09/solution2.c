#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define max 256

//Declare global variables
char name[max];
int line; //Line number to replace
char new_line[max]; //New line content


//Fix the fgets function
void fix(char *string)
{
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1]=='\n')
		{
			string[i-1]='\0';
		}
	}
}


int main()
{
	//Try first to enter the file to open
	printf("Input the file name to be opened : ");
	fgets(name, max, stdin);
	fix(name);

	//Try to open the file only for reading
	FILE *file = fopen(name, "r");

	//Exit program if cannot open the file
	if (file == NULL)
	{
		printf("Can't open the requested file !\nExiting...");
		fclose(file);
		exit(0);
	}

	//Enter the new line content
	printf("Input the content of the new file : " );
	fgets(new_line, max, stdin);

	//Input the line number to replace
	printf("Input the line number to replace : ");
	scanf("%d", &line);

	//Create second file only for writing
	FILE *temp = fopen("temp.txt", "w");

	//Read char by char and write char by char into the second temp file
	char letter = getc(file);
	int current_line = 1, i=0;
/*
My first error was that it doesn't run the second if statement if i use
a variable called "i", because "i==0" and then it never will be run by the user
*/
/*
Second error: I want to eliminate the specified line
*/
	//This first while loop is deleting the line
	while (letter != EOF)
	{
		//Calculate the current line
		if (letter == '\n')
		{
			current_line += 1;
			//print the line spacing
			if (current_line == line)
			{
				fprintf(temp, "%c", '\n');
			}
		}

		if (current_line != line)
		{
			fprintf(temp, "%c", letter);
		}

		else
		{
			continue;
		}

		letter = getc(file);
	}
	fclose(file);
	fclose(temp);

	//This second while loop is adding the new_line
	FILE *new_file = fopen("temp.txt", "r");
	FILE *new_temp = fopen("temp2.txt", "w");

	letter = getc(new_file); 
	current_line = 0;
	while (letter != EOF)
	{
		if (letter == '\n')
		{
			current_line += 1;
			if (current_line == line)
			{
				fprintf(new_temp, "%c", '\n');
			}
		}
		if (current_line == line)
		{
			fprintf(new_temp, "%s", new_line);
			current_line += 1;
		}
		else
		{
			fprintf(temp, "%c", letter);
		}
		letter = getc(new_file);

	}

	//Remove the original file and replace the temporary files name
	//remove(name);
	//rename("temp.txt", name);

	//Closing the files
	fclose(new_file);
	fclose(new_temp);

	//Expected output to the user
	printf("Replacement did succssfully..!!");


	return 0;
}
