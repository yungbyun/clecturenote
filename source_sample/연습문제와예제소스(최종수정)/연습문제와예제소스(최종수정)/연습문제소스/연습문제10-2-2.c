#include <stdio.h>

int count_31(int *mp);

int main(void)
{
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int res;

	res = count_31(month);
	printf("31일이 있는 달의 수 : %d\n", res);

	return 0;
}

int count_31(int *mp)             // 배열명을 저장할 포인터
{
	int cnt = 0;                  // 31일의 수를 누적할 변수, 0으로 초기화 필요
	int i;                        // 반복 제어 변수

	for (i = 0; i < 12; i++)      // 12개월이므로 12번 반복
	{
		if (mp[i] == 31) cnt++;   // 각 달의 일수가 31과 같으면 cnt증가
	}

	return cnt;                   // 누적된 cnt의 값 반환
}