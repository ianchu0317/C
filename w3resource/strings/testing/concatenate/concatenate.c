#include <stdio.h>
#include <string.h>

int main()
{
	//Concatenate two strings
	char word[100]="testing", word_2[100]="nothing";
	printf("word 1: %s \nword 2: %s", word,word_2);

	strncat(word, word_2, 100);
	printf("\nword 3: %s", word);



	return 0;
}
