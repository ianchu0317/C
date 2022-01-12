#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
#define BUFFER 100

int main(){
  /* User input file name */
  char fileName[MAX_SIZE];
  printf("Input file name: ");
  fgets(fileName, sizeof(fileName), stdin);
  fileName[strlen(fileName) - 1] = '\0';

  FILE *filePtr = fopen(fileName, "r");
  if (filePtr == NULL){
    printf("[!] Error opening file !");
    exit(1);
  }

  /* Temp file pointer */
  FILE *tempPtr = fopen("temp.tmp", "w");
  char lineContent[BUFFER];

  /* Read file content line by line */
  while (fgets(lineContent, sizeof(lineContent), filePtr) != NULL){
    if (strlen(lineContent) != 1){
      fprintf(tempPtr, "%s", lineContent);
    }
  }

  /* Close file, remove original file, rename temp file, and close pointer */
  fclose(filePtr);
  remove(fileName);
  rename("temp.tmp", fileName);
  fclose(tempPtr);

  return 0;
}
