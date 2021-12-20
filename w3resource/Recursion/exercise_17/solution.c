#include <stdio.h>
#include <stdlib.h>

int Pow(int, int);

int main()
{
	int number;
	printf("Input the base value : ");
	scanf("%d", &number);
	__fpurge(stdin);

	int power;
	printf("Input the value of power : ");
	scanf("%d", &power);

	int powered = Pow(number, power);

	printf("The value of %d to the power of %d is : %d", number, power, powered);
	return 0;
}

int Pow(int number, int power)
{
	static int i = 1;
	static int tmp = 1;

	while (i <= power)
	{
		printf("power %d : %d\n", i, tmp);
		tmp = tmp * number;
		i++;
		Pow(number, power);
	}

	return tmp;

}
