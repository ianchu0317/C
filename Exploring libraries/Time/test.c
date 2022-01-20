#include <stdio.h>
#include <time.h>


int main(){
  struct tm t;
  time_t currentTime;
  time(&currentTime);
  printf("Current time: %s\n", ctime(&currentTime));

  return 0;
}
