#include <stdio.h>

void area(double rad)
{
	double PI = 3.14;
	double result = rad * rad * PI;
	printf("���� : %.2lf", result);
}

int main()
{
	double radius;
	printf("������ : ");
	scanf("%lf", &radius);
	area(radius);
}