#include <stdio.h>

int main(void)
{
	int A[3] = {1, 2, 3};
	int B[10];
	int i;

	for (i = 0; i < 10; i++)      // B 배열을 채우므로 B 배열 요소의 수만큼 반복
	{
		B[i] = A[i % 3];          // A 배열의 첨자가 0~2의 값을 갖도록 나머지 연산자 사용
	}

	for (i = 0; i < 10; i++)
	{
		printf("%5d", B[i]);      // B 배열 출력
	}

	return 0;
}