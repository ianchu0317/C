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

/*
  Sum = mx[0][0] * mx2[0][0]
      = mx[0][1] * mx2[1][0]
      = mx[0][2] * mx2[2][0]
  sum = mx[0][0] * mx2[0][1]
      = mx[0][1] * mx2[1][1]
      = mx[0][2] * mx2[2][1]
*/


// Function for display matrix
void display(int mx1[][COLS], int mx2[][COLS]){

  int sum;

  for (int i = 1; i <= ROW; i++){         // First matrix row
    for (int x = 1; x <= COLS; x++){      // Result matrix column and second matrix column
      sum = 0;
      for (int j = 1; j <= COLS; j++){    // Second matrix row and first matrix column
        sum += mx1[i-1][j-1] * mx2[j-1][x-1];
        printf("\n%d (sum) = %d (mx1[%d][%d]) * %d (mx2[%d][%d])\n",
                sum,
                mx1[i-1][j-1], i-1, j-1,
                mx2[j-1][x-1], j-1, x-1);
      }

      //printf("%d ", sum);
    }
    printf("\n"); // New array in matrix
  }
}

int main()
{
  // User input data
  int matrix[ROW][COLS];
  printf("Input elements for matrix A:\n");
  input(matrix);

  int matrix2[ROW][COLS];
  printf("Input elements for matrix B:\n");
  input(matrix2);

  // Output
  printf("\nProduct of matrices =\n");
  display(matrix, matrix2);

  return 0;
}
