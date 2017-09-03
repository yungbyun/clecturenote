#include <stdio.h>

int main(void)
{
	int num;

	printf("학번 입력 : ");    // 입력 안내 메시지의 출력은 printf 함수로 따로 작성
	scanf("%d", &num);
	printf("학번 : %d", num);

	return 0;
}