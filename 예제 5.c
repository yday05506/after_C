#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* p, n = 1, i = 0;
	char yn;
	//puts("number? ");
	//scanf("%d", &n);

	p = (int*)malloc(sizeof(int) * 3);
	
	if (p == NULL) {
		printf("allocation error");
	}

	while (1) {
		scanf("%d", &p[i]);
		printf("more?(y/n) : ");
		scanf("%c", &yn);
		if (yn == 'y') {
			p = (int*)realloc(p, sizeof(int) * (i + 2));
			i++;
		}
		else if (yn == 'n')
			break;
	}

	for (int j = 0; j < i + 1; j++) {
		printf("%d", p[j]);
	}

	free(p);
	return 0;
}