#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//bool check_enter(int *guess, int *random);

int main(){
	//Define variables
	char guessing[5];	//To use fgets
	int count = 0, index = 0, guess, random = (rand() % 100) + 1;


	while (count <= 5){
		printf("###ATTEMPS: %d ### \n - Enter guess: ", (5 - count));
		fgets(guessing, 5, stdin);
		guess = atoi(guessing);
/*		correct = check_enter(&guess, &random);

		if (correct) {
			break;
		} else {
			pass;
		}
*/
        	if (guess == random){
                	printf("\n You won :)");
                	break;
        	} else if (guess < random){
                	printf("\n The random number is higher :( \n\n");
	        } else if (guess > random){
                	printf("\n The random number is smaller :( \n\n");
	        }
		count++;
	}

	return 0;
}

/*
bool check_enter(int *guess, int *random)
{
	if (*guess == *random){
		printf("\n You won :)");
		return true;
	} else if (*guess < *random){
		printf("\n The random number is higher :(");
		return false;
	} else if (*guess > *random){
		printf("\n The random number is smaller :(");
		return false;
	}

}
*/
