#include <stdio.h>

int main()
{
  int rows, columns;
  printf("Input number of rows: ");
  scanf("%d", &rows);

  printf("Input number of columns: ");
  scanf("%d", &columns);

  printf("\n");
  for (int i = 1; i <= rows; i++){
    for (int x = 1; x <= columns; x++){
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}
