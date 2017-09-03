#include <stdio.h>

int main(void)
{
	FILE *fp;                    // 파일 포인터
	int ch;                      // 파일에서 읽은 문자 저장
	int cnt = 0;                 // 출력된 줄 수 저장

	fp = fopen("a.txt", "r");    // 읽기 전용으로 파일 개방
	if (fp == NULL)              // 개방 여부를 확인
	{
		printf("파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);          // 파일에서 문자 입력
		if (ch == EOF)           // 파일의 끝이면 반복 종료
		{
			break;
		}
		putchar(ch);             // 화면에 문자 출력
		if (ch == '.')           // 마침표가 입력되면
		{
			putchar('\n');       // 줄 바꾸기
			cnt++;               // 줄이 바뀔 때마다 줄 수 증가
			if ((cnt % 2) == 0)  // 2줄마다 한 줄 띄움
			{
				putchar('\n');
			}
		}
	}
	fclose(fp);                  // 파일 닫음

	return 0;
}