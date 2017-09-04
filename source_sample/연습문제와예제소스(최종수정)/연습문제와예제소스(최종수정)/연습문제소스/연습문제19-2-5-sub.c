#include <stdio.h>                    // printf문이 사용되므로 헤더 파일 포함

extern char grd;                      // 다른 파일의 전역 변수 사용

void input_score(int *kor, int *eng, int *mat)  // 입력 함수
{
	printf("세 과목의 점수를 입력 하세요 : ");
	scanf("%d %d %d", kor, eng, mat);
}

int total(int kor, int eng, int mat)  // 총점을 구하는 함수
{
	int tot;                          // 총점을 저장할 변수

	tot = kor + eng + mat;            // 총점 계산

	return tot;                       // 총점 반환
}

double grade(int tot)                 // 평균은 반환하고 학점은 전역 변수에 저장
{
	double avg;                       // 평균을 저장할 변수

	avg = tot / 3.0;                  // 평균 계산
	if (avg >= 90.0) grd = 'A';       // 평균이 90점 이상이면 A를 grd에 저장
	else if (avg >= 80.0) grd = 'B';  // 80점 이상이면 B
	else if (avg >= 70.0) grd = 'C';  // 70점 이상이면 C
	else grd = 'F';                   // 그 외에는 모두 F

	return avg;                       // 평균 반환
}