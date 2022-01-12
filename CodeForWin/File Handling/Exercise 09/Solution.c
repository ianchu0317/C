#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main(int args, char *argv[])
{
  /* User input file name */
  char fileName[MAX_SIZE];
  printf("Input file name: ");
  fgets(fileName, sizeof(fileName), stdin);
  fileName[strlen(fileName) - 1] = '\0';

  /* Try opening the file  */
  FILE *filePtr = fopen(fileName, "r");
  if (filePtr == NULL){
    printf("\n[!] Error opening %s !\n", fileName);
    exit(1);
  }

  /* Create temporary variable of new file */
  FILE *temp = fopen("temp.txt", "w");

  /* User input the word to remove */
  char wordToRemove[MAX_SIZE];
  printf("Input word to remove: ");
  fgets(wordToRemove, sizeof(wordToRemove), stdin);
  wordToRemove[strlen(wordToRemove) - 1] = '\0';

  /* Read file char by char */
  int counter = 0;
  char c, temp_c;

  c = fgetc(filePtr);

  while (c != EOF){

    if (temp_c == wordToRemove[0]){
      for (int i = 0; i <= strlen(wordToRemove); i++){
        if (temp_c == wordToRemove[i] && c == wordToRemove[i + 1]){
          c = fgetc(filePtr);
        } else if (c != wordToRemove[i+1]){
          break;
        }
      }
    }
    else {
      fprintf(temp, "%c", temp_c);
    }
    temp_c = c;
    c = fgetc(filePtr);
  }
  printf("[!] All words on file '%s' has been successfully deleted !\n", fileName);

  fclose(filePtr);
  remove(fileName);
  rename("temp.txt", fileName);
  fclose(temp);

  return 0;
}
