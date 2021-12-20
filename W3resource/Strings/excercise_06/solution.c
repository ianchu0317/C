#include <stdio.h>
#include <string.h>

int len(char *string)
{
	int i=0;
	while (string[i]!='\n')
	{
		i++;
	}
	return i;
}


int main()
{
	char word[100], word_2[100];
	printf("Input the first string : ");
	fgets(word, sizeof(word), stdin);

	printf("Input the second string : ");
	fgets(word_2, sizeof(word), stdin);
	printf("%d", len(word));
	//printf("The first word is : %sThe second word is : %s", word, word_2);
	//if (len(word) == len(word_2))
	if (len(word) == len(word_2))
	{
		int i=0;
		printf("%d \n", i);
		while (word[i]!='\n' || word_2[i]!='\n')
		{
			printf("%c : %c \n", i);
			if (word[i]!=word_2[i])
			{
				printf("The two string are not equal");
				break;
			}
			i++;
		}
		printf()
	}
	return 0;
}
