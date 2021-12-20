#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book{
	char name[50];
	int pages;
	double price;
	char author[50];
};

int main(){
	struct Book cnba;
	cnba.pages = 190;
	cnba.price = 45.8;
	strcpy( cnba.author, "Sarmiento");
	strcpy( cnba.name, "APRENDIZAJE");
	printf("%s", cnba.author);
	return 0;
}
