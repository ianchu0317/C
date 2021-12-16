#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char check(char[]);

int main()
{
	char string[100];
	printf("Input a string to including one or more capital letters : ");
	fgets(string, sizeof(string), stdin);
	string[strlen(string) - 1] = '\0';

	char c = check(string);

	printf("The first capital letter appears in the string '%s' is : '%c'", string, c);

	return 0;
}

char check(char string[])
{
	static int i = 1;
	while (!(isupper(string[i-1])))
	{
		printf("string[%d-1] : %c\n", i, string[i-1]);
		i++;
		check(string);
	}

	return string[i-1];
}
