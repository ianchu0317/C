#include <stdio.h>


int main(int argc, char *argv[]){
  /*  User input row and column number */
  int ROW, COLUMN;
  printf("Input row number: ");
  scanf("%d", &ROW);
  printf("Input column number: ");
  scanf("%d", &COLUMN);

  /**** Print out result ****/
  /* Print rows */
  for (int i = 0; i < ROW; i++){
    /* Print white space */
    for (int x = ROW; x < ROW + i; x++){
      printf(" ");
    }
  /* Print stars */
    for (int j = 1; j <= COLUMN; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
