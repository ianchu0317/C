#include <stdio.h>

int main()
{
	char number[100];
	printf("%s\n",number );
	for (int i=0; i < sizeof(number); i++)
	{
		number[i] += "9";
	}
	printf("%s\n", number);
	return 0;
}
