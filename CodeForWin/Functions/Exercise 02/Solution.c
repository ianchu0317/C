#include <stdio.h>
#include <math.h>

float findDiameter(float radius){
  float diameter = radius * 2;
  return diameter;
}
float findCircumference(float radius){
  float circumference = 2 * M_PI * radius;
  return circumference;
}
float findArea(float radius){
  float area = M_PI * pow(radius, 2);
  return area;
}


int main(){
  /* User input radius */
  float radius;
  printf("Input radius: ");
  scanf("%f", &radius);

  /* Calculate diameter, circumference and area by passing entered value of radius */
  float diameter, circumference, area;
  diameter = findDiameter(radius);
  circumference = findCircumference(radius);
  area = findArea(radius);

  /* Print out result */
  printf("\nDiameter = %.0f units\n", diameter);
  printf("Circumference = %.2f units\n", circumference);
  printf("Area = %.2f units\n", area);

  return 0;
}
