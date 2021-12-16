#include <stdio.h>
#include <string.h>

int main()
{
	char word[100];
	printf("Input the string : ");
	fgets(word, sizeof(word), stdin);

	int counter=0;

	for (int i=1; i<=strlen(word); i++)
	{
		if (word[i-1] == ' ' || word[i-1] == '\n')
			counter++;
		else
			continue;
	}

	printf("Total number of words in the string is : %d", counter);
	return 0;
}
