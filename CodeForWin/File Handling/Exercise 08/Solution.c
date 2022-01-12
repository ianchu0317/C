#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef MAX_SIZE
#define MAX_SIZE 100
#endif

int main(int argc, char const *argv[]) {
  /* User input file name */
  char fileName[MAX_SIZE];
  printf("Input file name to read: ");
  fgets(fileName, sizeof(fileName), stdin);
  fileName[strlen(fileName) - 1] = '\0';

  /* try opening the file */
  FILE *file = fopen(fileName, "r");
  if (file == NULL){
    printf("[!] Failed opening file !\n");
    exit(1);
  }

  /* Counter variables declaration */
  int charCounter, wordCounter, lineCounter;
  charCounter = wordCounter = lineCounter = 0;
  char c;

  /* Read file char by char */
  c = fgetc(file);

  while (c != EOF){
    if (c == ' '){
      wordCounter++;
    } else if (c == '\n'){
      lineCounter++;
      wordCounter++;
    } /*¿else {
      charCounter++;
    }*/
    charCounter++;
    c = fgetc(file);
  }

  /*  Print out result */
  printf("\nTotal characters: %d\n", charCounter);
  printf("Total words: %d\n", wordCounter);
  printf("Total lines: %d\n", lineCounter);
  return 0;
}
