#include <stdio.h>
#include <stdlib.h>

int LeastCommonMultiple(int, int);

int main()
{
	int n1, n2;
	printf("Input 1st number for LCM : ");
	scanf("%d", &n1);
	__fpurge(stdin);

	printf("Input 2nd number for LCM : ");
	scanf("%d", &n2);
	__fpurge(stdin);

	int lcm = LeastCommonMultiple(n1, n2);

	printf("\nThe LCM of %d and %d : %d", n1, n2, lcm);
	return 0;
}

int LeastCommonMultiple(int n1, int n2)
{
	static int i = 1;

	if ((i % n1 == 0) && (i % n2 == 0)) {
		return i;
	}

	else {
		i++;

		LeastCommonMultiple(n1, n2);
	}
}
