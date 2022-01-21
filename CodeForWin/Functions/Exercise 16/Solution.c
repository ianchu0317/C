#include <stdio.h>
#include <math.h>

int palindrome(int num){
  int digits = (int) log10(num);
  if (num != 0)
    return ((num % 10) * pow(10, digits)) + palindrome(num / 10);
  else
    return 0;
}

int main()
{
  int number;
  printf("Input number: ");
  scanf("%d", &number);

  if (number == palindrome(number))
    printf("\n%d is palindrome\n", number);
  else
    printf("\n%d is not palindrome\n", number);

  return 0;
}
