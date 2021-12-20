#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char string[100];
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);

	int alf=0, digits=0, special=0;

	for (int i = 1; i<=strlen(string); i++)
	{
		//printf("%c : %d %d %d\n", string[i-1], isalpha(string[i-1]), isdigit(string[i-1]), ispunct(string[i-1]));
		if (isalpha(string[i-1]) == 1024)
			alf++;
		else if (isdigit(string[i-1])==2048)
			digits++;

		/*else if (ispunct(string[i-1]) == 4)
			special++;s*/

		else
			special++;
	}

	printf("\nNumber of Alphabets in the string is : %d\n", alf);
	printf("Number of Digits in the string is : %d\n", digits);
	printf("Number of Special characters in the string is : %d", special);


	return 0;
}
