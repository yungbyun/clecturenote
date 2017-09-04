#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)    // 명령행 인수를 받을 매개변수 사용
{
	int i;
	int count;                     // 반복 횟수 저장

	if (argc < 3)                  // 명령행 인수의 개수가 적은 경우 검사
	{
		printf("프로그램 사용법 오류입니다.\n");
		printf("사용법 : string_print 문자열 반복횟수\n");
		exit(1);
	}
	count = atoi(argv[2]);         // 문자열로 된 반복 횟수를 정수로 변환
	for (i = 0; i < count; i++)
	{
		printf("%s\n", argv[1]);   // 명령행 인수로 넘어온 문자열 출력
	}

	return 0;
}