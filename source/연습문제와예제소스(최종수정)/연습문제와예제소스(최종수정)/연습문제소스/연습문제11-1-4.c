#include <stdio.h>

int main(void)
{
	int ch, num;

	printf("하나의 숫자 입력(0~9) : ");
	ch = getchar();
	num = ch - '0';
	num++;
	printf("%c에 1을 더한 값은 %d입니다.\n", ch, num);

	return 0;
}