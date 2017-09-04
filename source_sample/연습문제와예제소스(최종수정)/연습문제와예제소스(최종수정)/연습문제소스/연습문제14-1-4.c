#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[5][20];           // 과일 이름을 입력할 배열
	int i, len;
	int max = 0;                 // 길이가 가장 긴 과일 이름의 길이
	int index = 0;               // 길이가 가장 긴 과일 이름의 배열의 위치

	printf("5개의 과일 이름 입력 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%s", fruit[i]);   // 과일 이름 입력
	}

	for (i = 0; i < 5; i++)
	{
		len = strlen(fruit[i]);  // 과일 이름의 길이 계산
		if (len > max)           // 현재의 최대 길이보다 크면
		{
			max = len;           // 최대 길이로 하고
			index = i;           // 그 위치를 index에 기억
		}
	}
	printf("길이가 가장 긴 과일 이름은 %s입니다.", fruit[index]); // 출력

	return 0;
}