#include <stdio.h>
#include <string.h>

typedef struct addressB {
	char name[20], tel[20];
	int age;
}addB;

addB* read(addB* p, int*);
void prt(addB* p, int);

int main()
{
	addB* p;
	int n = 0;
	
	p = (addB*)malloc(sizeof(addB) * 1);
	p = read(p, &n);
	prt(p, n);

	return 0;
}

addB *read(addB* p, int* i) {
	FILE* fp;
	fp = fopen("a.txt", "r");

	if (fp == NULL)
		puts("open fail");

	while (!feof(fp)) {
		fgets(p[*i].name, 20, fp);
		fgets(p[*i].tel, 20, fp);
		fscanf(fp, "%d", &p[*i].age);
		(*i)++;
		p = (addB*)realloc(p, sizeof(addB) * (*i + 2));
	}
	
	fclose(fp);
	
	return p;
}

void prt(addB* p, int n) {
	for (int i = 0; i < n; i++) {
		printf("%15s %10s %5d\n", p[i].name, p[i].tel, p[i].age);
	}
}