#include <stdio.h>

int main()
{
	char ch[100] = { "good morning" };
	int cnt = 0;
	
	for (int i = 0; i < sizeof(ch); i++)
		if (ch[i] != 0)
			cnt++;

	printf("%d", cnt);

	return 0;
}