#include <stdio.h>


int main(){
  //User input
  int rows;
  printf("Input rows number: ");
  scanf("%d", &rows);

  //Print rows
  for (int i = 1; i <= rows; i++){
    //Print stars
    for (int x = 1; x <= i; x++){
      printf("*");
    }
    // New line
    printf("\n");
  }

  return 0;
}
