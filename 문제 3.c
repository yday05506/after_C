#include <stdio.h>

void area(int, int);
int main()
{
	int base, height;

	printf("세로 : ");
	scanf("%d", &height);
	printf("가로 : ");
	scanf("%d", &base);
	area(base, height);
	

	return 0;
}

void area(int ba, int he) {
	int result = ba * he;
	printf("넓이 : %d", result);
}