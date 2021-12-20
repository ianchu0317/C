#include <stdio.h>
#include <string.h>

void corrige_fgets(char *word)
{
	int len = strlen(word) - 1;
	*(word + len) = '\0';
}


void swap(char *ch1, char *ch2)
{
	char temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
}

void permutate(char *string, int start, int end)
{
	int i;

	if (start == end)
	{
		printf("%s\n", string);
	} else
	{
		for(i=start; i<=end; i++)
		{
			swap((string + i), (string + end));
			permutate(string, start+1, end);
			swap((string + i), (string + end));
		}
	}
}


int main()
{
	char word[100];
	printf("[+] Enter the word to permutate: ");
	fgets(word, 100, stdin);
	corrige_fgets(word);
	//sprintf("%s", word);
	permutate(word, 0, strlen(word));
	return 0;
}
