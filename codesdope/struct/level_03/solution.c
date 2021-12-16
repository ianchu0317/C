#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Fix \n in fgets()
void fix(char *string)
{
	string[strlen(string) - 1] = '\0';
}



//Student struct
struct student{
	char name[20];
	int roll;
	int age;
	char address[50];
	int marks;
};



//Print the information
void print(struct student *ptr)
{
	for (int i = 1; i<=4; i++)
	{
		printf("****Roll no.%d****\n", ptr[i-1].roll);

		printf("- Name : %s\n", ptr[i-1].name);
		printf("- Age : %d\n", ptr[i-1].age);
		printf("- Address : %s\n", ptr[i-1].address);
		printf("- Marks : %d\n", ptr[i-1].marks);

		printf("\n\n");
	}
}

int main()
{

	struct student students[15];

	//Input the information
	for (int i = 1; i<=4; i++)
	{
		printf("****Roll no.%d****\n", i);
		students[i-1].roll = i;
		//fflush(stdout);
		__fpurge(stdin);

		printf("Input the name : ");
		fgets(students[i-1].name, sizeof(students[i-1].name), stdin);
		fix(students[i-1].name);
		//fflush(stdout);
		__fpurge(stdin);

		printf("Input the age : ");
		scanf("%d", &students[i-1].age);
		//fflush(stdout);
		__fpurge(stdin);

		printf("Input the address : ");
		fgets(students[i-1].address, sizeof(students[i-1].address), stdin);
		fix(students[i-1].address);
		//fflush(stdout);
		__fpurge(stdin);

		printf("Input the marks : ");
		scanf("%d", &students[i-1].marks);
		fflush(stdout);

		printf("\n\n");
		//fflush(stdout);
		__fpurge(stdin);
	}

	print(students);

	return 0;
}
