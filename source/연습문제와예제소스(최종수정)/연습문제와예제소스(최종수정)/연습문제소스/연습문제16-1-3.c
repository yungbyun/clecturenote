#include <stdio.h>
#include <stdlib.h>                           // malloc, free 함수를 위한 헤더 파일

int main(void)
{
	double *high, *low;                       // 동적 할당 영역을 연결할 포인터

	high = (double *)malloc(sizeof(double));  // 최고기온 동적 할당
	low = (double *)malloc(sizeof(double));   // 최저기온 동적 할당

	if ((high == 0) || (low == 0))            // 동적 할당 여부 검사
	{
		printf("메모리가 부족합니다.\n");
		exit(1);
	}

	printf("최고기온과 최저기온을 입력하세요 : ");
	scanf("%lf%lf", high, low);               // 할당한 저장 공간에 데이터 입력
	printf("일교차는 %.1lf도 입니다.\n", *high - *low); // 일교차 계산 출력

	free(high);                               // 할당한 저장 공간 반환
	free(low);

	return 0;
}