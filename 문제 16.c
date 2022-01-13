#include <stdio.h>

int main()
{
	char name[100];
	char tel[100];

	printf("이름 입력 : ");
	fgets(name, 100, stdin);

	printf("전화번호 입력 : ");
	fgets(tel, 100, stdin);
	printf("\n");

	fputs(name, stdout);
	fputs(tel, stdout);

	return 0;
}