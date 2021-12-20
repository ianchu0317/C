#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(int, char *, char);

int main()
{
	char number[100];
	printf("Input any number to find sum Of digits : ");
	fgets(number, sizeof(number), stdin);
	number[strlen(number)-1] = '\0';

	int sum = 0;
	sum = check(sum, number);

	return 0;
}

int check(int sum, char *number)
{
	if (atoi(number[i]))
	sum += atoi()
}
