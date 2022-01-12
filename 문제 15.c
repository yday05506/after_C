#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int silsu[100];
	double sum = 0.0;
	double* input = (double*)malloc(sizeof(double) * a);

	printf("실수 개수 입력 : ");
	scanf("%d", &a);

	printf("실수 입력 : ");
	for (int i = 0; i < a; i++) {
		scanf("%lf", &input[i]);
		sum += input[i];
	}

	printf("실수의 합 : %f", sum);
	free(input);

}