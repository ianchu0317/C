#include <stdio.h>

int main()
{
  /* User input */
  int rows, columns;
  printf("Input number of rows: ");
  scanf("%d", &rows);
  printf("Input number of columns: ");
  scanf("%d", &columns);

  /* Print out result */
  printf("\n");
  for (int i = 1; i <= rows; i++){
    for (int x = 1; x <= columns; x++){
      if (i == 1 || i == rows){
        printf("*");
      } else if (x == 1 || x == columns){
        printf("*");
      } else {
        printf(" ");
      }
    }

    /* Print out new line char */
    printf("\n");
  }
  return 0;
}
