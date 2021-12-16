#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Marks{
	int roll_no;
	char name[20];
	int chem_mark;
	int maths_mark;
	int phy_mark;
};


int percentage(int n1, int n2, int n3);

int main()
{
	struct Marks marks[5];

	for (int i= 1; i<=5; i++)
	{
		marks[i-1].roll_no = i;
		printf("Student roll no.%d\n", marks[i-1].roll_no);
		printf("Enter the name : ");
		fgets(marks[i-1].name, sizeof(marks[i-1].name), stdin);
		marks[i-1].name[strlen(marks[i-1].name)-1] = '\0';
		__fpurge(stdin);

		printf("Enter the Chemistry's Mark : ");
		scanf("%d", &marks[i-1].chem_mark);
		__fpurge(stdin);

                printf("Enter the Mathematics's Mark : ");
                scanf("%d", &marks[i-1].maths_mark);
		__fpurge(stdin);

                printf("Enter the Physics's Mark : ");
                scanf("%d", &marks[i-1].phy_mark);
		__fpurge(stdin);
		system("clear");
	}



	printf("*****Results*****\n");
	for (int i=1; i<=5; i++)
	{
		printf("Student roll no.%d\n", marks[i-1].roll_no);
		printf("- Name : %s\n", marks[i-1].name);
		printf("- Percentage : %d\n", percentage(marks[i-1].chem_mark, marks[i-1].maths_mark, marks[i-1].phy_mark));
		printf("\n");
	}


	return 0;
}



int percentage(int n1, int n2, int n3)
{
	return (n1 + n2 + n3)/3;
}
