#include <stdio.h>
#include <string.h>

int main()
{
	char key[100];
	char key1[100];

	printf("키 코드 설정 : ");
	gets(key);

	while (1)
	{
		printf("키 코드 입력 : ");
		gets(key1);

		if (strcmp(key, key1) == 0) {
			printf("welcome");
			break;
		}
	}

	return 0;
}