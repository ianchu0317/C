#include <stdio.h>
#include <string.h>

void fix(char *string)
{
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1] == '\n')
		{
			string[i-1] = '\0';
		}
	}
}

int main()
{
	char string[100];
	char find;
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);
	fix(string);
	printf("Input the character o find frequency : ");
	scanf("%c", &find);

	int counter = 0;
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1] == find)
		{
			counter++;
		}
	}

	printf("The frequency of '%c' is : %d", find, counter);
	return 0;
}
