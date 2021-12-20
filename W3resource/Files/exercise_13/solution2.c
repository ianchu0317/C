#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//Check the file status
void check(FILE *file, char *filename);
//Read the file
void read(char *filename);


int main()
{
	//Input the file name and try to open the requested file
	char filename[20];
	printf("Input the name of file to encrypt : ");
	fgets(filename, sizeof filename, stdin);
	filename[strlen(filename)-1] = '\0'; //Fix the fgets last character
	FILE *file = fopen(filename, "r");
	check(file, filename);

	//Read char by char, encrypt it shift +36 and then write it into the new file
	FILE *new_file = fopen("temp.txt", "w");
	check(new_file, "temp.txts");

	char str = fgetc(file);
	while (str != EOF)
	{
		fprintf(new_file, "%c", (char) ((int) str + 36));
		str = fgetc(file);
	}

	printf("File %s successfully encrypted ..!!\n", filename);
	//Rename both files
	remove(filename);
	rename("temp.txt", filename);

	//Close the files
	fclose(file);
	fclose(new_file);

	read(filename);


	return 0;
}


//Check the file status
void check(FILE *file, char *filename)
{
	if (file == NULL)
	{
		printf("[!] Error opening the file %s...\n", filename);
		printf("[!] Exiting...!");
		exit(1);
	}
}

//Read the file line by line
void read(char *filename)
{
	//Open the file and check the status
	FILE *file = fopen(filename, "r");
	check(file, filename);

	printf("If you read the file %s you will see the following :\n ", filename);
	//Print the file content
	char content[100];
	while (!feof(file))
	{
		fgets(content, sizeof content, file);
		printf("%s", content);
	}

	//Close the file
	fclose(file);
}
