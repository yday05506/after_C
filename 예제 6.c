#include <stdio.h>

int main()
{
	char a[100];
	//gets(a);
	//gets_s(a, 100);
	fgets(a, 100, stdin);

	puts(a);

	return 0;
}