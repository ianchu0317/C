#include <stdio.h>


int main()
{
    int n;
    printf("Input N: ");
    scanf("%d", &n);

    printf("Natural numbers from %d-1 in reverse: ", n);

/*    for (int i = 0; i < n; i++)
    {
        printf("%d ", n-i);
    }
*/

    for (int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }


    printf("\n");
    return 0;
}
