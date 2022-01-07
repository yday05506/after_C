#include <stdio.h>

void jegop(int*, int*);

int main()
{
	int a[100] = { 2, 5, 3, 6, 3, 5, 1 };
	jegop(a);

	printf("%d", a);

	return 0;
}

void jegop(int* p)
{
	int sum = 0;
	*(p + 0);
	*(p + 1);
	for (int i = 0; i < 100; i++)
		sum += *(p + i);	//sum += p[i];
}