#include <stdio.h>

int main(void)
{
	char *order[] = {"첫", "두", "세"};     // 배열의 순서를 출력할 문자열
	double ary1[4] = {1.5, 2.3, 7.7, 4.9};
	double ary2[4] = {3.4, 5.2, 4.0, 9.1};
	double ary3[4] = {0.3, 7.2, 8.4, 6.6};
	double *pary[3] = {ary1, ary2, ary3};   // 포인터 배열로 3개의 배열 연결
	double avg[3];                          // 각 배열의 평균을 저장할 배열
	double tot, max;                        // 총점과 평균의 최댓값을 저장할 변수
	int i, j, index;                        // index는 평균 배열의 최댓값 위치 저장

	for (i = 0; i < 3; i++)                 // 3행, 각 배열의 평균 계산
	{
		tot = 0;                            // 배열이 바뀔 때마다 0으로 초기화
		for (j = 0; j < 4; j++)             // 4열
		{
			tot += pary[i][j];              // 각 배열의 총점 누적
		}
		avg[i] = tot / 4.0;                 // 평균 계산
	}
	max = 0;                                // 평균의 최댓값을 0으로 가정
	index = 0;                              // 평균 배열의 첫 번째 요소를 최댓값으로 가정
	for (i = 0; i < 3; i++)                 // 평균의 최댓값 구하기
	{
		if (avg[i] > max)                   // 배열의 평균이 현재의 최댓값보다 크면
		{
			max = avg[i];                   // 최댓값으로 설정
			index = i;                      // 그 배열의 위치 기억
		}
	}
	printf("%s 번째 배열 :", order[index]); // 평균이 가장 큰 배열의 순서 출력
	for (i = 0; i < 4; i++)
	{
		printf("%5.1lf", pary[index][i]);   // 평균이 가장 큰 배열의 요소 출력
	}
	printf("\n평균 : %.1lf", max);          // 평균의 최댓값 출력

	return 0;
}