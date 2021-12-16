#include <stdio.h>
#include <stdlib.h>


struct distance{
	float inch;
	float feet;
};


struct distance sum_distance(struct distance *d1, struct distance *d2)
{
	struct distance d3 = {(d1->inch + d2->inch), (d1->feet + d2->feet)};
	return d3;
}



int main()
{
	struct distance d1, d2;

	//First distance
	printf("Enter the first distance (inch - feet) : ");
	scanf("%f %f", &(d1.inch), &(d1.feet));
	__fpurge(stdin);

	//Second distances
	printf("Enter the second distance (inch - feet) : ");
	scanf("%f %f", &(d2.inch), &(d2.feet));
	__fpurge(stdin);


	struct distance d3 = sum_distance(&d1, &d2);
	//struct distance d3 = {(d1.inch + d2.inch), (d1.feet + d2.feet)};
	printf("The sum of the two distances is : %f %f", d3.inch, d3.feet);

	return 0;
}
