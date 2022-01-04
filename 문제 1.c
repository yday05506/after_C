#include <stdio.h>

void main(void)
{
	int a = 1;
	int b;
	int sum = 0;

	while (a != 0) {
		printf("0~1000 사이의 정수 입력 : ");
		scanf("%d", &a);
		if (a % 2 == 0) {
			b = a * a * a;
			printf("%d\n", b);
		}
		else if (a % 2 == 1) {
			if(a % 2 == 1)
				sum += a;
			printf("%d\n", sum);
		}
	}
}