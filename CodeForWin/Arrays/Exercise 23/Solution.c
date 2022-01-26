#include <stdio.h>

// Function to store matrix from user input
void input_matrix(int matrix[3][3]){
  for (int i = 1; i <= 3; i++){   // Each row
    for (int x = 1; x <= 3; x++){ // Each column
      scanf("%d", &matrix[i-1][x-1]);
    }
  }
}

// Function to display sum of both matrix
void display_sum_matrix(int m1[3][3], int m2[3][3]){
  for (int i = 1; i <= 3; i++){ // Row
    for (int x = 1; x <= 3; x++){ // Column
      printf("%d ", (m1[i-1][x-1] + m2[i-1][x-1])); // Print out
    }
    printf("\n");
  }
}


int main()
{
  // User input data
  int matrix1[3][3];
  printf("Input elements in 3x3 matrix1:\n");
  input_matrix(matrix1);

  int matrix2[3][3];
  printf("Input elements in 3x3 matrix2:\n");
  input_matrix(matrix2);

  // Sum matrix without storing to var
  printf("Sum of both matrix:\n");
  display_sum_matrix(matrix1, matrix2);

  return 0;
}
