#include <stdio.h>

int main(void)
{
	char *pary[] = {"가위", "바위", "보"};
	int n;

	while (1)
	{
		printf("정수 입력 : ");
		scanf("%d", &n);
		if (n < 0) break;
		printf("%s\n", pary[(n - 1) % 3]);
	}

	return 0;
}