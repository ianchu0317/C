#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy(char *, char*);

int main()
{
	char string[100];
	printf("Input the string to copy : ");
	fgets(string, sizeof(string), stdin);
	string[strlen(string)] = '\0';

	char new_string[100];

	copy(new_string, string);

	printf("The first string is : %s\n", string);
	printf("The copied string is : %s", new_string);
	return 0;
}

void copy(char *string, char *new_string)
{
	static int i = 1;

	while (string[i-1] != '\0')
	{
		new_string[i-1] = string[i-1];
		i++;
		copy(string, new_string);
	}
}
