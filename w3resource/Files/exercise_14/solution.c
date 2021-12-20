#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Check if can open the file
void check_file(FILE *, char *);
//Read the file
void read(char*);

int main()
{
	//Enter the filename and check if can open the file
	char filename[20];
	printf("Input the name of file to decrypt : ");
	fgets(filename, sizeof filename, stdin);
	filename[strlen(filename)-1] = '\0';
	FILE *file = fopen(filename, "r");
	check_file(file, filename);

	//Create temporary file for writing
	FILE *temp = fopen("temp.txt", "w");
	check_file(temp, "temp.txt");

	//Read and encrypt the file line by line
	char str = fgetc(file);
	while (str != EOF)
	{
		fprintf(temp, "%c", (char) ((int) str - 36));
		str = fgetc(file);
	}

	//print
	printf("\nThe file %s decrypted successfully..!!\n\n", filename);
	fclose(temp);
	fclose(file);

	remove(filename);
	rename("temp.txt", filename);
	read(filename);

	return 0;
}


void check_file(FILE *file, char *filename)
{
	if (file == NULL)
	{
		printf("[!] Error opening the file %s !", filename);
		printf("Exiting...");
		exit(1);
	}
}


//Read the file
void read(char *filename)
{
	//Create the file pointer
	FILE *file = fopen(filename, "r");
	check_file(file, filename);
	printf("Now, if you read the file %s you will see the following :\n");
	char content[100]; //For the content of the file
	//Read line by line
	while (!feof(file))
	{
		fgets(content, sizeof content, file);
		if (!feof(file))
		{
			printf("%s", content);
		}
	}
	fclose(file);
}
