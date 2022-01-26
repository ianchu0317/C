#include <stdio.h>

#define ROW 3
#define COLS 3

// Function to input matrix
void input(int matrix[][COLS]){
  for (int i = 1; i <= ROW; i++){
    for (int x = 1; x <= COLS; x++){
      scanf("%d", &matrix[i-1][x-1]);
    }
  }
}

// Function for display matrix
void display_mult_matrix(int matrix[][COLS], int multiplier){
  for (int i = 1; i <= ROW; i++){
    for (int x = 1; x <= COLS; x++){
      printf("%d ", matrix[i-1][x-1] * multiplier);
    }
    printf("\n");
  }
}

int main()
{
  // User input data
  int matrix[ROW][COLS];
  printf("Input elements for matrix A:\n");
  input(matrix);

  int number;
  printf("Input multiplier: ");
  scanf("%d", &number);

  // Output
  printf("Resultant matrix c.A =\n");
  display_mult_matrix(matrix, number);

  return 0;
}
