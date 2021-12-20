#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Define max macro
#define max 256
//Create 3 variables: one for the original file name, one for the new file and the last one for the file content
char name[max], new_name[max], content[max];
//Create two file pointer: one for original file and the other one for the new file
FILE *file, *new_file;

void exit_program();
void output();

int main()
{
	//Input the first file name and try to open the file
	printf("Input the source file name : ");
	fgets(name, max, stdin);
	name[strlen(name)-1] = '\0';
	file = fopen(name, "r");
	if (file == NULL)
	{
		exit_program();
	}

	//Input the new file name and try to open the file
	printf("Input the new file name : ");
	fgets(new_name, max, stdin);
	new_name[strlen(new_name)-1] = '\0';
	new_file = fopen(new_name, "w");
	if (new_file == NULL)
	{
		exit_program();
	}


	//Copy the file to the new file, line by line
	while (!feof(file))
	{
		fgets(content, sizeof(content), file);
		fprintf(new_file, "%s", content);
	}


	//Output the success status
	printf("The file %s copied successfully in the file %s\n", name, new_name);
	fclose(file);
	fclose(new_file);
	//Print the file content (content of the file)
	output();

	return 0;
}

//Exit the program if can't open/create the file
void exit_program()
{
	printf("[!] Can't open the file...");
	printf("Exiting...");
	exit(0);
}


void output()
{
	//Print the content of the file
	new_file = fopen(new_name, "r");
	printf("If you read the new file you will see the content of the file : \n");
	while (!feof(new_file))
	{
		fgets(content, max, new_file);
		printf("%s", content);
	}
	fclose(new_file);
}