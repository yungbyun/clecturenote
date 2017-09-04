#include <stdio.h>

int main(void)
{
	char a[4][10] = {"horse", "fox", "hippo", "tiger"};
	char *pa[] = {a[0], a[1], a[2], a[3]};
	int count;
	int i;

	count = sizeof(pa) / sizeof(pa[0]);

	for (i = 0; i < count; i++)
	{
		printf("%c", pa[i][i]);
	}

	return 0;
}