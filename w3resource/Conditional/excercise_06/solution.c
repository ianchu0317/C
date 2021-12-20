#include <stdio.h>

void check(int*, int*);

int main()
{
	int n, m;
	printf("[+] Enter the value of m : ");
	scanf("%d", &m);
	//check(&n, &m);

       if (m > 0)
        {
                n = 1;
                printf("\nThe value of n = %d", n);
        }
        else if (m == 0)
        {
                n = 0;
                printf("\nThe value of n = %d",n);
        }
        else if (m < 0)
        {
                n = -1;
                printf("\nThe value of n = %d", n);
        }

}

void check(int *n, int *m)
{
	if (*m > 0)
	{
		*n = 1;
		printf("\nThe value of n = %d", *n);
	}
	else if (*m == 0)
	{
		*n = 0;
		printf("\nThe value of n = %d",*n);
	}
	else if (*m < 0)
	{
		*n = -1;
		printf("\nThe value of n = %d", *n);
	}

}
	
