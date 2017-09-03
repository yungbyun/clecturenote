#include <stdio.h>

void sum(int n);               // 함수 선언

int main(void)
{
	sum(10);                   // 1부터 10까지의 합 출력
	sum(100);                  // 1부터 100까지의 합 출력

	return 0;
}

void sum(int n)                // 매개변수에 합을 구할 마지막 값을 받는다.
{
	int i, tot = 0;            // 반복 제어 변수와 합을 누적할 변수

	for (i = 1; i <= n; i++)   // 1부터 매개변수 n까지 i 증가
	{
		tot += i;              // i를 반복하여 tot에 누적한다.
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", n, tot);  // n과 tot 출력
}