/*Task

You have to print the character,
, in the first line. Then print in next line. In the last line print the sentence,

.


#Input Format

First, take a character,
as input.
Then take the string, as input.
Lastly, take the sentence

as input.


#Constraints

Strings for
and will have fewer than 100 characters, including the newline. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

void corrige_fgets(char *s)
{
int len;
len=strlen(s);
s[len-1]='\0'; // *(s-len-a)='\0';
}

int main(){
	//Define Variables
	char ch;
	char s[100];
	char sen[100];

	//Store variables
	//printf("Enter character: ");
	scanf("%c", &ch);

	//scanf("%[\n]%*c", &s);
	//fgets(s, 100, stdin);
	//fflush(stdin);
	//printf("Enter string: ");
	//scanf("%s", s); */
	//scanf("%s%[^\n]%*c", &s);
	//scanf("%s%*c", s);
	__fpurge(stdin);
	fgets(s, 100, stdin);
	corrige_fgets(s);
	//scanf("%[^\n]%*c", sen);
	__fpurge(stdin);
	printf("Enter sentence: ");
	fgets(sen, 100, stdin);

/*	hello world
	if((strlen(sen) > 0) && (sen[strlen(sen)-1] == "\n")){
		sen[strlen (sen) -1 ] = "\0";
	}
*/

	//Print variables
	printf("%c \n", ch);
	printf("%s \n", s);
	printf("%s \n", sen);

	return 0;
}

