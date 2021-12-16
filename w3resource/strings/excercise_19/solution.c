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
	char string_1[100], string_2[100];
	printf("Input the first string : ");
	fgets(string_1, sizeof(string_1), stdin);
	fix(string_1);
	printf("Input the second string : ");
	fgets(string_2, sizeof(string_2), stdin);
	fix(string_2);

	char concatenate[strlen(string_1) + strlen(string_2)];
	strcat(concatenate, string_1);
	strcat(concatenate, string_2);
	printf("After concatenation the string is : \n%s", concatenate);

	return 0;
}
