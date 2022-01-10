#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int gets(int);

int sub(char *p)
{
	int cnt = 0;

	for (int i = 0; i < strlen(p); i++) {
		if (p[i] >= 'A' && p[i] <= 'Z')
			cnt++;
	}

	return cnt;
}

int main()
{
	char a[100];
	
	gets(a);
	printf("%d\n", sub(a));

	gets(a);
	printf("%d\n", sub(a));
	
	return 0;
}