#include <stdio.h>

int main()
{
  char c;
  printf("Input alphabet: ");
  c = getchar();

  switch(c){
    case 'a':
      printf("\n'%c' is vowel\n", c);
      break;
    case 'e':
      printf("\n'%c' is vowel\n", c);
      break;
    case 'i':
      printf("\n'%c' is vowel\n", c);
      break;
    case 'o':
      printf("\n'%c' is vowel\n", c);
      break;
    case 'u':
      printf("\n'%c' is vowel\n", c);
      break;
    case 'A':
      printf("\n'%c' is vowel\n", c);
      break;
    case 'E':
      printf("\n'%c' is vowel\n", c);
      break;
    case 'I':
      printf("\n'%c' is vowel\n", c);
      break;
    case 'O':
      printf("\n'%c' is vowel\n", c);
      break;
    case 'U':
      printf("\n'%c' is vowel\n", c);
      break;
    default:
      printf("\n'%c' is consonant\n", c);
      break;
  }


  return 0;
}
