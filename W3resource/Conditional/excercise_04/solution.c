#include <stdio.h>

void check(int *);

int main()
{
	int year;
	printf("----- Leap year checker -----\n");
	printf("[+] Enter the year to check : ");
	scanf("%d", &year);
	check(&year);

	return 0;
}

void check(int *year)
{
	if ((*year % 4) == 0 && (*year % 100) == 0 && (*year % 400) == 0)
	{
		printf("The entered year is leap");
	}
	else
	{
		printf("The entered year is not leap");
	}
}

void check_2(int *year)
{
	if ((*year % 4) == 0)
	{
		if ((*year % 100) == 0)
		{
			if ((*year % 400) == 0)
			{
				printf("");
			}
		}
	}
}
