#include <stdio.h>

int my_power(int base, int exp);   // 함수 선언

int main(void)
{
	int res;                       // 반환값을 저장할 변수

	res = my_power(2, 10);         // 밑수와 지수를 주고 함수 호출
	printf("%d\n", res);           // 반환값을 출력

	return 0;
}

int my_power(int base, int exp)    // 밑수와 지수를 매개변수에 저장
{
	int res = 1;                   // 밑수를 곱하여 누적하기 위해 1로 초기화
	int i;

	for (i = 0; i < exp; i++)      // 지수만큼 반복
	{
		res *= base;               // 밑수를 res에 곱하여 누적한다.
	}

	return res;                    // 누적된 결과값 반환
}