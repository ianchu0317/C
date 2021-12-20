#include <stdio.h>
#include <string.h>

void fix(char *string)
{
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1]=='\n')
		{
			string[i-1] == '\0';
		}
	}

}


int main()
{
	char string[100];
	printf("Input a sentence for the file : ");
	fgets(string, sizeof(string), stdin);
	fix(string);

	FILE *file = fopen("text.txt", "w");
	fprintf(file, string);
	fclose(file);

	printf("The file test.txt created successfully...!!");

	return 0;
}
