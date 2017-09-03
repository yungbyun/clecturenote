#include <stdio.h>

int main(void)
{
	int i;                        // 반복 횟수를 세기 위한 변수
	int sum = 0;                  // 1부터 100까지 값을 더할 변수, 반드시 0으로 초기화

	for (i = 1; i <= 100; i++)    // i는 1부터 100까지 하나씩 증가하면서 100번 반복
	{
		sum += i;                 // i의 값을 sum에 더한다, sum = sum + i와 같음
	}
	printf("%d\n", sum);          // 반복문이 끝난 후에 더한 값을 출력한다.

	return 0;
}