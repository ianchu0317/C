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


int sum_diagonal(int matrix[][COLS]){
  int sum = 0;
  for (int i = 1; i <= ROW; i++){
    for (int x = 1; x <= COLS; x++){
      if (((i-1 == 0) && (x-1 == 0)) || ((i == ROW) && (x == COLS)) || ((i == (ROW / 2)) && (x == (COLS / 2)))) sum += matrix[i-1][x-1];
    }
  }
  return sum;
}

int main(){
  // User input data
  int matrix1[ROW][COLS];
  printf("Input elements for matrix1:\n");
  input(matrix1);

  int sum = sum_diagonal(matrix1);
  printf("\nSum of main diagonal elements = %d\n", sum);
  return 0;
}
