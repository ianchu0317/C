#include <stdio.h>
#include <string.h>

void automated(char *string_1, char *string_2)
{
        strcpy(string_2, string_1);
        printf("The First string is : %s\nThe Second string is : %s\nNumber of characters copied : %d", string_1, string_2, strlen(string_1));

}


void manual(char *string_1, char *string_2)
{
	int i=0;
	while (string_1[i] != '\n' || string_1[i] != '\0')
	{
		printf("%d : %c\n", i, string_1[i]);
		string_2[i] = string_1[i];
		i++;
	}
	printf("The First string is : %s\nThe Second string is : %s\nNumber of characters copied : %d", string_1, string_2, i);
}


void manual_2(char *string_1, char *string_2)
{

	int counter=0;
	for (int i=1; i<=strlen(string_1); i++)
	{
		string_2[i-1] = string_1[i-1];
		counter+=1;
	}
	printf("The First string is : %s\nThe Second string is : %s\nNumber of characters copied : %d", string_1, string_2, counter);
}


void corrige(char *string)
{
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1]=='\n' || string[i-1]=='\0')
			string[i-1]='\0';
	}
}


int main()
{
	char string_1[100], string_2[100];
	printf("Input the string : ");
	fgets(string_1, sizeof(string_1), stdin);
	corrige(string_1);
	manual_2(string_1, string_2);

	return 0;
}
