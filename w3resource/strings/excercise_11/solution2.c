#include <stdio.h>
#include <string.h>

void fix(char *string)
{
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1]=='\n')
		{
			string[i-1]='\0';
		}
	}
}
int main()
{
	char string[100];
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);
	fix(string);

	char new_char[sizeof(string)], max_char;

	for (int i=1; i<=strlen(string); i++)
	{
		max_char='\0';
		for (int x=0; x<=strlen(string)-0; x++)
		{
			if (string[x] <= string[x+1])
			{
				max_char = string[x-1];
			}
		}
		new_char[i-1] = max_char;

	}

	printf("After sorting the string appears like : \n%s", new_char);
	return 0;
}
