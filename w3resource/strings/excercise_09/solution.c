#include <stdio.h>
#include <string.h>

void check(char *string, int *vowel, int *consonant)
{
	for (int i=1; i<=strlen(string); i++)
	{
		printf("%d : %c ", i, string[i-1]);
		if ((string[i-1]>='a' && string[i-1]<='z') || (string[i-1]>='A' && string[i-1]<='Z'))
		{
			if (string[i-1]=='a' || string[i-1]=='e' || string[i-1]=='i' || string[i-1]=='o' || string[i-1]=='u' || string[i-1]=='A' || string[i-1]=='E' || string[i-1]=='I' || string[i-1]=='O' || string[i-1]=='U')
			{
				*vowel+=1;
				printf("(vowel: %d)\n", *vowel);
			}
			else
			{
				*consonant+=1;
//				printf("(consonant)\n");
			}
		}
	}
}


int main()
{
	char string[100];
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);
	//Fix fgets
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1]=='\n')
		{
			string[i-1]='\0';
		}
	}

	int vowel=0, consonant=0;
	check(string, &vowel, &consonant);
	printf("\nThe total number of vowel in the string is : %d \nThe total number of consonant in the string is : %d", vowel, consonant);
	return 0;
}
