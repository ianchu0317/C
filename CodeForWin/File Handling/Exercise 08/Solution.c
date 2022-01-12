#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../essentials.h"

void fileCounter(FILE *, int *, int *, int *);

int main(int argc, char const *argv[]) {
  char fileName[MAX_SIZE];
  inputFilename(fileName);

  FILE *file = fopen(fileName, "r");
  checkFile(file);

  int charCounter, wordCounter, lineCounter;
  charCounter = wordCounter = lineCounter = 0;
  fileCounter(file, &charCounter, &wordCounter, &lineCounter);

  printf("\nChars: %d\n, Words: %d\n", charCounter);
  printf("Words: %d\n", wordCounter);
  printf("Lines: %d\n", lineCounter);
  return 0;
}

void fileCounter(FILE *file, int charCounter, int * wordCounter, int *lineCounter){
  // int charCounter, wordCounter, lineCounter;
  // charCounter = wordCounter = lineCounter = 0;
  char c;

  c = fgetc(file);

  while (c != EOF){
    if (c == ' '){
      *wordCounter++;
    } else if (c == '\n'){
      *lineCounter++;
    } else {
      *charCounter++;
    }
    c = fgetc(file);
  }
}
