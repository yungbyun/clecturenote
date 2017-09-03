#include <stdio.h>

int main(void)
{
	double ary[5] = {1.2, 3.5, 7.4, 0.5, 10.0};
	double *pa = ary;
	double tot = 0;                         // 총 합을 누적할 변수
	int i;

	printf("배열 요소의 값 : ");
	for (i = 0; i < 5; i++)
	{
		printf("%.1lf ", *pa);              // pa가 가리키는 배열 요소 출력
		tot += *pa;                         // pa가 가리키는 배열 요소 누적
		pa++;                               // pa를 다음 배열 요소로 이동
	}
	printf("\n평균 : %.2lf\n", tot / 5.0);  // 평균 계산과 출력

	return 0;
}