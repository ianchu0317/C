#include <stdio.h>

int main()
{
	//Declare variables
	int x, y;

	//Enter the coordinates
	printf("[+] Enter coordinate point : ");
	scanf("%d %d", &x, &y);


	if ((x > 0) && (y > 0))
		printf("The coordinate point (%d,%d) lies in the First quadrant", x,y);
	else if ((x < 0) && (y > 0))
		printf("The coordinate point (%d,%d) lies in the Second quadrant", x,y);
	else if ((x < 0) && (y < 0))
		printf("The coordinate point (%d,%d) lies in the Third quadrant", x,y);
	else if ((x==0) && (y == 0))
		printf("The coordinate point (%d,%d) lies in the origin", x,y);
	else
		printf("The cordinate point (%d,%d) lies in the Fourth quadrant", x,y);


	return 0;
}


