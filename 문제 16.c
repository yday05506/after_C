#include <stdio.h>

int main()
{
	char name[100];
	char tel[100];

	printf("�̸� �Է� : ");
	fgets(name, 100, stdin);

	printf("��ȭ��ȣ �Է� : ");
	fgets(tel, 100, stdin);
	printf("\n");

	fputs(name, stdout);
	fputs(tel, stdout);

	return 0;
}