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
	printf("������ : ");
	scanf("%lf", &radius);
	printf("���� : %.2lf", area(radius));
}