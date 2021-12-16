#include <stdio.h>
#include <string.h>
#include <ctype.h>


void fix(char *string)
{
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1]=='\n')
			string[i-1]='\0';
	}
}


int main()
{
	char string[100];
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);
	fix(string);

	char new_string[100];
	int counter=1;
	for (int i=1; i<=strlen(string); i++)
	{
		if (isalpha(string[i-1]))
		{
			new_string[counter-1] = string[i-1];
			counter++;
		}
	}

	fix(new_string);
	printf("After removing the Output String : %s", new_string);
	return 0;
}
