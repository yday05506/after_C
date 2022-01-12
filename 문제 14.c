#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* p, n;
	puts("number? ");
	scanf("%d", &n);

	p = (int*)malloc(sizeof(int) * 3);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}

	return 0;
}