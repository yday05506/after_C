#include <stdio.h>
#include <string.h>

int main()
{
	char key[100];
	char key1[100];

	printf("Ű �ڵ� ���� : ");
	gets(key);

	while (1)
	{
		printf("Ű �ڵ� �Է� : ");
		gets(key1);

		if (strcmp(key, key1) == 0) {
			printf("welcome");
			break;
		}
	}

	return 0;
}