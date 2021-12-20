#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Check if can open the file  
void check_file(FILE *ptr, char *filename);
//Encrypt the file
void encrypt_file(FILE *temp, FILE *file, char *filename);
//Encrypt the character
int encrypt(int ascii);
//Read the file content
void read();


int main()
{
	FILE *temp = fopen("temp.txt", "w");
	//Check if create the temp file
	check_file(temp, "temp.txt");
	//Input the name of the file and try to open 
	char name[20];
	printf("Input the name of the file to encrypt : ");
	fgets(name, sizeof name, stdin);
	name[strlen(name)-1] = '\0';
	FILE *file = fopen(name, "r");
	//Check the file status
	check_file(file, name);
	//Encrypt the file
	encrypt_file(temp, file, name);
	fclose(file);
	fclose(temp);
	//Read the file content
	read(temp, name);

	fclose(temp);
	return 0;
}

//Check the file status
void check_file(FILE *ptr, char *filename)
{
	if (ptr == NULL)
	{
		printf("[!] Failed opening the file %s !", filename);
		exit(1);
	}
}

//Encrypt the file
void encrypt_file(FILE *temp, FILE *file, char *filename)
{
	char str = fgetc(file);
	
	while (str != EOF)
	{
		fprintf(temp, "%c", (char)encrypt((int)str));
		printf( "%c", (char)encrypt((int)str));
		str = fgetc(file);
	}

	printf("File %s successfully encrypted ..!!");

	//Try to remove the original and rename the temp file into the original
/*	if ((remove(filename)) != 0)
	{
		printf("Error in removing the file !");
	}
	//Rename the file
	if (rename("temp.txt", filename) != 0)
	{
		printf("Error in renaming the file");
	}*/
}

//Encrypt the character
int encrypt(int ascii)
{
	return ascii+26;
}

//Read the file
void read(FILE *ptr, char *filename)
{
	//Open the encrypted file for reading
	ptr = fopen(filename, "r");
	//Variable for the file content
	char content[30];
	printf("If you read the file %s you will see the following :\n", filename);
	//Print the content of the encrypted file
	while (!feof(ptr))
	{
		fgets(content, sizeof content, ptr);
		if (!feof(ptr))
		{
			printf(content);
		}
	}
	fclose(ptr);
}