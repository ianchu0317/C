#include <stdio.h>
#include <string.h>


int main()
{
	char word[100]="Testing";
	for (int i=0; i<=strlen(word)-1; i++)
		printf("%c", word[i]+10);


	return 0;
}
