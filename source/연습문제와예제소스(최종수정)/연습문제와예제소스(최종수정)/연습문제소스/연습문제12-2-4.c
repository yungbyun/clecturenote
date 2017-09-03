#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80];                     // 두 단어를 입력할 배열
	char *pa, *pb;                               // 결과 문자열을 연결할 포인터

	printf("두 단어 입력 : ");
	scanf("%s %s", str1, str2);                  // 두 단어 입력
	if (strlen(str1) > strlen(str2)) pa = str1;  // strlen 함수로 단어의 길이 비교
	else pa = str2;
	if (strcmp(str1, str2) < 0) pb = str1;       // strcmp 함수로 사전 순서 판단
	else pb = str2;
	printf("길이가 긴 단어 : %s\n", pa);
	printf("사전에 먼저 나오는 단어 : %s\n", pb);

	return 0;
}