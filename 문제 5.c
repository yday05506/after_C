#include <stdio.h>

void star(int nu, char ch)
{
	if (!(nu % 2)) {
		for (int i = nu; i >= 1; i--) {
			for (int j = 1; j <= i; j++)
				printf("%c", ch);
			printf("\n");
		}
	}
	else {
		for (int i = 1; i <= nu; i++) {
			for (int j = 1; j <= i; j++)
				printf("%c", ch);
			printf("\n");
		}
	}
}

int main()
{
	int num;
	char ch;
	printf("����, ���� �Է� : ");
	scanf("%d", &num);
	scanf("%c", &ch);
	//scanf("%d %c", &num, &ch);
	star(num, ch);

	return 0;
}