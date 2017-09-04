#include <stdio.h>

int quot(int a, int b, int *p);

int main(void)
{
	int a, b, res;

	printf("두 정수 입력 : ");
	scanf("%d %d", &a, &b);
	if (quot(a, b, &res) == -1)      // 몫을 구하는 함수 quot 호출
	{
		printf("0으로 나눌 수 없습니다!");
	}
	else
	{
		printf("%d를 %d로 나눈 몫은 %d입니다.", a, b, res);
	}

	return 0;
}

int quot(int a, int b, int *p)
{
	if (b == 0)                      // 나누는 값이 0이면
	{
		return -1;                   // -1을 반환하여 예외 상황을 알림
	}
	else                             // 나누는 값이 0이 아니면
	{
		*p = a / b;                  // 몫을 구해 p를 통해 main 함수의 res에 저장
		return 0;                    // -1이 아닌 값 반환
	}
}