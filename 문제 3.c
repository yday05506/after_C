#include <stdio.h>

void area(int, int);
int main()
{
	int base, height;

	printf("���� : ");
	scanf("%d", &height);
	printf("���� : ");
	scanf("%d", &base);
	area(base, height);
	

	return 0;
}

void area(int ba, int he) {
	int result = ba * he;
	printf("���� : %d", result);
}