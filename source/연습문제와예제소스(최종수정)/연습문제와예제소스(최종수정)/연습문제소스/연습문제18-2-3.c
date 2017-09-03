#include <stdio.h>

int main(void)
{
	FILE *fp;                     // 파일 포인터
	char str[20] = "empty";       // 문자열 입력 배열
	int ch;                       // 문자 입력

	fp = fopen("a.txt", "r");     // 파일 개방
	ch = fgetc(fp);               // 문자 입력
	fflush(fp);                   // 버퍼 비움
	fgets(str, sizeof(str), fp);  // 한 줄 입력
	printf("%s", str);            // 출력
	fclose(fp);                   // 파일 닫음

	return 0;
}