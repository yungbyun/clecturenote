#include <stdio.h>

double get_next(void);
double ary[] = {0.1, 0.3, 0.5, 0.7, 0.9};

int main(void)
{
	double res = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		res += get_next();
	}
	printf("%.1lf", res);

	return 0;
}

double get_next(void)
{
	static int index = 0;   // ary 배열의 index로 사용할 변수, static 사용 필수
	double val;             // ary 배열 요소의 값을 잠시 보관하기 위한 변수

	val = ary[index];       // index 위치의 배열 요소를 val에 저장
	index++;                // get _next가 다음에 호출될 때 다음 배열 요소를 반환하기 위해 index 증가

	return val;             // 잠시 보관한 배열 요소의 값 반환
}