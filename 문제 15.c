#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int silsu[100];
	double sum = 0.0;
	double* input = (double*)malloc(sizeof(double) * a);

	printf("�Ǽ� ���� �Է� : ");
	scanf("%d", &a);

	printf("�Ǽ� �Է� : ");
	for (int i = 0; i < a; i++) {
		scanf("%lf", &input[i]);
		sum += input[i];
	}

	printf("�Ǽ��� �� : %f", sum);
	free(input);

}