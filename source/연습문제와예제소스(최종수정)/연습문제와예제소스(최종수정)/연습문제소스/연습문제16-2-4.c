#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pa[3], *pb[3], *pc[3];                  // 행렬의 각 행을 연결할 포인터 배열
	int i, j;

	for (i = 0; i < 3; i++)                      // 3개의 2차원 배열을 동적으로 만든다.
	{
		pa[i] = (int *)malloc(4 * sizeof(int));
		pb[i] = (int *)malloc(4 * sizeof(int));
		pc[i] = (int *)malloc(4 * sizeof(int));
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			pa[i][j] = i * 4 + j + 1;            // 2개의 행렬에 값 초기화
			pb[i][j] = 12 - (i * 4 + j);
			pc[i][j] = pa[i][j] + pb[i][j];      // 각 요소의 합을 3번째 행렬에 저장
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pc[i][j]);             // 3번째 행렬의 값 출력
		}
		printf("\n");                            // 한 행을 출력한 후에 줄 바꿈
	}

	return 0;
}