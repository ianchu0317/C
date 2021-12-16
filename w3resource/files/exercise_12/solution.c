#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define max 256

//One file for the first file, the second one and the last one for the merged file
FILE *file, *file_1, *new_file;

//One for the file content, and the others for the file names
char content[max], file_name[20], file_name_1[20], new_name[20];


//Exit the program
void exit_program();

//Merge the file
void merge();
//Read the merged final file
void read();

int main()
{
	//Enter the first file name
	printf("Input the 1st file name : ");
	fgets(file_name, sizeof content, stdin);
	file_name[strlen(file_name)-1] = '\0';
	file = fopen(file_name, "r");
	if (file == NULL)
	{
		exit_program();
	}

	//Enter the second file name
	printf("Input the 2nd file name : ");
	fgets(file_name_1, sizeof file_name_1, stdin);
	file_name_1[strlen(file_name_1)-1] = '\0';
	file_1 = fopen(file_name_1, "r");
	if (file_1 == NULL)
	{
		exit_program();
	}

	//Enter the new file
	printf("Input the new file name where to merge the above two files : ");
	fgets(new_name, sizeof new_name, stdin);
	new_name[strlen(new_name)-1] = '\0';
	new_file = fopen(new_name, "w");
	if (new_name == NULL)
	{
		exit_program();
	}

	//Merge the both entered files content in only one content
	merge();

	//Close the file
	fclose(file);
	fclose(file_1);
	fclose(new_file);
	
	//Read and print the file content
	read();
	
	return 0;
}


void exit_program()
{
	printf("[!] Error\nExiting...");
	exit(1);

}


void merge()
{	

	while (!feof(file))
	{
		fgets(content, max, file);
		if (!feof(file))
		{
			fprintf(new_file,"%s", content);
		}
	}

	while (!feof(file_1))
	{
		fgets(content, max, file_1);
		if (!feof(file_1))
		{
			fprintf(new_file,"%s", content);
		}
	}
	printf("The two files merged into %s file successfully..!!\n", new_name);
}

void read()
{
	new_file = fopen(new_name, "r");
	while (!feof(new_file))
	{
		fgets(content, sizeof content, new_file);
		if (!feof(new_file))
		{
			printf("%s", content);
		}
	}

	fclose(new_file);
}