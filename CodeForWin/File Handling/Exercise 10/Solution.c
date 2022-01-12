#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
#define BUFFER 100

int main(){
  /* User input filename */
  char fileName[MAX_SIZE];
  printf("Input file name: ");
  fgets(fileName, sizeof(fileName), stdin);
  fileName[strlen(fileName) - 1] = '\0';

  /* Try to open the file */
  FILE *filePtr = fopen(fileName, "r");
  if (filePtr == NULL){
    printf("[!] Error opening file !");
    exit(1);
  }

  /* User input line number to delete */
  int lineToDelete;
  printf("Input line to delete: ");
  scanf("%d", &lineToDelete);
  __fpurge(stdin);

  /* Temp file pointer */
  FILE *tempPtr = fopen("temp.tmp", "w");
  char lineContent[BUFFER];
  int lineCounter = 1;

  /* Read file content line by line */
  while (fgets(lineContent, sizeof(lineContent), filePtr) != NULL){
    if (lineCounter != lineToDelete){
      fprintf(tempPtr, "%s", lineContent);
    }
    lineCounter++;
  }

  /* Close file, remove original file, rename temp file, and close pointer */
  fclose(filePtr);
  remove(fileName);
  rename("temp.tmp", fileName);
  fclose(tempPtr);

  return 0;
}
