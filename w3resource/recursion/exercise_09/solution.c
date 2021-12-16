#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(int, char*, char *);

int main()
{
	char string[100];
	printf("Input any string : ");
	fgets(string, sizeof(string), stdin);
	string[strlen(string)-1] = '\0';

	char *reversed = (char *) malloc(strlen(string) * sizeof(char));
	int counter = 1;

	reversed = reverse(counter, reversed, string);

	printf("The reversed string is : %s");
	free(reversed);
	return 0;
}

char *reverse(int counter, char *reversed, char *string)
{
	if (counter <= strlen(string))
	{
		reversed[counter-1] = string[strlen(string)-counter];
		counter++;
		reverse(counter, reversed, string);
	}

	return reversed;
}
