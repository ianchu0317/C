#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Student{
	char name[20];
	int age;
	int roll;
	char address[40];
} Student;


void clear();
void check_age(Student *student);
void print_name(Student *students, int quantity);
void print_n(Student *students, int quantity);


int main()
{
	int quantity;
	printf("Input the students quantity : ");
	scanf("%d", &quantity);
	__fpurge(stdin);

	Student students[quantity];

	for (int i = 1; i<=quantity; i++)
	{
		students[i-1].roll = i;

		printf("*****No.%d*****\n", i);
		printf("- Name : ");
		fgets(students[i-1].name, sizeof(students[i-1].name), stdin);
		students[i-1].name[strlen(students[i-1].name)] = '\0';

		printf("- Age (11 to 14) : ");
		scanf("%d", &students[i-1].age);
		__fpurge(stdin);
		check_age(&students[i-1]);

		printf("- Address : ");
		fgets(students[i-1].address, sizeof(students[i-1].address), stdin);
		students[i-1].address[strlen(students[i-1].address)] = '\0';

		printf("\n\n");
	}

	print_name(students, quantity);
	print_n(students, quantity);
	return 0;
}


void clear()
{
	system("clear");
}


void check_age(Student *student)
{
	while (student->age < 11 || student->age > 14)
	{
		printf("- Age (11 to 14) : ");
		scanf("%d", &student->age);
		__fpurge(stdin);
	}
}


void print_name(Student *students, int quantity)
{
	clear();
	printf("**** Students with age 14 ****\n");

	for (int i = 1; i <= quantity; i++)
	{
		if (students[i-1].age == 14)
		{
			printf("- %s\n", students[i-1].name);
		}
	}

	printf("\n\n");
}


void print_n(Student *students, int quantity)
{
	printf("**** Students with even number ****\n");

	for (int i = 1; i <= quantity; i++)
	{
		if (students[i-1].roll % 2 == 0)
		{
			printf("- %s (no.%d)\n", students[i-1].name, i);
		}
	}

}
