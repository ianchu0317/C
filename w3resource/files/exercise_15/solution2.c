#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void del(char*);

int main()
{
	//Get the file name
	char filename[20];
	printf("Input the name of file to delete : ");
	fgets(filename, sizeof filename, stdin);
	filename[strlen(filename)-1] = '\0';

	if (remove(filename) == 0)
	{
		printf("The file %s is deleted successfully..!!", filename);
	}
	else
	{
		printf("Ocurred an error while deleting");
	}
	return 0;
}


//Delete the file
void del(char *filename)
{
	remove(filename);
}
