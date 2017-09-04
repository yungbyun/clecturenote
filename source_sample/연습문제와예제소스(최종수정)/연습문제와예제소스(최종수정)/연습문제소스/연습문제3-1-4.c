#include <stdio.h>

int main(void)
{
	double avg;                     // 평균을 저장할 double형 변수
	char grade;                     // 학점을 저장할 char형 변수

	avg = 84.5;                     // 평균 대입
	grade = 'B';                    // 학점 대입
	printf("평균 : %.1lf\n", avg);  // 평균 출력
	printf("학점 : %c", grade);     // 학점 출력

	return 0;
}