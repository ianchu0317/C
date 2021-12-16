#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char*);

int main()
{
	char word[100];
	printf("input a word to check for palindrome : ");
	fgets(word, sizeof(word), stdin);
	word[strlen(word) - 1] = '\0';

	int palindrome = check(word);

	if (palindrome) {
		printf("The entered word is a palindrome.");
	}
	else {
		printf("The entered word is not a palindrome.");
	}
	return 0;
}

int check(char *word)
{
	static char tmp[100];
	static int i = 1;

	if (word[i - 1] != '\0') {
		tmp[i-1] = word[strlen(word) - i];
		i++;
		printf("Word[%d] : %c, Tmp[%d] : %c\n", i-1, word[i-1], i-1, tmp[i-1]);
		check(word);
	}
	else {
		printf("\nWord : %s, %tmp : %s\n", word, tmp);
		printf("strcmp : %d\n", strcmp(tmp, word));
		if (strcmp(tmp, word) == 0) {
			return 1;
		}
		else{
			return 0;
		}
	}
}


