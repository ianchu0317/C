#include <stdio.h>
#include <string.h>

int main()
{
	char word[100];
	printf("Input the string : ");
	fgets(word, sizeof(word), stdin);

	printf("The characters of the string are : \n");
	for (int i=1; i<=strlen(word); i++)
		printf("%c ", word[i-1]);

	return 0;
}
