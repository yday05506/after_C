#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
	char name[100];
	char tel[100];
	int age;
}info;

int main()
{
	info i1[3];
	char n[2];

	for (int i = 0; i < 3; i++) {
		printf("�̸� : ");
		gets(i1[i].name);
		printf("��ȭ��ȣ : ");
		gets(i1[i].tel);
		printf("���� : ");
		scanf("%d", &i1[i].age);
		
		gets(n);
	}

	for (int i = 0; i < 3; i++) {
		printf("�̸��� %s�̸�, ��ȭ��ȣ�� %s, ���̴� %d�Դϴ�.", i1[i].name, i1[i].tel, i1[i].age);
	}

	return 0;
}