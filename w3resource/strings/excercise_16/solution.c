#include <stdio.h>
#include <string.h>
#include <ctype.h>

void fix(char *string)
{
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1] == '\n')
			string[i-1] = '\0';
	}

}

int main()
{
	char string[100];
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);
	fix(string);

	char word[3]="the";
	int counter=0;

	for (int i=1; i<=strlen(string); i++)
	{
		if (tolower(string[i-1]) == word[0] && tolower(string[i]) == word[1] && tolower(string[i+1]) == word[2])
		{
			counter++;
		}
	}

	printf("The frequency of the word 'the' is : %d", counter);
	return 0;
}
