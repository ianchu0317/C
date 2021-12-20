#include <stdio.h>


int main(){
	//m = 10, "n" and "o" are two integer variable
	//*z is an integer

	int m = 10, n, o;
	int *z = &m;

	printf("z stores the address of m = %p \n\n", z);
	printf("*z stores the value if m = %d \n\n", *z);
	printf("&m is the address of m = %p \n\n", &m);
	printf("&n stores the address of o = %p \n\n", &n);
	printf("&o stores the address of o = %p \n\n", &o);
	printf("&z stores the address of z = %p \n\n", &z);



	return 0;

}
