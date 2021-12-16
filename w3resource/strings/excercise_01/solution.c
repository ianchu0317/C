#include <stdio.h>
#include <string.h>


void corrige(char *word)
{
	for (int i=0; i<strlen(word); i++)
		if (word[i] == '\n')
			word[i] == '\0';
		else
			continue;
}



int main()
{
	char word[100];
	printf("Input the string : ");
	fgets(word, sizeof(word), stdin);
	corrige(word);
	printf("The string you entered is : %s", word);

	return 0;
}
