#include <stdio.h>

int main()
{
	char name[100];
	char tel[100];
	
	printf("�̸� �Է� : ");
	fgets(name, 100, stdin);
	printf("��ȭ��ȣ �Է� : ");
	fgets(tel, 100, stdin);

	FILE *info;
	info = fopen("information.txt", "w");

	if (info == NULL)
		printf("open fail");

	fputs(name, info);
	fputs(tel, info);

	fclose(info);

	return 0;
}