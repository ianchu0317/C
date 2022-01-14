#include <stdio.h>

int main()
{
  /* User input row and column */
  int COLUMN, ROW;
  printf("Input row number: ");
  scanf("%d", &ROW);
  printf("Input column number: ");
  scanf("%d", &COLUMN);

  /* Print out pattern */
  printf("\n");
  for (int i = 1; i <= ROW; i++){
    for (int x = 1; x <= COLUMN; x++){
      /* Print first and last row */
      if (i == 1 || i == ROW){
        printf("*");
      } else if (x == 1 || x == COLUMN || i == x || x == (ROW - i + 1)){
        printf("*"); /* Print the first and last column */
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
