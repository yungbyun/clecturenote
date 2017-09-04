#include <stdio.h>

int main(void)
{
	char space, tab, enter;                               // 문자를 입력받을 변수

	scanf("%c%c%c", &space, &tab, &enter);                // %c로 제어 문자 입력
	printf("스페이스 키의 아스키 코드값 : %d\n", space);  // %d로 아스키 코드값 출력
	printf("탭 키의 아스키 코드값 : %d\n", tab);
	printf("엔터 키의 아스키 코드값 : %d\n", enter);

	return 0;
}