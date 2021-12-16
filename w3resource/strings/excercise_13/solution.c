#include <stdio.h>
#include <string.h>

void fix(char *string)
{
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1] == '\n')
			string[i-1]='\0';
	}
}

int main()
{
	char string[100];
	int start, lenght;
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);
	printf("Input the position to start extraction : ");
	scanf("%d", &start);
	printf("Input the length the substring : ");
	scanf("%d", &lenght);

	char new_string[lenght];
	for (int i=1; i<=lenght; i++)
	{
		new_string[i] = string[start+i-2];
	}

	printf("The substring retrieve from the string is : '%s'", new_string);

	return 0;
}
