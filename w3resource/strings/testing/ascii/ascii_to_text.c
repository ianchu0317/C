#include <stdio.h>
#include <string.h>

int main()
{
	char c=65;
	int i[10]={65,66,67,68,69,70,71,72,73,74};
	for (int a=0; a<=sizeof(i)/sizeof(int)-1; a++)
		printf("%c", i[a]);

	return 0;
}
