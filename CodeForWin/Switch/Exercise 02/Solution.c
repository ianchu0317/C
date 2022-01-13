#include <stdio.h>

int main(int argc, char const *argv[]) {

  int month;
  printf("Input month number: ");
  scanf("%d", &month);

  switch(month){
    case 1:
      printf("\nTotal number of days = 31\n");
      break;
    case 2:
      printf("\nTotal number of days = 28/29\n");
      break;
    case 3:
      printf("\nTotal number of days = 31\n");
      break;
    case 4:
      printf("\nTotal number of days = 30\n");
      break;
    case 5:
      printf("\nTotal number of days = 31\n");
      break;
    case 6:
      printf("\nTotal number of days = 30\n");
      break;
    case 7:
      printf("\nTotal number of days = 31\n");
      break;
    case 8:
      printf("\nTotal number of days = 31\n");
      break;
    case 9:
      printf("\nTotal number of days = 30\n");
      break;
    case 10:
      printf("\nTotal number of days = 31\n");
      break;
    case 11:
      printf("\nTotal number of days = 30\n");
      break;
    case 12:
      printf("\nTotal number of days = 31\n");
      break;
    default:
      printf("\n[!]Invalid input !\n");
      break;
  }
  return 0;
}
