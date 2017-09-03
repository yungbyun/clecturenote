#include <stdio.h>

int main(void)
{
	double a = 4.0, b = 1.2;

	printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
	printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
	printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
	printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
	// double형이므로 소수점까지 계산한다.
	// 소수점 이하 첫째 자리까지 출력해야 하므로 % 다음에 .1을 사용한다.

	return 0;
}