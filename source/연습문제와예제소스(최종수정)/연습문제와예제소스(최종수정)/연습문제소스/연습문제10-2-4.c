#include <stdio.h>

void print_month(int *mp);

int main(void)
{
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	print_month(month);

	return 0;
}

void print_month(int *mp)                    // 배열명을 저장할 포인터
{
	int i;                                   // 반복 제어 변수

	for (i = 0; i < 12; i++)                 // 출력 12번 반복
	{
		printf("%5d", mp[i]);                // 각 달의 일수 출력
		if ((i + 1) % 5 == 0) printf("\n");  // 출력한 개수가 5의 배수면 줄 바꿈
	}
}