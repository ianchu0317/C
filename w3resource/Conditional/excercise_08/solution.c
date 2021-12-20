#include <stdio.h>

void anouncement(int*);

int main()
{
	//Declare variables
	int num1, num2, num3;

	//Enter variables value
	printf("[+] Enter first number :  ");
	scanf("%d", &num1);
	printf("[+] Enter the second number : ");
	scanf("%d", &num2);
	printf("[+] Enter the third number : ");
	scanf("%d", &num3);

	//Print all the variables value
	printf("1st Number = %d,        2nd Number = %d,        3rd Number = %d\n", num1, num2, num3);

	//Anounce the gratest number
	if ((num1 > num2) && (num1 > num3))
		printf("The 1st Number is the greatest among three");
	else if ((num2 > num1) && (num2 > num3))
		printf("The 2nd Number is the greatest among three");
	else
		printf("The 3rd Number is the greatest among three");

	return 0;
}


