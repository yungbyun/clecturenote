#include <stdio.h>

int main(void)
{
	int ary[4][5];                      // 2차원 int형 배열 선언
	int i, j, cnt = 1;                  // cnt는 배열에 저장할 값

	for (i = 0; i < 4; i++)             // 행의 수
	{
		for (j = 0; j < 5; j++)         // 열의 수
		{
			ary[i][j] = cnt++;          // 1부터 증가시키면서 배열 요소에 저장
		}
	}

	for (i = 0; i < 4; i++)             // 4행
	{
		for (j = 0; j < 5; j++)         // 5열
		{
			printf("%5d", ary[i][j]);   // 5칸씩 자리잡고 출력
		}
		printf("\n");                   // 한 행이 출력되면 줄 바꿈
	}

	return 0;
}