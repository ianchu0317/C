#include <stdio.h>
#include <stdlib.h>


struct Student{
	char name[20];
	int age;
	int roll;
	int marks;
};


void show(struct Student *p)
{
	printf("- Name : %s\n", p->name);
	printf("- Age : %d\n", p->age);
	printf("- Roll : %d\n", p->roll);
	printf("- Marks : %d\n", p->marks);
}


int main()
{

	struct Student	p1 = {"Ian", 15, 1, 1}, p2 = {"Alex", 13, 2, 3}, p3 = {"Calvin", 16, 3, 4}, p4 = {"Vivian", 6, 4, 5}, p5 = {"Bars", 4, 3, 2};

	show(&p1);
	show(&p2);
	show(&p3);
	show(&p4);
	show(&p5);

	return 0;
}
