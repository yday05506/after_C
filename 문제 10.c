#include <stdio.h>

int max(int *aa)
{
	int max = 0;

	for (int i = 0; i < 3; i++) {
		if (aa[i] > max)
			max = aa[i];
	}

	return max;
}

int main()
{
	int a[3];

	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}

	printf("%d", max(a));
	
	return 0;
}