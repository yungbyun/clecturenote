#include <stdio.h>

int main(void)
{
	int ch;          // 문자를 입력할 변수
	int cnt = 0;     // 소문자의 개수를 셀 변수

	ch = getchar();
	while (ch != '\n')
	{
		if ((ch >= 'a') && (ch <= 'z')) cnt++;
		ch = getchar();
	}
	printf("소문자의 개수 : %d\n", cnt);

	return 0;
}