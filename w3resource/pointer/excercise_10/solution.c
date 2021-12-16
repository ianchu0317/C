#include <stdio.h>
#include <string.h>

int lenght(char *word);

int main()
{
	char word[100];
	printf("Input a string : ");
	fgets(word, 100, stdin);
	if (*(word + (strlen(word)-1)) == '\n')
	{
		*(word + (strlen(word)-1)) = '\0'; 
	}
	int len = lenght(word);
	printf("The lenght of the given string %s is %d", word, len);
	return 0;

}

int lenght(char *word)
{
	int len = strlen(word) - 1;
	return len;
}
