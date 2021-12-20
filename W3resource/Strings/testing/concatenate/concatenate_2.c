#include <stdio.h>
#include <string.h>

int main()
{
	//Concatenate two strings
	char w_1[100]="Testing", w_2[100]="vivian";
	printf("Original:\nWord 1: %s\nWord 2: %s", w_1, w_2);
	strcat(w_1, w_2);
	printf("\n%s", w_1);

	return 0;
}
