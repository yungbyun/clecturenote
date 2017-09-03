#include <stdio.h>

void exchange(double *, double *);                            // 교환 함수 선언
void func(void(*fp)(double *, double *), double, double);     // 교환 함수 받음

int main(void)
{
	double a = 10, b = 20;                                    // 변수 선언과 초기화

	func(exchange, a, b);                                     // 함수와 교환할 값을 주고 호출

	return 0;
}

void func(void(*fp)(double *, double *), double a, double b)  // 함수 포인터
{
	printf("a:%.1lf, b:%.1lf\n", a, b);                       // 바꾸기 전의 값 출력
	fp(&a, &b);                                               // 함수 포인터로 교환 함수 호출
	printf("a:%.1lf, b:%.1lf\n", a, b);                       // 바꾼 후의 값 출력
}

void exchange(double *pa, double *pb)                         // func 함수의 매개변수 a, b의 값 교환
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}