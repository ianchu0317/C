#include <stdio.h>

void check(int*, int*, int*, int*, int*);

int main()
{
	//Declare variables
	int math, phy, chem, total, math_phy;
	printf("Input the marks obtained in Physics : ");
	scanf("%d", &phy);
	printf("Input the marks obtained in Chemistry : ");
	scanf("%d", &chem);
	printf("Input the marks obtained in Mathematics : ");
	scanf("%d", &math);
	math_phy = math + phy;
	total = math + phy+ chem;
	printf("Total marks of Maths, Physics and Chemistry : %d\n", total);
	printf("Total marks of Maths and Physics : %d\n", math_phy);
	check(&math, &phy, &chem, &total, &math_phy);

	return 0;
}

void check(int *math, int *phy, int *chem, int *total, int *math_phy)
{
	if ((*math >= 65) && (*phy >= 55) && (*chem >= 50) && (*total >= 190))
		printf("The candidate is eligible");
	else if (*math_phy >= 140)
		printf("The candidate is eligible");
	else 
		printf("The candidate is not eligible for admission.");
}
