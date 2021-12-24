#include <stdio.h>

int main()
{
    int num = 10;
    int *addressNum = &num;

    printf("\nNum = %d\n", num);
    printf("Address of Num = %p\n", addressNum);

    return 0;
}
