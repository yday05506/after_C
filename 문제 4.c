#include <stdio.h>

double area(double rad)
{
	double PI = 3.14;
	double result = rad * rad * PI;
	return result;
}

int main()
{
	double radius;
	printf("¹İÁö¸§ : ");
	scanf("%lf", &radius);
	printf("³ĞÀÌ : %.2lf", area(radius));
}