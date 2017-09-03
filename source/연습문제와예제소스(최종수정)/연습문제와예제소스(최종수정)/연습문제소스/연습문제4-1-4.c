#include <stdio.h>

int main(void)
{
	int centi;
	double inch;

	centi = 2 * 100;         // 미터를 센티미터로 환산
	inch = centi / 2.54;     // 센티미터를 인치로 환산, 1인치는 2.54센티미터
	printf("2미터는 %.1lf인치입니다.\n", inch);

	return 0;
}