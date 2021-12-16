#include <stdio.h>
#include <stdlib.h>

/*
This challenge requires you to print on a single line,
and then print the already provided input string to stdout.
*/

int main(){
	char s[50];
	scanf("%[^\n]%*c", &s);
	printf("Hello World \n");
	//fgets();
	printf("%s", s);
	return 0;
}
