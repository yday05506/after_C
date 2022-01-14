#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	int c;

	fscanf(stdin, "%s", a);
	fscanf(stdin, "%d", &c);
	fprintf(stdout, "%s", a);
	fprintf(stdout, "%d", c);



	return 0;
}