#include <stdio.h>

int main()
{
	char name[100];
	char tel[100];
	
	printf("ют╥б : ");
	fgets(name, 100, stdin);

	FILE *info;
	info = fopen("information.txt", "a");

	if (info == NULL)
		printf("open fail");

	fputs(name, info);
	//fputs(tel, info);

	fclose(info);

	return 0;
}