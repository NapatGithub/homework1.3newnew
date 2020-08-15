#include<stdio.h>
#define TWOPI (3.1415926*2.0)
int main()
{
	double radius, circumf;
	printf("Enter radius :");
	scanf_s("%lf", &radius);
	circumf = TWOPI * radius;
	printf("Circumference:%1.2lf\n", circumf);
	return 0;
}