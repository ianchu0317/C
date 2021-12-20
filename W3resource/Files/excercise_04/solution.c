#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[100];
	printf("Input the file name to be openend : ");
	scanf("%s", name);


	FILE *file = fopen(name, "r");
	if (file == NULL)
	{
		printf("The file don't exist");
	}
	else
	{
		char str = fgetc(file);
		int i=0;
		char content[100];
		while (str!=EOF)
		{
			content[i] = str;
			i++;
			str = fgetc(file);
		}
		printf("The content of the file %s are : \n%s", name, content );
	}

	return 0;
}
