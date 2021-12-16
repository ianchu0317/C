#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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
	char string[100], substring[100];
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);
	fix(string);
	printf("Input the substring to be search : ");
	fgets(substring, sizeof(substring), stdin);
	fix(substring);
	if (strstr(string, substring) != NULL)
	{
		printf("The substring exists in the string");
	}
	else
	{
		printf("The substring is not part of the string");
	}
/*
	bool exist;

	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1] == substring[i-1])
		{
			for (int x=1; x<=strlen(substring); x++)
			{
				if(string[x-1] == string[i-1])
				{
					if (x=strlen(substring))
					{
						exist=true;
					}
				}
				else
				{
					break;
				}
			}
		}
	}

	if (exist)
	{
		printf("The substring exists in the string");
	}
	else
	{
		printf("The substring is not exists in the string");
	}
	*/
	return 0;
}
