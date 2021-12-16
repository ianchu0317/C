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
	fix(new_line);

	//Input the line number to replace
	printf("Input the line number to replace : ");
	scanf("%d", &line);

	//Create second file only for writing
	FILE *temp = fopen("temp.txt", "w");

	//Read char by char and write char by char into the second temp file
	char letter = fgetc(file);
	int current_line = 1, i=1;

/*
My first error was that it doesn't run the second if statement if i use
a variable called "i", because "i==0" and then it never will be run by the user
*/
/*
Second error: I want to eliminate the specified line
*/
	while (letter != EOF)
	{
		if (letter == '\n')
		{
			current_line += 1;
		}/*
		if (current_line == line)
		{
			fprintf(temp, "\n")
			i++;
			if (i == strlen())
			{
				current_line += 1;
			}
		}*/
		if (current_line == line /*&& i==1*/)
		{
			fprintf(temp, "\n");
			fprintf(temp, "%s", new_line);
			//fprintf(temp, "\n");
			current_line += 1;
			//This is to avoid running the loop again
			//i = 1;
		}
		else if (current_line == line + 1)
		{
			//Use the fprintf of above line
			fprintf(temp, "\n");
			current_line += 1;
		}
		else
		{
			fprintf(temp,"%c", letter);
		}

		letter = fgetc(file);
	}

	//Remove the original file, and replace the temporary file's name
	remove(name);
	rename("temp.txt", name);

	//Closing the files
	fclose(file);
	fclose(temp);

	//Expected output to the user
	printf("Replacement did succssfully..!!");


	return 0;
}


