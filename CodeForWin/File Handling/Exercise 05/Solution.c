#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

void compareFiles(FILE *firstFilePtr, FILE *secondFilePtr) {
  char firstFileChar, secondFileChar;
  int lineCounter, columnCounter;

  lineCounter = columnCounter = 1;
  firstFileChar = fgetc(firstFilePtr);
  secondFileChar = fgetc(secondFilePtr);

  while ((firstFileChar != EOF) && (secondFileChar != EOF)){
    /* Exit loop if both character are not equal */
    if (firstFileChar != secondFileChar){
      printf("\nLine: %d, Column: %d\n", lineCounter, columnCounter);
      break;
    }

    if (firstFileChar == '\n'){
      lineCounter++;
      columnCounter = 0;
    }

    firstFileChar = fgetc(firstFilePtr);
    secondFileChar = fgetc(secondFilePtr);
    columnCounter++;
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

  FILE *firstFilePtr, *secondFilePtr;
  firstFilePtr = fopen(fileName1, "r");
  secondFilePtr = fopen(fileName2, "r");

  if (firstFilePtr == NULL){
    printf("[!] Error opening file 1 !\n");
    exit(1);
  }
  if (secondFilePtr == NULL){
    printf("[!] Error opening file 2 !\n");
    exit(1);
  }

  compareFiles(firstFilePtr, secondFilePtr);
 
  fclose(firstFilePtr);
  fclose(secondFilePtr);
  
  return 0;
}
