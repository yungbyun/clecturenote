#include <stdio.h>

int count_num(int(*pa1)[4], int(*pa2)[4], int(*ps)[2]);

int main(void)
{
	int ary1[3][4] = {
		{15, 3, 9, 11},
		{23, 7, 10, 12},
		{0, 17, 55, 24}
	};
	int ary2[3][4] = {
		{13, 8, 9, 15},
		{23, 0, 10, 11},
		{29, 17, 43, 3}
	};
	int same_num[12][2];                        // 위치와 값이 같은 경우 그 위치를 저장할 배열
	int i, cnt;                                 // 위치와 값이 같은 번호의 수 저장

	cnt = count_num(ary1, ary2, same_num);      // 같은 값의 수를 구하고 위치 저장
	printf("일치하는 번호의 수 : %d\n", cnt);
	printf("배열에서의 위치(행, 열)...\n");

	for (i = 0; i < cnt; i++)
	{
		printf("(%d, %d)\n", same_num[i][0], same_num[i][1]);  // 위치 출력
	}

	return 0;
}

int count_num(int(*pa1)[4], int(*pa2)[4], int(*ps)[2])
{
	int i, j, cnt = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (pa1[i][j] == pa2[i][j])          // 같은 위치에 같은 값이 있는 경우
			{
				ps[cnt][0] = i;                  // 행 위치 저장
				ps[cnt][1] = j;                  // 열 위치 저장
				cnt++;                           // 수 증가
			}
		}
	}

	return cnt;
}
