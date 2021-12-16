#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Define max lenght
#define max 256

//Declare global variables
char name[max];
char new_line[max];
int line;

int main()
{
	//Input the file name to work with
	printf("Input the file name to be opened : ");
	fgets(name, max, stdin);
	name[strlen(name)-1] = '\0';

	//Try to open the file by entered name
	FILE *file = fopen(name, "r");
	if (file == NULL)
	{
		printf("[!] Cannot open the requested file");
		fclose(file);
		exit(0);
	}

	//Input the new line content
	printf("Input the new line content : ");
	fgets(new_line, max, stdin);

	//Input the line number
	printf("Input the line number to delete : ");
	scanf("%d", &line);


	//Create the temporary file
	FILE *temp = fopen("temp.txt", "w");
	if (temp == NULL)
	{
		printf("[!] Cannot create the temporary file");
		fclose(temp);
		exit(0);
	}



	char content[max];
	int current_line = 1;

	while(!feof(file))
	{
		//Get the value and write into the new file
		fgets(content, max, file);

		//If the file is not in the end
		if (!feof(file))
		{
			//If the current line is the one that the user want to change, then write the new line content
			if (current_line == line)
			{
				fprintf(temp, "%s", new_line);
			}
			//Else, write the normal content.
			else
			{
				fprintf(temp, "%s", content);
			}

			current_line += 1;
		}
	}

	fclose(file);
	fclose(temp);
	printf("Replacement succesfull !!");


	return 0;
}
