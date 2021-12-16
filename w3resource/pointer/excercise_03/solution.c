#include <stdio.h>


int main(){

	//Create variables
	int m = 300;
	float fx = 300.600006;
	char cht = 'z';

	//Print out the principal variables
	printf("Pointer : Demonstrate the use of & and * operator : \n"),
	printf("--------------------------------------------------------\n");
	printf("m = %d \n fx = %f \n cht = %c\n\n", m, fx, cht);


	//Print out addresses using & operator
	printf("Using & operator :\n ");
	printf("-----------------------");
	printf("address of m = %p\n", &m);
	printf("address of fx = %p\n", &fx);
	printf("address of cht = %p\n\n", &cht);


	//Print out the value by address
	printf("Using & and * operator : \n");
	printf("-----------------------------\n");
	printf("value at address of m = %d\n", *&m);
	printf("value at address of fx = %f\n", *&fx);
	printf("value at address of cht = %c\n\n", *&cht);

	//Print the pointer variable
	int *mptr = &m;
	float *fxptr = &fx;
	char *cptr = &cht;
	printf("Using only pointer variable : \n");
	printf("----------------------------------\n");
	printf("address of m = %p\n", mptr);
	printf("address of fx = %p\n", fxptr);
	printf("address of cht = %p\n", cptr);

	//Print out the value of the variables using value of pointer
	printf("Using only pointer operator : \n");
	printf("----------------------------------\n");
	printf("value at address of m = %d\n", *mptr);
	printf("value at address of fx = %f\n", *fxptr);
	printf("value at address of cht = %c", *cptr);


	return 0;
}
