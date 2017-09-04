#include <stdio.h>

int prime_check(int n);                     // 함수 선언

int main(void)
{
	int res;                                // 함수의 반환값을 저장할 변수

	res = prime_check(32767);               // 32767을 주고 함수 호출
	if (res == 1) printf("소수입니다.\n");  // 반환값이 1이면 소수
	else printf("소수가 아닙니다.\n");

	return 0;
}

int prime_check(int n)                      // 함수 정의
{
	int i;

	for (i = 2; i < n; i++)                 // i의 값은 2부터 n-1까지 증가
	{
		if ((n % i) == 0) return 0;         // 최초 나누어 떨어질 때 0 반환
	}

	return 1;                               // for문에서 반환되지 않고 반복을 모두 수행한 경우는
}                                           // 한 번도 나누어 떨어지지 않은 것이므로 소수임