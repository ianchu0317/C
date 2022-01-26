#include <stdio.h>

#define ROW 3
#define COLS 3

// User input matrix
void input(int matrix[][COLS]){
  for (int i = 1; i <= ROW; i++){
    for (int x = 1; x <= COLS; x++){
      scanf("%d", &matrix[i-1][x-1]);
    }
  }
}

int checkEqual(int matrix1[][COLS], int matrix2[][COLS]){
  for (int i = 1; i <= ROW; i++){
    for (int x = 1; x <= COLS; x++){
      if (matrix1[i-1][x-1] != matrix2[i-1][x-1]){
        return 0;
        break;
      }
    }
  }
  return 1;
}


int main(){
  // User input data
  int matrix1[ROW][COLS];
  printf("Input elements for matrix1:\n");
  input(matrix1);

  int matrix2[ROW][COLS];
  printf("Input elements for matrix2:\n");
  input(matrix2);

  // Check if both matrices are equal
  int isEqual = checkEqual(matrix1, matrix2);
  if (isEqual){
    printf("\nBoth matrices are equal\n");
  } else{
    printf("\nBoth matrices are not equal\n");
  }

  return 0;
}
