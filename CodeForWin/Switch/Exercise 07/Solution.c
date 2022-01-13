#include <stdio.h>
#include <math.h>

int main(){
  /* User input numbers */
  float a, b, c;
  printf("Input a: ");
  scanf("%f", &a);
  printf("Input b: ");
  scanf("%f", &b);
  printf("Input c: ");
  scanf("%f", &c);

  /* Calculate discriminant */
  float discriminant =  pow(b, 2) - (4 * a * c);

  //printf("%f", discriminant);

  float root_1, root_2;

  /* Print out final value */
  switch (discriminant > 0) {
    case 1:
      root_1 = (-b + sqrt(discriminant)) / (2*a);
      root_2 = (-b - sqrt(discriminant)) / (2*a);
      printf("\nRoot 1: %.2f\n", root_1);
      printf("Root 2: %.2f\n", root_2);
      break;

    case 0:
      switch (discriminant < 0) {
        case 1:
          printf("[!] Do not have root/s !\n");
          break;
        case 0:
          root_1 = (-b + sqrt(discriminant)) / (2*a);
          root_2 = (-b - sqrt(discriminant)) / (2*a);
          printf("\n(They have the same root !)\n");
          printf("Root 1: %.2f\n", root_1);
          printf("Root 2: %.2f\n", root_2);
          break;
      }
      break;
  }

  return 0;
}
