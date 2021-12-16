#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

#define TAM 100

void()
int main(){
	//Define variables
	char ch, s[100], sen[100];

	//Store variables
	scanf("%c", ch);
	__fpurge(stdin);
	fgets(s, 100, stdin);
	__fpurge(stdin);
	fgets(sen, 100, stdin);

	//print variables
	printf("%c \n", ch);
	printf("%s \ns", s);
	printf("%s \n", sen);

	return 0;
}
