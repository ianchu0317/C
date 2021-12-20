#include <stdio.h>
//#include <stdlib.h>

int area(int, int);

int main()
{
    int length, width;

    printf("Enter length : ");
    scanf("%d", &length);
    printf("Enter width : ");
    scanf("%d", &width);

    printf("\nArea of rectangle = %d sq. units\n", area(length, width));

    return 0;
}

int area(int length, int width)
{
    return length * width;
}
