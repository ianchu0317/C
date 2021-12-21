#include <stdio.h>

int findTotalAveragePercentage(int, int, int, int, int);


int main()
{

    int s1, s2, s3, s4, s5;
    int total;
    float  average, percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    //total, average, percentage = findTotalAveragePercentage(s1, s2, s3, s4, s5);
    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5;
    percentage = ((float) total / 500) * 100;

    printf("\nTotal = %d\n", total);
    printf("Average = %.0f\n", average);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}

/* El error de este ejercicio es el datatype de la función
 * Deben coincidir con el return de la función.
 * En este caso hice mal en poner return float en vez de int
 * Es decir, solo se puede devolver valor del mismo tipo de dato.
 */

int findTotalAveragePercentage(int s1, int s2, int s3, int s4, int s5)
{
    int total = s1 + s2 + s3 + s4 + s5;
    float average = total / 5;
    float percentage = total / 500 * 100;

    return total, average, percentage;
}
