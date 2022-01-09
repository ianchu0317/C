#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main()
{
    char text[MAX_SIZE];
    printf("Input text: ");
    fgets(text, sizeof(text), stdin);
    text[strlen(text) - 1] = '\0';

    FILE *file_ptr = fopen("file.txt", "a");
    fprintf(file_ptr, "%s", text);

//    printf("%s = %ld", text, strlen(text));
    return 0;
}
