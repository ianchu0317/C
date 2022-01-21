#include <stdio.h>
#include <math.h>

int reverse(int num)
{
    // Find total digits in num
    int digit = (int) log10(num);

    // Base condition
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}

int main(int argc, char *argv[]){
  // User input data
  int number;
  printf("Input number: ");
  scanf("%d", &number);

  int reversed = reverse(number);
  //
  printf("\nReverse: %d\n", reversed);

  return 0;
}
