#include <stdio.h>

int main(void)
{
	int a = 10, b = 3;
	int res;

	if (a > b)                    // a가 b보다 크면
	{
		res = a / b;              // a, b가 모두 정수이므로 몫 계산
	}
	else                          // 그렇지 않으면(a가 b보다 작거나 같으면)
	{
		res = a % b;              // a를 b로 나눈 나머지 계산
	}
	printf("결과 : %d\n", res);   // 계산된 결과값 출력

	return 0;
}