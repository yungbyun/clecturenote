#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 15; i++)  // i는 1부터 15까지 하나씩 증가하면 15번 반복
	{
		printf("*");           // 실행문
		if (i % 5 == 0)        // i를 5로 나눈 나머지가 0과 같으면 i는 5의 배수
		{
			printf("\n");      // i의 값이 출력한 횟수이므로 5의 배수면 줄을 바꾼다.
		}
	}

	return 0;
}