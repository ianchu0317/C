#include <stdio.h>



void print_space(int i, int rows)
{
	int total_space;
	if (i % 2 == 0)
	{
		printf(" ");
	}

	/*else if (i % 2 == 0 && i == rows)
	{
		continue;
	}*/
	else{
	total_space = rows-i;
	//printf("%d", total_space);
	for (int x=1; x<=total_space; x++)
        {
        	printf(" ");
	}
	}
}


int main()
{
	int rows;
	printf("[+] Enter the row number : ");
	scanf("%d", &rows);


	for (int i=1; i<=(rows)*2; i++)
	{
		//Printing the space
		//print_space(i, rows);
        	int total_space;
/*
		if (i % 2 == 0)
        	{
			if (i == rows)
                	{
                        	continue;
                	}
			else
			{
	                	printf(" ");
        		}
		}


        	else
		{
			if (i == rows)
                        {
                                continue;
                        }

        		total_space = rows-i;
        	//printf("%d", total_space);
        		for (int x=1; x<=total_space; x++)
        		{
                		printf(" ");
        		}
        	}

		if (i%2 != 0)
		{
			//Print the asterisks
			for (int x=1; x<=i; x++)
			{
				printf("*");
			}

			printf("\n");
		}

		else
		{
			continue;
		}*/
		if (i==rows)
		{
			break;
		}
		else
		{
			if (i%2 == 0)
			{
				printf(" ");
				continue;
			}
			else if (i%2 != 0)
			{
				for (int x = 1; x<=rows-i; x++)
				{
					printf(" ");
				}

				if (i<=3)
				{
					for (int x = 1; x<=i; x++)
					{
						printf("*");
					}
				}
				else
				{
					for (int x = 1; x<=i; x++)
					{
						printf("*");
					}
				}
				printf("\n");
			}

		}


	}

	return 0;

}

