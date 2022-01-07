#include <stdio.h>
#include <string.h>

int main()
{
	int a[100], b[100];
	int c[100] = "";
	int cnt = 0;
	gets(a);
	gets(b);
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] >= 'A' && a[i] <= 'Z')
			cnt++;
	}

	strcat(c, a);
	c[strlen(a)] = '/';
	//strcat(c, " / ");
	strcat(c, b);

	return 0;
}