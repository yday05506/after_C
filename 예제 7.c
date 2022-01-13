#include <stdio.h>

int main()
{
	char a[100] = "good morning";
	FILE* fp;
	fp = fopen("a.txt", "w");

	if (fp == NULL)
		puts("open fail");

	fputs(a, fp);

	fclose(fp);

	return 0;
}