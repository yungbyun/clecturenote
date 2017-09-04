#include <stdio.h>

#define CHECK_CNT
#define LEVEL 2

int main(void)
{
	int val, cnt, i;
	int sum = 0;

	printf("양수의 개수 : ");
	scanf("%d", &cnt);

#ifdef CHECK_CNT   // CHECK _CNT 매크로가 정의되면 다음 문장 컴파일
	printf("입력한 개수 : %d\n", cnt);
#endif

	for (i = 0; i < cnt; i++)
	{
		printf("양수 입력 : ");
		scanf("%d", &val);
		sum += val;

#ifdef CHECK_CNT   // CHECK _CNT 매크로가 정의되면 두 번째 endif까지 컴파일
		printf("양수의 개수 : %d, 누적된 값 : %d\n", i + 1, sum);

#if LEVEL == 2     // LEVEL 매크로가 2로 정의되면 다음 문장 컴파일
		printf("현재 입력 값 평균 : %.1lf\n", sum / (double)(i + 1));
#endif             // #if LEVEL = = 2와 짝이 되는 endif

#endif             // #ifdef CHECK _CNT와 짝이 되는 endif
	}
	printf("전체 입력 값의 평균 : %.1lf\n", sum / (double)cnt);

	return 0;
}