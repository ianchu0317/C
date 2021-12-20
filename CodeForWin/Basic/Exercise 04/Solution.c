#include <stdio.h>

int perimeter(int, int);

int main()
{

    int length, width;

    printf("Enter length : ");
    scanf("%d", &length);
    printf("Enter width :  ");
    scanf("%d", &width);

    printf("Perimeter of rectangle = %d units\n", perimeter(length, width));
    return 0;
}


int perimeter(int length, int width)
{
    return (length*2 + width*2);
}
