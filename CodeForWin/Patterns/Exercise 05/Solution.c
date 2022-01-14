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
  for (int i = 1; i <= ROW; i++){
    /* Print white space */
    for (int x = 1; x <= (ROW - i) ; x++){
      printf(" ");
    }
  /* Print stars */
    for (int j = 1; j <= COLUMN; j++) {
      if (i == 1 || i == ROW || j == 1 || j == COLUMN){
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
