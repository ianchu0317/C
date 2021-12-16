#include <stdio.h>

int main(){
	//Create variable m with value 29
	int m = 29;
	printf("Address of m : %p \n", &m);
	printf("Value of m : %d \n\n", m);

	//Create pointer ab to store address of ab
	int *ab = &m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of ab : %p \n", &ab);
	printf("Content of pointer ab : %d \n\n", *ab);

	//Change value of m to 34
	m = 34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab : %p \n", &ab);
	printf("Content of pointer ab : %d \n\n", *ab);

	//Change the pointer ab value to 7
	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m : %p \n", &m);
	printf("Value of m : %d", m);

	return 0;
}
