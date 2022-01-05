#include <stdio.h>

void area(double rad)
{
	double PI = 3.14;
	double result = rad * rad * PI;
	printf("³ĞÀÌ : %.2lf", result);
}

int main()
{
	double radius;
	printf("¹İÁö¸§ : ");
	scanf("%lf", &radius);
	area(radius);
}