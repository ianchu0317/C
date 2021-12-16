#include <stdio.h>
#include <string.h>
#include <ctype.h>

void fix(char *string)
{
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1] == '\n')
		{
			string[i-1] == '\0';
		}
	}
}


int main()
{
	char string[100];
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);
	fix(string);

	char new_char[100];
	for (int i=1; i<=strlen(string); i++)
	{
		if (islower(string[i-1]))
		{
			new_char[i-1] = toupper(string[i-1]);
		}
		else //(isupper(string[i-1]))
		{
			new_char[i-1] = tolower(string[i-1]);
		}
	}

	printf("The given sentence is : %s\nAfter Case changed the string is : %s", string, new_char);
	return 0;
}
