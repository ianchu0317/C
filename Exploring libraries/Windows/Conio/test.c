#include <stdio.h>
#include <conio.h>

#define BUFFER 30

int main(int argc, char **argv){
    printf("Testing\n");

    char c;
    int counter = 1;
    char content[BUFFER];
    while (1){
        c = getch();
        content[counter - 1] = c;
        
        if (counter == BUFFER){
            printf("%s\n", content);
            counter = 1;
        }

        counter++;       
    }

    return 0;
}