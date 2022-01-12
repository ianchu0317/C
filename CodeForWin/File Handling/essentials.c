#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "essentials.h"


void * inputFilename(char *fileName){
  printf("Input filename: ");
  fgets(fileName, sizeof(fileName), stdin);
  fileName[strlen(fileName) - 1] = '\0';
}

void checkFile(FILE *file)
{
  if (file == NULL){
    printf("[!] Can't open the file !");
    exit(1);
  }
}
