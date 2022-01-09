#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

void copyFile(FILE *originalFilePtr, FILE *copyFilePtr) {
  char fileContent[MAX_SIZE];
  //int n = 1;
  fgets(fileContent, sizeof(fileContent), originalFilePtr);
  
  while (!feof(originalFilePtr)){
    /* Print into the second file */
    fprintf(copyFilePtr, "%s", fileContent);
    /* Read the original file */
    fgets(fileContent, sizeof(fileContent), originalFilePtr);
    //printf("%d\n", n);
    //n++;
    //sleep(1);
  }
}


int main(int argc, char const *argv[]) {

  char fileName1[MAX_SIZE], fileName2[MAX_SIZE];
  printf("Input file name 1: ");
  fgets(fileName1, sizeof(fileName1), stdin);
  printf("Input file name 2: ");
  fgets(fileName2, sizeof(fileName2), stdin);

  /* Change the array last character */
  fileName1[strlen(fileName1) - 1] = '\0';
  fileName2[strlen(fileName2) - 1] = '\0';

  FILE *originalFilePtr, *copyFilePtr;
  originalFilePtr = fopen(fileName1, "r");
  copyFilePtr = fopen(fileName2, "w");

  if (originalFilePtr == NULL){
    printf("[!] Error opening file 1 !\n");
    exit(1);
  }
  if (copyFilePtr == NULL){
    printf("[!] Error opening file 2 !\n");
    exit(1);
  }

  copyFile(originalFilePtr, copyFilePtr);

  fclose(originalFilePtr);
  fclose(copyFilePtr);

  return 0;
}
