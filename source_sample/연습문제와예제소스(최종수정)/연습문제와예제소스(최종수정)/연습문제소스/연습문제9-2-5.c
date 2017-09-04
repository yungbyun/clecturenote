#include <stdio.h>

void assign(int *p);

int main(void)
{
	int a = 0;

	assign(&a);
	printf("%d", a);

	return 0;
}

void assign(int *p)   // main 함수의 변수 a의 주소를 받을 포인터 선언
{
	*p = 10;          // p가 가리키는 main 함수의 변수 a에 10 대입
}