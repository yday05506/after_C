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
		printf("이름 : ");
		gets(i1[i].name);
		printf("전화번호 : ");
		gets(i1[i].tel);
		printf("나이 : ");
		scanf("%d", &i1[i].age);
		
		gets(n);
	}

	for (int i = 0; i < 3; i++) {
		printf("이름은 %s이며, 전화번호는 %s, 나이는 %d입니다.", i1[i].name, i1[i].tel, i1[i].age);
	}

	return 0;
}