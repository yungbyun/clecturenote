#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char temp[32];                            // 문자열을 임시 입력할 char 배열
	char *ps, *pt;                            // 동적 할당 영역 연결 포인터
	int len = 1;                              // 입력 문자열의 전체 길이 기억

	ps = (char *)calloc(1, 1);                // 한 바이트 동적 할당 후 널문자로 초기화
	while (1)
	{
		printf("메모 입력 : ");
		fgets(temp, sizeof(temp), stdin);     // 한 줄의 메모 입력
		temp[strlen(temp) - 1] = '\0';        // 개행문자 제거
		if (strcmp(temp, "end") == 0) break;  // end 입력하면 반복 종료
		len += strlen(temp) + 1;              // 메모의 전체 길이 계산
		pt = (char*)realloc(ps, len);         // 전체 길이에 맞게 재할당
		if (pt == NULL)                       // 추가 할당이 불가능하면 입력 종료
		{
			printf("메모리 부족...\n");
			break;
		}
		ps = pt;                              // 재할당에 성공한 경우만 ps에 연결
		strcat(ps, temp);                     // 새로 입력한 메모 붙이기
		strcat(ps, " ");                      // 메모 사이에 공백 추가
	}
	printf("%s\n", ps);                       // 전체 메모 출력
	free(ps);                                 // 동적 할당 영역 반환

	return 0;
}