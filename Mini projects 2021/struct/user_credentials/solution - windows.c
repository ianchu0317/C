#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Menu content
char *menu_content = "######## User Menu ########\n"
		     "1- Registration\n"
		     "2- Exit program\n\n\n";


//Functions
void clear();
void menu();
void registration();
void exit_program();
void save_credentials();
int get_response(char *option); // Get the response and convert into integer



//User struct
typedef struct User{
	char name[20];
	int age;
	char subject[20];
};



struct User user;
FILE *file;


int main()
{
	menu();
	return 0;
}


//Clear the console
void clear()
{
	system("cls");
}



void menu()
{
	//Print the menu and get the user option
	char response[5];
	printf("%s", menu_content); // Print the menu
	printf("[+] Enter the number of option (1-2) : ");
	fgets(response, sizeof(response), stdin);
	*(response + strlen(response) - 1) = '\0'; //Change the fgets \n last char

	//Check the response
	switch (get_response(response))
	{
		case 1:
			registration();
			break;
		case 2:
			exit_program();
			break;
		default:
			printf("[!] Invalid option\n");
			menu();
			break;
	}
}



//Registration of the user
void registration()
{
	clear();

	printf("- Name (max 20 characters): ");
	fgets(user.name, sizeof(user.name), stdin);
	user.name[strlen(user.name)-1] = '\0';

	char a[5];
	printf("- Age : ");
	fgets(a, sizeof a, stdin);
	*(a + strlen(a) - 1) = '\0';
	user.age = get_response(a);
	if ((user.age < 0) || (user.age == 0))
	{
		printf("[!] Invalid option\n");
		sleep(2);
		registration();
	}


	printf("- Subject : ");
	fgets(user.subject, sizeof(user.subject), stdin);
	user.subject[strlen(user.subject) - 1] = '\0';

	save_credentials();
}



void save_credentials()
{
        clear();
        char response[5];
        printf("**OPTIONS**\n");
        printf("1- Save Credentials\n");
        printf("2- Return to menu (don't save credentials)\n");
        printf("\n\nInput the option : ");
        fgets(response, sizeof(response), stdin);
        response[strlen(response) - 1] = '\0';

	//User option
        int r = get_response(response);
        switch (r){
                case 1:
			break;
		case 2:
			menu();
			break;
		default:
			clear();
			printf("[!] Invalid option\n");
			sleep(2);
			save_credentials();
			break;
        }

	file = fopen("credentials.txt", "a");
	fprintf(file, "*****NEW USER*****\n");
	fprintf(file, "- Name : %s\n", user.name);
	fprintf(file, "- Age : %d\n", user.age);
	fprintf(file, "- Subjet : %s\n", user.subject);
	fclose(file);

	printf("[+] User successfully registered !!\n");
	sleep(3);
}



//Exit the program
void exit_program()
{
	clear();
	printf("[!] Exiting...");
	exit(0);
}



//Get the response in integer
int get_response(char *option)
{
	if (atoi(option) != 0)
        {
		return atoi(option);
        }
        else // Run this if the entered value is not an integer
        {
		return 0;
        }
}
