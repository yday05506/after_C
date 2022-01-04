#include <stdio.h>

void main(void)
{
	int a = 1;
	int b;
	int sum = 0;

	while (1) {
		printf("0~1000 사이의 정수 입력 : ");
		scanf("%d", &a);
		if (!a) break;
		if (!(a % 2 )) {
			b = a * a * a;
			printf("%d\n", b);
		}
		else if (a % 2 ) {
			if(a % 2 == 1)
				sum += a;
			printf("%d\n", sum);
		}
	}
}       