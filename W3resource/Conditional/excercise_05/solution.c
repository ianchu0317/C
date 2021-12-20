#include <stdio.h>

void check_age(int*);

int main()
{
	int age;
	printf("[+] Enter your age : ");
	scanf("%d", &age);
	check_age(&age);

}

void check_age(int *age)
{
	if (*age >= 18)
	{
		printf("\nCongratulation! You are eligible for casting your vote.");
	}
	else 
	{
		printf("\nYou're not eligible for casting your vote. ");
		printf("\nYou need to wait %d year more. ", (18 - *age));
	}
}
