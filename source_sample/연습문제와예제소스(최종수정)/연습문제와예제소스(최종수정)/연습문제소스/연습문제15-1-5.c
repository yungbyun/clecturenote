#include <stdio.h>

void input_str(char(*)[80]);   // 배열에 문자열을 입력하는 함수
void print_str(char(*)[80]);   // 배열의 문자열을 출력하는 함수

int main(void)
{
	char str[5][80];           // char 2차원 배열 선언

	input_str(str);            // 배열명을 주고 입력 함수 호출
	print_str(str);            // 배열명을 주고 출력 함수 호출

	return 0;
}

void input_str(char(*ps)[80])  // 매개변수는 배열 포인터
{
	int i;

	printf("다섯 개의 문장을 입력하세요.\n");
	for (i = 0; i < 5; i++)
	{
		gets(ps[i]);           // ps[i]는 부분배열명으로 각 행의 시작 위치
	}
}

void print_str(char(*ps)[80])
{
	int i;

	printf("입력된 문장은...\n");
	for (i = 0; i < 5; i++)
	{
		puts(ps[i]);
	}
}