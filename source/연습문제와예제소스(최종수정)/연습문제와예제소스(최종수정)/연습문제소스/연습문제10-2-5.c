#include <stdio.h>

void reverse(double *pa, int size);

int main(void)
{
	double ary[] = {1.5, 20.1, 16.4, 2.3, 3.5};
	int i;

	reverse(ary, sizeof(ary) / sizeof(*ary));
	for(i = 0; i < 5; i++)
	{
		printf("%5.1lf", ary[i]);
	}
	printf("\n");

	return 0;
}

void reverse(double *pa, int size)  // 배열명과 배열 요소 수를 받음
{
	int i;                          // 반복 제어 변수
	double temp;                    // 배열 요소의 값을 바꿀 때 필요한 임시 변수

	for (i = 0; i < size / 2; i++)  // 좌우의 값을 바꾸는 횟수는 배열 요소 수의 절반
	{
		temp = pa[i];               // 왼쪽의 배열 요소를 임시 변수에 대입
		pa[i] = pa[size - 1 - i];   // 왼쪽의 배열 요소에 오른쪽의 배열 요소 대입
		pa[size - 1 - i] = temp;    // 오른쪽의 배열 요소에 임시 변수의 값 대입
	}
}
