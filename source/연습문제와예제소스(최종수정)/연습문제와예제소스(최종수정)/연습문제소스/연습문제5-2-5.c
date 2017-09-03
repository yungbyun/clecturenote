#include <stdio.h>

int main(void)
{
	int age = 25, chest = 95;
	char size;

	if (age < 20)                          // 나이가 20 미만이면
	{
		if (chest < 85) size = 'S';        // 20세 미만 chest 값에 따라 사이즈를 결정
		else if (chest < 95) size = 'M';
		else size = 'L';
	}
	else                                   // 나이가 20보다 크거나 같으면
	{
		if (chest < 90) size = 'S';        // 20세 이상 기준으로 사이즈를 결정
		else if (chest < 100) size = 'M';
		else size = 'L';
	}
	printf("사이즈는 %c입니다.\n", size);  // 결정된 사이즈 출력

	return 0;
}