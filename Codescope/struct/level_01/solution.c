#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void fix(char *string)
{
	string[strlen(string) - 1] = '\0';
}



typedef struct Student{
	char name[20];
	int roll;
	int age;
	int marks;
}Student;



int main()
{
	Student student;
	//Get the student's information
	printf("Input the name of the student : ");
	fgets(student.name, sizeof(student.name), stdin);
	fix(student.name);

	printf("Input the age of the student : ");
	scanf("%d", &(student.age));

	printf("Input the roll of the student : ");
	scanf("%d", &(student.roll));

	printf("Input the mark of the student : ");
	scanf("%d", &(student.marks));


	//Print the student's information
	printf("- Name : %s\n", student.name);
	printf("- Age : %d\n", student.age);
	printf("- Roll : %d\n", student.roll);
	printf("- Mark : %d\n", student.marks);


	return 0;
}
