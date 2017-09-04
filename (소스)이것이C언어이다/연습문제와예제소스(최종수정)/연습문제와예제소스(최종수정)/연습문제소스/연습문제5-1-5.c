#include <stdio.h>

int main(void)
{
	int tot = 259;          // 총점 초기화
	double avg;             // 평균을 저장할 변수
	char grade;             // 학점을 저장할 변수

	avg = tot / 3.0;        // 평균 계산
	if (avg >= 90.0)        // 평균이 90점 이상이면 A 학점
	{
		grade = 'A';
	}
	else if (avg >= 80.0)   // 평균이 90점 미만 80점 미상이면 B 학점
	{
		grade = 'B';
	}
	else if (avg >= 70.0)   // 평균이 80점 미만 70점 이상이면 C 학점
	{
		grade = 'C';
	}
	else                    // 그 외는 F 학점
	{
		grade = 'F';
	}
	printf("평균 : %.1lf, 학점 : %c\n", avg, grade); // 구한 평균과 학점 출력

	return 0;
}