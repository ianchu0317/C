#include <stdio.h>

int main()
{
	//Declare variables
	int roll, phy, chem, com;
	char name[100];

	//User input information
	printf("Input the Roll Number of the student : ");
	scanf("%d\n", &roll);
	fflush(stdin);
	printf("Input the Name of the Student : ");
	fgets(name, 100, stdin);
	printf("Input the marks of Physics, Chemistry and Computer Application : ");
	scanf("%d %d %d", &phy, &chem, &com);

	int total = phy + chem + com, percentage = total/3;

	//Print the information
	printf("\nRoll No : %d\n", roll);
	printf("Name of the Student : %s\n", name);
	printf("Marks in Physics : %d\n", phy);
	printf("Marks in Chemistry : %d\n", chem);
	printf("Marks in Computer Application : %d\n", com);
	printf("Total Marks = %d\n", total);
	printf("Percentage = %d\n", percentage);

	//Print the division
	if (percentage >= 60)
		printf("Division = First");
	else if (percentage < 60 && percentage >= 48 )
		printf("Division = Second");
	else if (percentage < 48 && percentage >= 36 )
		printf("Division = Pass");
	else
		printf("Division = Failed");

	return 0;
}
