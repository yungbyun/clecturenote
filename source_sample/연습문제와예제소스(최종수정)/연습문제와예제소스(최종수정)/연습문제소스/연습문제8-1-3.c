#include <stdio.h>

int main(void)
{
	double ary[5] = {1.0, 2.1, 3.2, 4.3, 5.4};    // double 배열 선언과 초기화
	int i;                                        // 반복 제어 변수

	for (i = 0; i < 5; i++)                       // 배열 요소 수만큼 반복
	{
		printf("%6.1lf", ary[4 - i]);             // 첨자를 4부터 1씩 감소하면서 출력
	}

	return 0;
}