#include <stdio.h>
#include <string.h>


void fix(char *string)
{
	for(int i=1; i<=strlen(string); i++)
	{
		if (string[i-1] == '\n')
		{
			string[i-1] = '\0';
		}
	}
}

int main()
{
	char string[100];
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);
	fix(string);

	int counter=0;
	char largest[strlen(string)], smallest[strlen(string)];
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i]==' ')
		{
			counter = 0;
		}
		else if ()
		{
			
		}
	}





	return 0;
}
