#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int* sub(int p)
{
	static int *a;
	a = &p;

	*a = p * p;

	return a;
}

int main()
{
	int a = 3, *ap;

	sub(a);
	printf("%d", a);

	ap = sub(a);
	printf("%d", *ap);

	return 0;
}