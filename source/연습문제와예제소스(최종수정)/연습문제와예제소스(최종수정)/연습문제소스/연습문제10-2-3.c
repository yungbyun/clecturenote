#include <stdio.h>

void change_29(int *mp);

int main(void)
{
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	change_29(month);
	printf("2월의 일 수 : %d\n", month[1]);

	return 0;
}

void change_29(int *mp) // 배열명을 저장할 포인터
{
	mp[1] = 29; // 두 번째 배열 요소 mp[1]에 29 대입, 배열의 값이 바뀜
}