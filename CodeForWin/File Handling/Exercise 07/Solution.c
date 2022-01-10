#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

void checkFile(FILE *, char *);
void mergeFile(FILE *, FILE *, FILE *);

int main(int argc, char *argv[]){

    /* File name array  */
    char firstFileName[MAX_SIZE], secondFileName[MAX_SIZE], mergedFileName[MAX_SIZE];

    printf("Input first file name: ");
    fgets(firstFileName, sizeof(firstFileName), stdin);
    firstFileName[strlen(firstFileName) - 1] = '\0';

    printf("Input second file name: ");
    fgets(secondFileName, sizeof(secondFileName), stdin);
    secondFileName[strlen(secondFileName) - 1] = '\0';

    printf("Input merge file name: ");
    fgets(mergedFileName, sizeof(mergedFileName), stdin);
    mergedFileName[strlen(mergedFileName) - 1] = '\0';

    /* File pointer  */
    FILE *firstFilePtr, *secondFilePtr, *mergedFilePtr;
    firstFilePtr = fopen(firstFileName, "r");
    secondFilePtr = fopen(secondFileName, "r");
    mergedFilePtr = fopen(mergedFileName, "w");
    checkFile(firstFilePtr, firstFileName);
    checkFile(secondFilePtr, secondFileName);
    checkFile(mergedFilePtr, mergedFileName);

    /* Merge the files */
    mergeFile(mergedFilePtr, firstFilePtr, secondFilePtr);

    /* Close files */
    fclose(firstFilePtr);
    fclose(secondFilePtr);
    fclose(mergedFilePtr);

    return 0;
}

void checkFile(FILE *file, char *filename){
  if (file == NULL){
    printf("[!] Error opening file %s", filename);
    exit(1);
  }
}

void mergeFile(FILE *mergedFilePtr, FILE *firstFilePtr, FILE *secondFilePtr){
  char content[MAX_SIZE];

  fgets(content, sizeof(content), firstFilePtr);
  while (!feof(firstFilePtr)){
    fprintf(mergedFilePtr, "%s", content);
    fgets(content, sizeof(content), firstFilePtr);
  }

  fgets(content, sizeof(content), secondFilePtr);
  while (!feof(secondFilePtr)){
    fprintf(mergedFilePtr, "%s", content);
    fgets(content, sizeof(content), secondFilePtr);
  }
}
