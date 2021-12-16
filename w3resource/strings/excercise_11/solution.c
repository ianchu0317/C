#include <stdio.h>
#include <string.h>


#define str_size 100

//Fix fgets input \n
void fix(char *string)
{
	for (int i=1; i<=strlen(string); i++)
		if (string[i-1]=='\n')
			string[i-1]='\0';

}


int main()
{
	//User input string
	char string[str_size];
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);
	fix(string);

	char new_string[str_size];

	for (int i=1; i<=strlen(string); i++)
	{
		char new_char='\0';
		for (int x=1; x<=strlen(string); x++)
		{
			if (string[i-1]!='\n')
			{
				if (string[i-1]==new_char)
				{
					new_char=string[i-1];
					break;
				}
				//if (((char)string[i-1])<((char)string[x-1]))
				else if (string[i-1]<string[x-1])
				{
					new_char=string[i-1];
//					printf("%d\n", new_char);
				}
				else
				{
					new_char=string[x-1];
				}
			}
		}

		new_string[i-1] = new_char;
	}

	for (int i=1; i<=strlen(new_string); i++)
	{
		printf("%d\n", new_string[i-1]);
	}
	printf("After sorting the string appears like : %s", new_string);
	return 0;
}
