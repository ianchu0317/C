#include <stdio.h>


int pow(int base, int power){
  if (power == 0)
    return 1;
  else if (power > 0)
    return base * pow(base, power - 1);
  else
    return 1 / pow(base, -power);
}

int main(){
  int base, power;
  printf("Input base number: ");
  scanf("%d", &base);
  printf("Input power number: ");
  scanf("%d", &power);

  int result = pow(base, power);

  printf("%d ^ %d = %d\n", base, power, result);
  
  return 0;
}
