#include <stdio.h>
#include <string.h>


int len(char *word)
{
	int i=1;
	while (word[i-1]!='\n')
	{
		i++;
	}
	if (word[i-1] == '\n')
		word[i-1]=='\0';
	return i-1;
}

int main()
{
	char word[100];
	printf("Input the string : ");
	fgets(word, sizeof(word), stdin);
	int l = len(word);
	printf("Lenght of the string is : %d", l);
	return 0;
}

