#include <stdio.h>

int main(void)
{
	char ch;                        // 문자 입력 변수
	int cnt = 0;                    // 개행문자의 개수를 누적할 변수

	while (scanf("%c", &ch) != -1)  // scanf 함수는 Ctrl +Z 키를 누르면 -1을 반환한다.
	{
		if (ch == '\n') cnt++;      // 입력한 문자가 개행문자면 개수 증가
	}
	printf("엔터 키를 누른 횟수 : %d\n", cnt);

	return 0;
}