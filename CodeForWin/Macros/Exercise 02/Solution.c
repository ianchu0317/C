#include <stdio.h>

#define MAX_SIZE 100

int main(){
  printf("The MAX_SIZE is %d\n", MAX_SIZE);

  #ifdef MAX_SIZE
  #undef MAX_SIZE
  #define MAX_SIZE 50
  #endif

  printf("Redefined MAX_SIZE is %d\n", MAX_SIZE);

  return 0;
}
