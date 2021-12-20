#include <stdio.h>
#include <string.h>

//Fix fgets
void check(char *string)
{
	for (int i=1; i<=strlen(string); i++)
	{
		if (string[i-1]=='\n')
			string[i-1]='\0';
	}
}

//Main Function
int main()
{
	//User enter the string
	char string[100];
	printf("Input the string : ");
	fgets(string, sizeof(string), stdin);
	check(string);

	//Prepare variables
	int counter=0, max=0;
	char max_char;

	//Loop throgh the characters in the string
	for (int i=1; i<=strlen(string); i++)
	{	//Once we have the current letter, loop again throgh the string
		for (int x=1; x<=strlen(string); x++)
		{	//If the current letter == to the lopping letter and have coincidence, we will plus the counter
			//printf("%c : %c\n", string[i-1], string[x-1]);
			if (string[i-1]==string[x-1])
			{
				counter++;
			}
		}

		//if the counter of the concurrency of the current character is grater than the previous max char, we have a new max char concurrency :)
		if (counter > max)
		{
			printf("Letter '%c' : %d\n ", string[i-1], counter);
			max=counter;
			max_char=string[i-1];
		}
		counter = 0;
	}


	printf("The Highest fraquenfy of character '%c'\nappears number of times : %d", max_char, max);


	return 0;
}
