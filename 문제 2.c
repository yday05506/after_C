#include <stdio.h>

int main()
{
	void jegop(int);
	int a, r;
	scanf("%d", &a);
	jegop(a);
	return 0;
}
void jegop(int b)
{
	int a, r;
	//scanf("%d", &a);
	r = b * b;
	printf("%d", r);
}