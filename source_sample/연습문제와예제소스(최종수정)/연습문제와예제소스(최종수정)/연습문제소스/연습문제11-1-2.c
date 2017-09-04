#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자 입력 : ");
	scanf("%c", &ch);                                  // 문자 입력
	printf("%c문자의 아스키 코드값 : %d\n", ch, ch);   // %d로 아스키 코드값 출력

	return 0;
}